#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/ENPCAnimationAvatarMaskType.h"
#include "unitysdk/NPCCrowd/Animation/MontageRawData.h"
#include "unitysdk/NPCCrowd/Animation/MontageSeqFrameRawData.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class IMontageClipTimeDataProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_MONTAGEDATA_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x4123F0)
#define NPCCROWD_ANIMATION_MONTAGEDATA__GETLENGTH_G__CALCLENGTH_3_0_OFFSET UNITYSDK_OFFSET(0x8C4A210)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int MontageData_TypeDefinitionIndex = 68347;

	struct alignas(8) MontageData
	{
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageRawData>*>* layerTrackData; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::NPCCrowd::Animation::MontageSeqFrameRawData>*>* layerSeqFrameTrackData; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::ENPCAnimationAvatarMaskType>* avatarMaskTypes; // 0x20

		::System::Single GetLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGEDATA_GETLENGTH_OFFSET))(this);
		}

		static ::System::Single _GetLength_g__CalcLength_3_0(::NPCCrowd::Animation::IMontageClipTimeDataProvider* clipData)
		{
			return ((::System::Single(*)(::NPCCrowd::Animation::IMontageClipTimeDataProvider*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_MONTAGEDATA__GETLENGTH_G__CALCLENGTH_3_0_OFFSET))(clipData);
		}
	};
}
