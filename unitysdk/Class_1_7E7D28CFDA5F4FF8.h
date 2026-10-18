#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConditionType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_48A6E3D84F5FFF10;

#define CLASS_1_7E7D28CFDA5F4FF8_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0x15CD5C70)
#define CLASS_1_7E7D28CFDA5F4FF8_GET_DESC_OFFSET UNITYSDK_OFFSET(0x15CD5C90)
#define CLASS_1_7E7D28CFDA5F4FF8_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15CD5C80)
#define CLASS_1_7E7D28CFDA5F4FF8__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD5CA0)

inline static constexpr unsigned int Class_1_7E7D28CFDA5F4FF8_TypeDefinitionIndex = 80091;

class Class_1_7E7D28CFDA5F4FF8 : public ::System::Object
{
public:
	::System::Int32 _CacheKey_k__BackingField; // 0x10
	::RPG::Client::MechCraft::MechCraftConditionType _Type_k__BackingField; // 0x14
	::RPG::Client::TextID _Desc_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_48A6E3D84F5FFF10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_48A6E3D84F5FFF10*))((::PBYTE)hIl2Cpp + CLASS_1_7E7D28CFDA5F4FF8__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D28CFDA5F4FF8_GET_CACHEKEY_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftConditionType get_Type()
	{
		return ((::RPG::Client::MechCraft::MechCraftConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D28CFDA5F4FF8_GET_TYPE_OFFSET))(this);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D28CFDA5F4FF8_GET_DESC_OFFSET))(this);
	}
};
