#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_38BC096C09B2AD8F_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBA529A0)
#define CLASS_2_38BC096C09B2AD8F_1_METHOD_2_0F2138E056F9294A_OFFSET UNITYSDK_OFFSET(0xBA529B0)
#define CLASS_2_38BC096C09B2AD8F_1_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0xBA52BE0)
#define CLASS_2_38BC096C09B2AD8F_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBA52BA0)
#define CLASS_2_38BC096C09B2AD8F_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBA52C90)

inline static constexpr unsigned int Class_2_38BC096C09B2AD8F_1_TypeDefinitionIndex = 56098;

class Class_2_38BC096C09B2AD8F_1 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* GMNPKDNIPJE; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38BC096C09B2AD8F_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38BC096C09B2AD8F_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_0F2138E056F9294A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38BC096C09B2AD8F_1_METHOD_2_0F2138E056F9294A_OFFSET))(this);
	}

	::System::Void Method_2_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38BC096C09B2AD8F_1_METHOD_2_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38BC096C09B2AD8F_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
