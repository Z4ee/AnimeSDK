#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Audio/MonoSceneSoundItem.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_AUTOCOLLECTWAYPATHPOINTS_OFFSET UNITYSDK_OFFSET(0x13587010)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_DRAWGIZMOSARROW_OFFSET UNITYSDK_OFFSET(0x135879C0)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_INIT_OFFSET UNITYSDK_OFFSET(0x13586BF0)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x13588070)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_ONITEMACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x13586CB0)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_REGISTER_OFFSET UNITYSDK_OFFSET(0x135873C0)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x135876F0)
#define MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x13588460)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int SceneSound_WayPathToRTPC_TypeDefinitionIndex = 65412;

	class SceneSound_WayPathToRTPC : public ::MoleMole::Audio::MonoSceneSoundItem
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* wayPathPoints; // 0x70
		::System::String* rtpcName; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC__CTOR_OFFSET))(this);
		}

		::System::Void AutoCollectWayPathPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_AUTOCOLLECTWAYPATHPOINTS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_INIT_OFFSET))(this);
		}

		::System::Void OnItemActiveChanged(::System::Boolean newActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_ONITEMACTIVECHANGED_OFFSET))(this, newActive);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_REGISTER_OFFSET))(this);
		}

		::System::Void Unregister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_UNREGISTER_OFFSET))(this);
		}

		::System::Void DrawGizmosArrow(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::System::Single arrwoAngle, ::System::Single arrowLen)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_DRAWGIZMOSARROW_OFFSET))(this, p0, p1, arrwoAngle, arrowLen);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_SCENESOUND_WAYPATHTORTPC_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
