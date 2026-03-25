#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SDFTextAlignType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_SHOWSDFTEXTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB95770)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowSDFTextData_TypeDefinitionIndex = 39089;

	class ShowSDFTextData : public ::System::Object
	{
	public:
		// static const ::System::String* FADE_OUT_ANIM_PARAM; // 0x0
		// static const ::System::String* HIDE_STATE_NAME; // 0x0
		::System::UInt32 SDFTextID; // 0x10
		::System::String* AnimatorParamName; // 0x18
		::System::Int32 AnimatorParam; // 0x20
		::System::Boolean IsSetScale; // 0x24
		::System::Single DenseTypeScale; // 0x28
		::System::Single TallTypeScale; // 0x2C
		::System::Single EnglishLikeScale; // 0x30
		::System::Single OverrallScale; // 0x34
		::System::Boolean OverrideRenderQueue; // 0x38
		::System::Int32 RenderQueue; // 0x3C
		::RPG::GameCore::SDFTextAlignType AlignType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWSDFTEXTDATA__CTOR_OFFSET))(this);
		}
	};
}
