#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

namespace System { class String; }

#define CLASS_2_3A3F8E1FCEE2B520_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBE2A400)
#define CLASS_2_3A3F8E1FCEE2B520_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xBE2A650)
#define CLASS_2_3A3F8E1FCEE2B520_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBE2A610)
#define CLASS_2_3A3F8E1FCEE2B520_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0xBE2A410)
#define CLASS_2_3A3F8E1FCEE2B520__CTOR_OFFSET UNITYSDK_OFFSET(0xBE2A6F0)

inline static constexpr unsigned int Class_2_3A3F8E1FCEE2B520_TypeDefinitionIndex = 56139;

class Class_2_3A3F8E1FCEE2B520 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* MMILCIBMANG; // 0x10
	::System::String* BBMMBAKDJBC; // 0x18
	::Struct_2_9E453D160BF69F98 GPKCGOLOJKC; // 0x20
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
