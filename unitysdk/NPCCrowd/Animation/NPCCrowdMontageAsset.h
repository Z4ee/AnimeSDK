#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/NPCCrowd/Animation/MontageData.h"

#define NPCCROWD_ANIMATION_NPCCROWDMONTAGEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xCE62540)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdMontageAsset_TypeDefinitionIndex = 75974;

	class NPCCrowdMontageAsset : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::UInt32 montageId; // 0x58
		::NPCCrowd::Animation::MontageData montageData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGEASSET__CTOR_OFFSET))(this);
		}
	};
}
