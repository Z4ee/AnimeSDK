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

#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_139E092F12DFE1A7_OFFSET UNITYSDK_OFFSET(0x192D1FE0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_2B65D7A931236279_OFFSET UNITYSDK_OFFSET(0x192D0CD0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_2ED8799B5DC425F3_OFFSET UNITYSDK_OFFSET(0x192D17A0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_496FEE6B21ED2447_OFFSET UNITYSDK_OFFSET(0x192D16C0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x192D22C0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_D0898EF70A90254D_OFFSET UNITYSDK_OFFSET(0x192D1940)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_F018C4D4C383EBB3_OFFSET UNITYSDK_OFFSET(0x192D0EF0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x192D2200)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x192D02E0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192D2360)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaTimelineController_TypeDefinitionIndex = 69494;

	class GachaTimelineController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		::UnityEngine::Playables::PlayableDirector* Field_5_1; // 0x18
		::RPG::GameCore::GachaCutsceneConfig* Field_5_2; // 0x20
		::RPG::GameCore::GachaTimelineConfig* Field_5_3; // 0x28
		::UnityEngine::Material* Field_5_4; // 0x30
		::System::Boolean Field_5_5; // 0x38
		::RPG::Client::GachaModule_DrawInfoCache* Field_5_6; // 0x40

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

		::System::Boolean Method_5_496FEE6B21ED2447(::Il2CppArray<::System::String*>* a1, ::UnityEngine::Timeline::TrackAsset* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_496FEE6B21ED2447_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_2ED8799B5DC425F3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_2ED8799B5DC425F3_OFFSET))(this, a1);
		}
	};
}
