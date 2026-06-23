#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define LYRASECTOR_LYRASECTORUTILS_VECTOR4INT__CTOR_OFFSET UNITYSDK_OFFSET(0x588040)

namespace LyraSector
{
	inline static constexpr unsigned int LyraSectorUtils_Vector4Int_TypeDefinitionIndex = 26885;

	struct alignas(4) LyraSectorUtils_Vector4Int
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18
		::System::Int32 w; // 0x1C

		::System::Void _ctor(::System::Int32 inX, ::System::Int32 inY, ::System::Int32 inZ, ::System::Int32 inW)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORUTILS_VECTOR4INT__CTOR_OFFSET))(this, inX, inY, inZ, inW);
		}
	};
}
