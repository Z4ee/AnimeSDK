#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_253;

#define STRUCT_2_F4BEA7B577DD61FE_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x7BF1E0)
#define STRUCT_2_F4BEA7B577DD61FE_METHOD_2_AEE8799035F6C4DD_OFFSET UNITYSDK_OFFSET(0x7BF170)
#define STRUCT_2_F4BEA7B577DD61FE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7BF180)

inline static constexpr unsigned int Struct_2_F4BEA7B577DD61FE_TypeDefinitionIndex = 43937;

struct alignas(8) Struct_2_F4BEA7B577DD61FE
{
	::Class_0_16E4307DCC419505_253* Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x18

	::System::Boolean Method_2_AEE8799035F6C4DD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F4BEA7B577DD61FE_METHOD_2_AEE8799035F6C4DD_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F4BEA7B577DD61FE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F4BEA7B577DD61FE_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}
};
