#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConditionType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8F494CBE88B08C04_GET_DESCSTRING_OFFSET UNITYSDK_OFFSET(0x12CE1690)
#define CLASS_1_8F494CBE88B08C04_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x12CE1670)
#define CLASS_1_8F494CBE88B08C04_SET_DESCSTRING_OFFSET UNITYSDK_OFFSET(0x12CE16A0)
#define CLASS_1_8F494CBE88B08C04_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x12CE1680)
#define CLASS_1_8F494CBE88B08C04__CTOR_OFFSET UNITYSDK_OFFSET(0x12CE16B0)

inline static constexpr unsigned int Class_1_8F494CBE88B08C04_TypeDefinitionIndex = 79420;

class Class_1_8F494CBE88B08C04 : public ::System::Object
{
public:
	::System::String* _DescString_k__BackingField; // 0x10
	::RPG::Client::MechCraft::MechCraftConditionType _Type_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F494CBE88B08C04__CTOR_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftConditionType get_Type()
	{
		return ((::RPG::Client::MechCraft::MechCraftConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F494CBE88B08C04_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::Client::MechCraft::MechCraftConditionType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConditionType))((::PBYTE)hIl2Cpp + CLASS_1_8F494CBE88B08C04_SET_TYPE_OFFSET))(this, a1);
	}

	::System::String* get_DescString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F494CBE88B08C04_GET_DESCSTRING_OFFSET))(this);
	}

	::System::Void set_DescString(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F494CBE88B08C04_SET_DESCSTRING_OFFSET))(this, a1);
	}
};
