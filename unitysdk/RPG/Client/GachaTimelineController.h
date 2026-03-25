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

#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_2DF312D8F1F2AEB0_OFFSET UNITYSDK_OFFSET(0x9758E10)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_370754945A4AA2A7_OFFSET UNITYSDK_OFFSET(0x9759E70)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_496FEE6B21ED2447_OFFSET UNITYSDK_OFFSET(0x97596A0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_4F6F1F5E9E636C20_OFFSET UNITYSDK_OFFSET(0x9759930)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x9759790)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_76AA266C33AD557E_OFFSET UNITYSDK_OFFSET(0x9759070)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x975A110)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x975A070)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x9758650)
#define RPG_CLIENT_GACHATIMELINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x975A170)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaTimelineController_TypeDefinitionIndex = 59670;

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

		::System::Void Method_5_2DF312D8F1F2AEB0(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_2DF312D8F1F2AEB0_OFFSET))(this, a1);
		}

		::System::Void Method_5_76AA266C33AD557E(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::TimelineAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_76AA266C33AD557E_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::TrackAsset* Method_5_4F6F1F5E9E636C20(::System::String* a1, ::UnityEngine::Timeline::TimelineAsset* a2)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::String*, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_4F6F1F5E9E636C20_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_370754945A4AA2A7(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_370754945A4AA2A7_OFFSET))(this, a1);
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

		::System::Void Method_5_60451B2DE9D371C9(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_METHOD_5_60451B2DE9D371C9_OFFSET))(this, a1);
		}
	};
}
