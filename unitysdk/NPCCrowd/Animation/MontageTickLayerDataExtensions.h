#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/MontageTickData.h"
#include "unitysdk/NPCCrowd/Animation/MontageTickLayerData.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_MONTAGETICKLAYERDATAEXTENSIONS_GETLAYERMONTAGEDATAREF_OFFSET UNITYSDK_OFFSET(0xE8C27E0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageTickLayerDataExtensions_TypeDefinitionIndex = 77289;

	class MontageTickLayerDataExtensions : public ::System::Object
	{
	public:
		static ::NPCCrowd::Animation::MontageTickData& GetLayerMontageDataRef(::NPCCrowd::Animation::MontageTickLayerData& clipData, ::System::Int32 index)
		{
			return ((::NPCCrowd::Animation::MontageTickData&(*)(::NPCCrowd::Animation::MontageTickLayerData&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGETICKLAYERDATAEXTENSIONS_GETLAYERMONTAGEDATAREF_OFFSET))(clipData, index);
		}
	};
}
