#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define STRUCT_2_A55CA11900DC55FE_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x798D80)
#define STRUCT_2_A55CA11900DC55FE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x798D70)
#define STRUCT_2_A55CA11900DC55FE__CTOR_OFFSET UNITYSDK_OFFSET(0x798D40)

inline static constexpr unsigned int Struct_2_A55CA11900DC55FE_TypeDefinitionIndex = 79548;

struct alignas(4) Struct_2_A55CA11900DC55FE
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x2C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_A55CA11900DC55FE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A55CA11900DC55FE_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A55CA11900DC55FE_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
