#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

namespace System { class String; }

#define CLASS_2_3A3F8E1FCEE2B520_2_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AF1CF80)
#define CLASS_2_3A3F8E1FCEE2B520_2_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x1AF1D1D0)
#define CLASS_2_3A3F8E1FCEE2B520_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AF1D190)
#define CLASS_2_3A3F8E1FCEE2B520_2_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x1AF1CF90)
#define CLASS_2_3A3F8E1FCEE2B520_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF1D270)

inline static constexpr unsigned int Class_2_3A3F8E1FCEE2B520_2_TypeDefinitionIndex = 56328;

class Class_2_3A3F8E1FCEE2B520_2 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* BBMMBAKDJBC; // 0x10
	::System::String* DINBCKPJJEL; // 0x18
	::Struct_2_9E453D160BF69F98 GPKCGOLOJKC; // 0x20
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_2__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_2_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_2_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_2_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
