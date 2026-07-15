#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BaseModifierInstance; }
namespace System { class String; }

#define CLASS_1_B84DBACAB8E3F5B6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1529F0A0)
#define CLASS_1_B84DBACAB8E3F5B6_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1529F3F0)
#define CLASS_1_B84DBACAB8E3F5B6_GET_MODIFIERACTUALCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x1529F3D0)
#define CLASS_1_B84DBACAB8E3F5B6_GET_MODIFIERCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x1529F3B0)
#define CLASS_1_B84DBACAB8E3F5B6_GET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x1529F370)
#define CLASS_1_B84DBACAB8E3F5B6_GET_MODIFIEROWNERENTITYID_OFFSET UNITYSDK_OFFSET(0x1529F390)
#define CLASS_1_B84DBACAB8E3F5B6_METHOD_1_B1396EDB270C8F5F_OFFSET UNITYSDK_OFFSET(0x1529F100)
#define CLASS_1_B84DBACAB8E3F5B6_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1529F400)
#define CLASS_1_B84DBACAB8E3F5B6_SET_MODIFIERACTUALCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x1529F3E0)
#define CLASS_1_B84DBACAB8E3F5B6_SET_MODIFIERCASTERENTITYID_OFFSET UNITYSDK_OFFSET(0x1529F3C0)
#define CLASS_1_B84DBACAB8E3F5B6_SET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0x1529F380)
#define CLASS_1_B84DBACAB8E3F5B6_SET_MODIFIEROWNERENTITYID_OFFSET UNITYSDK_OFFSET(0x1529F3A0)
#define CLASS_1_B84DBACAB8E3F5B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1529F410)

inline static constexpr unsigned int Class_1_B84DBACAB8E3F5B6_TypeDefinitionIndex = 51970;

class Class_1_B84DBACAB8E3F5B6 : public ::System::Object
{
public:
	::System::String* _ModifierName_k__BackingField; // 0x10
	::System::UInt32 _ModifierActualCasterEntityID_k__BackingField; // 0x18
	::RPG::GameCore::FixPoint _Count_k__BackingField; // 0x20
	::System::UInt32 _ModifierCasterEntityID_k__BackingField; // 0x28
	::System::UInt32 _ModifierOwnerEntityID_k__BackingField; // 0x2C

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
