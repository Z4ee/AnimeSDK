#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_1CB75D4A0C9C40F1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16F08160)
#define CLASS_2_1CB75D4A0C9C40F1_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x16F083D0)
#define CLASS_2_1CB75D4A0C9C40F1_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x16F08170)
#define CLASS_2_1CB75D4A0C9C40F1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16F08390)
#define CLASS_2_1CB75D4A0C9C40F1__CTOR_OFFSET UNITYSDK_OFFSET(0x16F084B0)

inline static constexpr unsigned int Class_2_1CB75D4A0C9C40F1_TypeDefinitionIndex = 53619;

class Class_2_1CB75D4A0C9C40F1 : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CB75D4A0C9C40F1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CB75D4A0C9C40F1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CB75D4A0C9C40F1_METHOD_2_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CB75D4A0C9C40F1_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CB75D4A0C9C40F1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
