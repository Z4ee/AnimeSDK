#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/MontageLayerClipData.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_MONTAGELAYERCLIPDATAEXTENSIONS_GETLAYERCLIPDATA_OFFSET UNITYSDK_OFFSET(0xE941C30)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageLayerClipDataExtensions_TypeDefinitionIndex = 65152;

	class MontageLayerClipDataExtensions : public ::System::Object
	{
	public:
		static ::System::Int32 GetLayerClipData(::NPCCrowd::Animation::MontageLayerClipData& clipData, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::NPCCrowd::Animation::MontageLayerClipData&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGELAYERCLIPDATAEXTENSIONS_GETLAYERCLIPDATA_OFFSET))(clipData, index);
		}
	};
}
