#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class AudienceMoodMapConfig_MoodClipData; }
namespace RPG::Client { class AudienceMoodMapConfig_MoodData; }
namespace RPG::Client::CrowdAnimator { class CrowdPrototype; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_METHOD_3_1E69147855C867D9_OFFSET UNITYSDK_OFFSET(0x19B46450)
#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_METHOD_3_4204875C2FA6F503_OFFSET UNITYSDK_OFFSET(0x19B46540)
#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_METHOD_3_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0x19B46620)
#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19B46890)
#define RPG_CLIENT_AUDIENCEMOODMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B46930)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceMoodMapConfig_TypeDefinitionIndex = 66079;

	class AudienceMoodMapConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::RPG::Client::AudienceMoodMapConfig_MoodData*>* MoodMap; // 0x18
		::RPG::Client::CrowdAnimator::CrowdPrototype* PrototypeConfig; // 0x20
		::System::Int32 SitDownClipIndex; // 0x28
		::System::Int32 GetupClipIndex; // 0x2C
		::System::Boolean _InitializedClipGroupInfo; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AudienceMoodMapConfig_MoodData*>* _ClipGroupMap; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::AudienceMoodMapConfig_MoodClipData* Method_3_1E69147855C867D9(::System::String* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::AudienceMoodMapConfig_MoodClipData*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_METHOD_3_1E69147855C867D9_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AudienceMoodMapConfig_MoodData* Method_3_4204875C2FA6F503(::System::String* a1)
		{
			return ((::RPG::Client::AudienceMoodMapConfig_MoodData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_METHOD_3_4204875C2FA6F503_OFFSET))(this, a1);
		}

		::System::Void Method_3_EA0BA3E4AF50C583()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_METHOD_3_EA0BA3E4AF50C583_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEMOODMAPCONFIG_ONDISABLE_OFFSET))(this);
		}
	};
}
