#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0FEB237AF044DA54_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16B73120)
#define CLASS_1_0FEB237AF044DA54_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x16B73070)
#define CLASS_1_0FEB237AF044DA54_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x16B72FF0)
#define CLASS_1_0FEB237AF044DA54_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16B72FB0)
#define CLASS_1_0FEB237AF044DA54__CTOR_OFFSET UNITYSDK_OFFSET(0x16B73130)

inline static constexpr unsigned int Class_1_0FEB237AF044DA54_TypeDefinitionIndex = 53641;

class Class_1_0FEB237AF044DA54 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEB237AF044DA54__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEB237AF044DA54_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEB237AF044DA54_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEB237AF044DA54_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEB237AF044DA54_GET_TYPE_OFFSET))(this);
	}
};
