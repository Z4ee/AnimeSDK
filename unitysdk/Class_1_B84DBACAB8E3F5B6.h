#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BaseModifierInstance; }
namespace System { class String; }

#define CLASS_1_B84DBACAB8E3F5B6_CLEAR_OFFSET UNITYSDK_OFFSET(0xB722AD0)
#define CLASS_1_B84DBACAB8E3F5B6_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xB722E10)
#define CLASS_1_B84DBACAB8E3F5B6_GET_MODIFIERACTUALCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0xB722DF0)
#define CLASS_1_B84DBACAB8E3F5B6_GET_MODIFIERCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0xB722DD0)
#define CLASS_1_B84DBACAB8E3F5B6_GET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0xB722D90)
#define CLASS_1_B84DBACAB8E3F5B6_GET_MODIFIEROWNERENTITYID_OFFSET UNITYSDK_OFFSET(0xB722DB0)
#define CLASS_1_B84DBACAB8E3F5B6_METHOD_1_B1396EDB270C8F5F_OFFSET UNITYSDK_OFFSET(0xB722B20)
#define CLASS_1_B84DBACAB8E3F5B6_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xB722E20)
#define CLASS_1_B84DBACAB8E3F5B6_SET_MODIFIERACTUALCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0xB722E00)
#define CLASS_1_B84DBACAB8E3F5B6_SET_MODIFIERCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0xB722DE0)
#define CLASS_1_B84DBACAB8E3F5B6_SET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0xB722DA0)
#define CLASS_1_B84DBACAB8E3F5B6_SET_MODIFIEROWNERENTITYID_OFFSET UNITYSDK_OFFSET(0xB722DC0)
#define CLASS_1_B84DBACAB8E3F5B6__CTOR_OFFSET UNITYSDK_OFFSET(0xB722E30)

inline static constexpr unsigned int Class_1_B84DBACAB8E3F5B6_TypeDefinitionIndex = 54441;

class Class_1_B84DBACAB8E3F5B6 : public ::System::Object
{
public:
	::System::String* _ModifierName_k__BackingField; // 0x10
	::System::UInt32 _ModifierCasterEntityID_k__BackingField; // 0x18
	::System::UInt32 _ModifierOwnerEntityID_k__BackingField; // 0x1C
	::System::UInt32 _ModifierActualCasterEntityID_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _Count_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B84DBACAB8E3F5B6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B84DBACAB8E3F5B6_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_B1396EDB270C8F5F(::RPG::GameCore::BaseModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_B84DBACAB8E3F5B6_METHOD_1_B1396EDB270C8F5F_OFFSET))(this, a1);
	}

	::System::String* get_ModifierName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B84DBACAB8E3F5B6_GET_MODIFIERNAME_OFFSET))(this);
	}

	::System::Void set_ModifierName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B84DBACAB8E3F5B6_SET_MODIFIERNAME_OFFSET))(this, a1);
	}

	::System::UInt32 get_ModifierOwnerEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B84DBACAB8E3F5B6_GET_MODIFIEROWNERENTITYID_OFFSET))(this);
	}

	::System::Void set_ModifierOwnerEntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B84DBACAB8E3F5B6_SET_MODIFIEROWNERENTITYID_OFFSET))(this, a1);
	}

	::System::UInt32 get_ModifierCasterEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B84DBACAB8E3F5B6_GET_MODIFIERCASTERENTITYID_OFFSET))(this);
	}

	::System::Void set_ModifierCasterEntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B84DBACAB8E3F5B6_SET_MODIFIERCASTERENTITYID_OFFSET))(this, a1);
	}

	::System::UInt32 get_ModifierActualCasterEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B84DBACAB8E3F5B6_GET_MODIFIERACTUALCASTERENTITYID_OFFSET))(this);
	}

	::System::Void set_ModifierActualCasterEntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B84DBACAB8E3F5B6_SET_MODIFIERACTUALCASTERENTITYID_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_Count()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B84DBACAB8E3F5B6_GET_COUNT_OFFSET))(this);
	}

	::System::Void set_Count(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_B84DBACAB8E3F5B6_SET_COUNT_OFFSET))(this, a1);
	}
};
