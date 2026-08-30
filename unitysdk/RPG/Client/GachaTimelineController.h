#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class GachaModule_DrawInfoCache; }
namespace RPG::GameCore { class GachaCutsceneConfig; }
namespace RPG::GameCore { class GachaTimelineConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_139E092F12DFE1A7_OFFSET UNITYSDK_OFFSET(0xD0FF2D0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_2B65D7A931236279_OFFSET UNITYSDK_OFFSET(0xD0FDF80)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_2ED8799B5DC425F3_OFFSET UNITYSDK_OFFSET(0xD0FEA90)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_486A15F3893ACC02_OFFSET UNITYSDK_OFFSET(0xD0FE970)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xD0FF5B0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_D0898EF70A90254D_OFFSET UNITYSDK_OFFSET(0xD0FEC30)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_F018C4D4C383EBB3_OFFSET UNITYSDK_OFFSET(0xD0FE1A0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD0FF4F0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD0FD5A0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD0FF610)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaTimelineController_TypeDefinitionIndex = 72723;

	class GachaTimelineController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* CGKEFDLCFMH; // 0x0
		::UnityEngine::Playables::PlayableDirector* OPNHINPCKOJ; // 0x18
		::RPG::GameCore::GachaCutsceneConfig* BCOIKMNICIM; // 0x20
		::RPG::GameCore::GachaTimelineConfig* GPJAIPBLGGI; // 0x28
		::UnityEngine::Material* OAOEINKGPGN; // 0x30
		::System::Boolean NGKEFBPLJBE; // 0x38
		::RPG::Client::GachaModule_DrawInfoCache* ONKFLNPHHBE; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_START_OFFSET))(this);
		}

		::System::Void Method_5_2B65D7A931236279(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_2B65D7A931236279_OFFSET))(this, a1);
		}

		::System::Void Method_5_F018C4D4C383EBB3(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::TimelineAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_F018C4D4C383EBB3_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::TrackAsset* Method_5_D0898EF70A90254D(::System::String* a1, ::UnityEngine::Timeline::TimelineAsset* a2)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::String*, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_D0898EF70A90254D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_139E092F12DFE1A7(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_139E092F12DFE1A7_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_A27D06F9481FAFDB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_A27D06F9481FAFDB_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_486A15F3893ACC02(::Il2CppArray<::System::String*>* a1, ::UnityEngine::Timeline::TrackAsset* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_486A15F3893ACC02_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_2ED8799B5DC425F3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_2ED8799B5DC425F3_OFFSET))(this, a1);
		}
	};
}
