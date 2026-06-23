#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_TextureCombinerPipeline___c__DisplayClass9_0; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81A960)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___C__DISPLAYCLASS9_1____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_B__0_OFFSET UNITYSDK_OFFSET(0x1E81A970)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPipeline___c__DisplayClass9_1_TypeDefinitionIndex = 90747;

	class MB3_TextureCombinerPipeline___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline___c__DisplayClass9_0* CS___8__locals1; // 0x10
		::DigitalOpus::MB::Core::MB_TexSet* setOfTexs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
		}

		::System::Boolean ___Step1_CollectDistinctMatTexturesAndUsedObjects_b__0(::DigitalOpus::MB::Core::MB_TexSet* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MB_TexSet*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE___C__DISPLAYCLASS9_1____STEP1_COLLECTDISTINCTMATTEXTURESANDUSEDOBJECTS_B__0_OFFSET))(this, x);
		}
	};
}
