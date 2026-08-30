#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_226DE9FDC7D95F2B_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15A8D500)
#define CLASS_2_226DE9FDC7D95F2B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15A8D6B0)
#define CLASS_2_226DE9FDC7D95F2B_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x15A8D510)
#define CLASS_2_226DE9FDC7D95F2B__CTOR_OFFSET UNITYSDK_OFFSET(0x15A8D6F0)

inline static constexpr unsigned int Class_2_226DE9FDC7D95F2B_TypeDefinitionIndex = 56290;

class Class_2_226DE9FDC7D95F2B : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226DE9FDC7D95F2B__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226DE9FDC7D95F2B_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226DE9FDC7D95F2B_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_226DE9FDC7D95F2B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
