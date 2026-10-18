#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0FEB237AF044DA54_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDFE12B0)
#define CLASS_1_0FEB237AF044DA54_1_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xDFE1200)
#define CLASS_1_0FEB237AF044DA54_1_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xDFE1180)
#define CLASS_1_0FEB237AF044DA54_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDFE1140)
#define CLASS_1_0FEB237AF044DA54_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDFE12C0)

inline static constexpr unsigned int Class_1_0FEB237AF044DA54_1_TypeDefinitionIndex = 56168;

class Class_1_0FEB237AF044DA54_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEB237AF044DA54_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEB237AF044DA54_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEB237AF044DA54_1_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEB237AF044DA54_1_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEB237AF044DA54_1_GET_TYPE_OFFSET))(this);
	}
};
