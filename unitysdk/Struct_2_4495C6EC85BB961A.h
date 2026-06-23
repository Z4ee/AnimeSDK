#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define STRUCT_2_4495C6EC85BB961A_METHOD_2_D8BEE25C97B3F2EB_OFFSET UNITYSDK_OFFSET(0x7D5020)
#define STRUCT_2_4495C6EC85BB961A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7D5010)
#define STRUCT_2_4495C6EC85BB961A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7D4FD0)
#define STRUCT_2_4495C6EC85BB961A__CTOR_OFFSET UNITYSDK_OFFSET(0x7D4FA0)

inline static constexpr unsigned int Struct_2_4495C6EC85BB961A_TypeDefinitionIndex = 58004;

struct alignas(4) Struct_2_4495C6EC85BB961A
{
	::System::Int32 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_4495C6EC85BB961A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_4495C6EC85BB961A__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4495C6EC85BB961A_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_2_D8BEE25C97B3F2EB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4495C6EC85BB961A_METHOD_2_D8BEE25C97B3F2EB_OFFSET))(this);
	}
};
