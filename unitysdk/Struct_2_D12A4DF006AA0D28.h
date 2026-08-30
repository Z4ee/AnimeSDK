#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Gradient; }

#define STRUCT_2_D12A4DF006AA0D28_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AE8310)

inline static constexpr unsigned int Struct_2_D12A4DF006AA0D28_TypeDefinitionIndex = 49701;

struct alignas(8) Struct_2_D12A4DF006AA0D28
{
	::UnityEngine::Gradient* FNLDALLEOIJ; // 0x10
	::System::Single HMAGPLNGNMP; // 0x18
	::System::Int32 OJHOLONFFCO; // 0x1C

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D12A4DF006AA0D28_TOSTRING_OFFSET))(this);
	}
};
