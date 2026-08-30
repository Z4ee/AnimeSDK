#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_B799564AAEC95D03_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB7132E0)
#define CLASS_2_B799564AAEC95D03_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0xB7135B0)
#define CLASS_2_B799564AAEC95D03_METHOD_2_41145AA5EA656E9C_OFFSET UNITYSDK_OFFSET(0xB7132F0)
#define CLASS_2_B799564AAEC95D03_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0xB713550)
#define CLASS_2_B799564AAEC95D03__CTOR_OFFSET UNITYSDK_OFFSET(0xB7136B0)

inline static constexpr unsigned int Class_2_B799564AAEC95D03_TypeDefinitionIndex = 56304;

class Class_2_B799564AAEC95D03 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* PMGPFPNHJAA; // 0x10
	::System::String* BHLPBOBCJFK; // 0x18
	::System::String* KBKOGLCAEKG; // 0x20
	::System::String* DINBCKPJJEL; // 0x28
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_41145AA5EA656E9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03_METHOD_2_41145AA5EA656E9C_OFFSET))(this);
	}

	::System::Void Method_2_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03_METHOD_2_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Void Method_2_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799564AAEC95D03_METHOD_2_907E24F785836BA0_OFFSET))(this);
	}
};
