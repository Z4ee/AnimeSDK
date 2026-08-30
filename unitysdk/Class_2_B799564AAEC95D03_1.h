#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_B799564AAEC95D03_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x188C59C0)
#define CLASS_2_B799564AAEC95D03_1_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x188C5B30)
#define CLASS_2_B799564AAEC95D03_1_METHOD_2_41145AA5EA656E9C_OFFSET UNITYSDK_OFFSET(0x188C59D0)
#define CLASS_2_B799564AAEC95D03_1_METHOD_2_EB1549E9C6E3B4E9_OFFSET UNITYSDK_OFFSET(0x188C5BE0)
#define CLASS_2_B799564AAEC95D03_1__CTOR_OFFSET UNITYSDK_OFFSET(0x188C5C30)

inline static constexpr unsigned int Class_2_B799564AAEC95D03_1_TypeDefinitionIndex = 56310;

class Class_2_B799564AAEC95D03_1 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* LMODFJIHGCH; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03_1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_41145AA5EA656E9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03_1_METHOD_2_41145AA5EA656E9C_OFFSET))(this);
	}

	::System::Void Method_2_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03_1_METHOD_2_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Void Method_2_EB1549E9C6E3B4E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03_1_METHOD_2_EB1549E9C6E3B4E9_OFFSET))(this);
	}
};
