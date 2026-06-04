#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AudienceMoodMapConfig_MoodClipData; }
namespace RPG::Client::CrowdAnimator { class CapsuleColliderInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_MOODDATA_METHOD_1_594EB27689A9970A_OFFSET UNITYSDK_OFFSET(0xB3421D0)
#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_MOODDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB3422A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceMoodMapConfig_MoodData_TypeDefinitionIndex = 64679;

	class AudienceMoodMapConfig_MoodData : public ::System::Object
	{
	public:
		::System::String* GroupName; // 0x10
		::Il2CppArray<::RPG::Client::AudienceMoodMapConfig_MoodClipData*>* Weights; // 0x18
		::System::Single WeightSum; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AudienceMoodMapConfig_MoodClipData*>* WeightMap; // 0x28
		::RPG::Client::CrowdAnimator::CapsuleColliderInfo* FitCollider; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_MOODDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::AudienceMoodMapConfig_MoodClipData* Method_1_594EB27689A9970A(::System::Int32 a1)
		{
			return ((::RPG::Client::AudienceMoodMapConfig_MoodClipData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_MOODDATA_METHOD_1_594EB27689A9970A_OFFSET))(this, a1);
		}
	};
}
