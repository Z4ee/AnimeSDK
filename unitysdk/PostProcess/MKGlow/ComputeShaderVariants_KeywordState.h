#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define POSTPROCESS_MKGLOW_COMPUTESHADERVARIANTS_KEYWORDSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x5EE4E0)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int ComputeShaderVariants_KeywordState_TypeDefinitionIndex = 27891;

	struct alignas(4) ComputeShaderVariants_KeywordState
	{
		::System::Int32 bloom; // 0x10
		::System::Int32 lensSurface; // 0x14
		::System::Int32 lensFlare; // 0x18
		::System::Int32 glare; // 0x1C
		::System::Int32 natural; // 0x20
		::System::Int32 renderPriority; // 0x24

		::System::Void _ctor(::System::Int32 bloom, ::System::Int32 lensSurface, ::System::Int32 lensFlare, ::System::Int32 glare, ::System::Int32 natural, ::System::Int32 renderPriority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_COMPUTESHADERVARIANTS_KEYWORDSTATE__CTOR_OFFSET))(this, bloom, lensSurface, lensFlare, glare, natural, renderPriority);
		}
	};
}
