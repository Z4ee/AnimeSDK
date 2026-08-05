#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline_TexturePipelineData; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF71B0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPipeline___c__DisplayClass9_0_TypeDefinitionIndex = 94679;

	class MB3_TextureCombinerPipeline___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}
	};
}
