#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/NPCCrowd/Animation/MontageData.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_ANIMATION_NPCCROWDMONTAGETEMPLATECONFIGSO__CTOR_OFFSET UNITYSDK_OFFSET(0xF85BAE0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdMontageTemplateConfigSO_TypeDefinitionIndex = 60328;

	class NPCCrowdMontageTemplateConfigSO : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Animation::MontageData>* MontageTemplateData; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDMONTAGETEMPLATECONFIGSO__CTOR_OFFSET))(this);
		}
	};
}
