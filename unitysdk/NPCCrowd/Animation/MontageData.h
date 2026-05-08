#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/ENPCAnimationAvatarMaskType.h"
#include "unitysdk/NPCCrowd/Animation/MontageRawData.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageData_TypeDefinitionIndex = 68227;

	struct alignas(8) MontageData
	{
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageRawData>*>* layerTrackData; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::ENPCAnimationAvatarMaskType>* avatarMaskTypes; // 0x18
	};
}
