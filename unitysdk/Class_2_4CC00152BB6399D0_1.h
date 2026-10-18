#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

namespace System { class String; }

#define CLASS_2_4CC00152BB6399D0_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1552AF10)
#define CLASS_2_4CC00152BB6399D0_1_METHOD_2_0F2138E056F9294A_OFFSET UNITYSDK_OFFSET(0x1552AF20)
#define CLASS_2_4CC00152BB6399D0_1_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x1552B160)
#define CLASS_2_4CC00152BB6399D0_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1552B120)
#define CLASS_2_4CC00152BB6399D0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1552B230)

inline static constexpr unsigned int Class_2_4CC00152BB6399D0_1_TypeDefinitionIndex = 56100;

class Class_2_4CC00152BB6399D0_1 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* GMNPKDNIPJE; // 0x10
	::Struct_2_9E453D160BF69F98 PJJGPDNKMJH; // 0x18
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CC00152BB6399D0_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CC00152BB6399D0_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_0F2138E056F9294A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CC00152BB6399D0_1_METHOD_2_0F2138E056F9294A_OFFSET))(this);
	}

	::System::Void Method_2_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CC00152BB6399D0_1_METHOD_2_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CC00152BB6399D0_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
