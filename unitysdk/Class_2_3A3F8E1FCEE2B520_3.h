#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

namespace System { class String; }

#define CLASS_2_3A3F8E1FCEE2B520_3_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC4FA1D0)
#define CLASS_2_3A3F8E1FCEE2B520_3_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xC4FA400)
#define CLASS_2_3A3F8E1FCEE2B520_3_METHOD_2_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0xC4FA1E0)
#define CLASS_2_3A3F8E1FCEE2B520_3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC4FA3C0)
#define CLASS_2_3A3F8E1FCEE2B520_3__CTOR_OFFSET UNITYSDK_OFFSET(0xC4FA490)

inline static constexpr unsigned int Class_2_3A3F8E1FCEE2B520_3_TypeDefinitionIndex = 56329;

class Class_2_3A3F8E1FCEE2B520_3 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* BBMMBAKDJBC; // 0x10
	::Struct_2_9E453D160BF69F98 GPKCGOLOJKC; // 0x18
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_3__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_3_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_3_METHOD_2_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_3_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A3F8E1FCEE2B520_3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
