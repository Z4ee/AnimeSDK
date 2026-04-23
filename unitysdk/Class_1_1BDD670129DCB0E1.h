#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BaseModifierInstance; }
namespace System { class String; }

#define CLASS_1_1BDD670129DCB0E1_CLEAR_OFFSET UNITYSDK_OFFSET(0x123659F0)
#define CLASS_1_1BDD670129DCB0E1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x12365BD0)
#define CLASS_1_1BDD670129DCB0E1_GET_MODIFIERACTUALCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x12365BB0)
#define CLASS_1_1BDD670129DCB0E1_GET_MODIFIERCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x12365B90)
#define CLASS_1_1BDD670129DCB0E1_GET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x12365B50)
#define CLASS_1_1BDD670129DCB0E1_GET_MODIFIEROWNERENTITYID_OFFSET UNITYSDK_OFFSET(0x12365B70)
#define CLASS_1_1BDD670129DCB0E1_METHOD_1_64C5173A515C0BA6_OFFSET UNITYSDK_OFFSET(0x12365A40)
#define CLASS_1_1BDD670129DCB0E1_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x12365BE0)
#define CLASS_1_1BDD670129DCB0E1_SET_MODIFIERACTUALCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x12365BC0)
#define CLASS_1_1BDD670129DCB0E1_SET_MODIFIERCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x12365BA0)
#define CLASS_1_1BDD670129DCB0E1_SET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x12365B60)
#define CLASS_1_1BDD670129DCB0E1_SET_MODIFIEROWNERENTITYID_OFFSET UNITYSDK_OFFSET(0x12365B80)
#define CLASS_1_1BDD670129DCB0E1__CTOR_OFFSET UNITYSDK_OFFSET(0x12365BF0)

inline static constexpr unsigned int Class_1_1BDD670129DCB0E1_TypeDefinitionIndex = 50219;

class Class_1_1BDD670129DCB0E1 : public ::System::Object
{
public:
	::System::String* _ModifierName_k__BackingField; // 0x10
	::System::UInt32 _ModifierOwnerEntityID_k__BackingField; // 0x18
	::System::UInt32 _ModifierCasterEntityID_k__BackingField; // 0x1C
	::System::UInt32 _ModifierActualCasterEntityID_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _Count_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BDD670129DCB0E1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BDD670129DCB0E1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_64C5173A515C0BA6(::RPG::GameCore::BaseModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_1BDD670129DCB0E1_METHOD_1_64C5173A515C0BA6_OFFSET))(this, a1);
	}

	::System::String* get_ModifierName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BDD670129DCB0E1_GET_MODIFIERNAME_OFFSET))(this);
	}

	::System::Void set_ModifierName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1BDD670129DCB0E1_SET_MODIFIERNAME_OFFSET))(this, value);
	}

	::System::UInt32 get_ModifierOwnerEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BDD670129DCB0E1_GET_MODIFIEROWNERENTITYID_OFFSET))(this);
	}

	::System::Void set_ModifierOwnerEntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1BDD670129DCB0E1_SET_MODIFIEROWNERENTITYID_OFFSET))(this, value);
	}

	::System::UInt32 get_ModifierCasterEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BDD670129DCB0E1_GET_MODIFIERCASTERENTITYID_OFFSET))(this);
	}

	::System::Void set_ModifierCasterEntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1BDD670129DCB0E1_SET_MODIFIERCASTERENTITYID_OFFSET))(this, value);
	}

	::System::UInt32 get_ModifierActualCasterEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BDD670129DCB0E1_GET_MODIFIERACTUALCASTERENTITYID_OFFSET))(this);
	}

	::System::Void set_ModifierActualCasterEntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1BDD670129DCB0E1_SET_MODIFIERACTUALCASTERENTITYID_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_Count()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BDD670129DCB0E1_GET_COUNT_OFFSET))(this);
	}

	::System::Void set_Count(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_1BDD670129DCB0E1_SET_COUNT_OFFSET))(this, value);
	}
};
