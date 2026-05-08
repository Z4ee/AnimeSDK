#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_CREATEATLASFORPROPERTY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9C34F0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPipeline_CreateAtlasForProperty_TypeDefinitionIndex = 85168;

	struct alignas(1) MB3_TextureCombinerPipeline_CreateAtlasForProperty
	{
		::System::Boolean allTexturesAreNull; // 0x10
		::System::Boolean allTexturesAreSame; // 0x11
		::System::Boolean allNonTexturePropsAreSame; // 0x12
		::System::Boolean allSrcMatsOmittedTextureProperty; // 0x13

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_CREATEATLASFORPROPERTY_TOSTRING_OFFSET))(this);
		}
	};
}
