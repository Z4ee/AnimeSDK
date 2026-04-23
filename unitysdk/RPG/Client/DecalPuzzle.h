#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DecalPuzzleRegionType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_EDD269FDB76B8418;
namespace RPG::Client { class DecalPuzzleRegion; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DECALPUZZLE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA0F7860)
#define RPG_CLIENT_DECALPUZZLE_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xA0F7B30)
#define RPG_CLIENT_DECALPUZZLE_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xA0F7AB0)
#define RPG_CLIENT_DECALPUZZLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA0F79B0)
#define RPG_CLIENT_DECALPUZZLE_RESET_OFFSET UNITYSDK_OFFSET(0xA0F7600)
#define RPG_CLIENT_DECALPUZZLE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xA0F7740)
#define RPG_CLIENT_DECALPUZZLE_START_OFFSET UNITYSDK_OFFSET(0xA0F7A50)
#define RPG_CLIENT_DECALPUZZLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA0F7950)
#define RPG_CLIENT_DECALPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F7B50)

namespace RPG::Client
{
	inline static constexpr unsigned int DecalPuzzle_TypeDefinitionIndex = 63316;

	class DecalPuzzle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Bounds _ArtBoundFull_k__BackingField; // 0x18
		::System::Boolean IsActive; // 0x30
		::System::String* RegionEffectCorrectTrigger; // 0x38
		::System::String* RegionEffectFadeOutTrigger; // 0x40
		::System::Single PuzzleFinishPerformDuration; // 0x48
		::System::String* DecalPuzzle_Terminate_Event; // 0x50
		::System::String* DecalPuzzle_Finish_Event; // 0x58
		::System::String* DecalPuzzle_Shot_Wrong_Event; // 0x60
		::System::String* DecalPuzzle_Shot_OutOfHintRegion_Event; // 0x68
		::RPG::Client::DecalPuzzleRegionType HintRegionType; // 0x70
		::UnityEngine::Rect HintRegion; // 0x74
		::System::Single HintRegionRadius; // 0x84
		::UnityEngine::Vector2 HintRegionCenter; // 0x88
		::UnityEngine::Transform* RegionEffectRoot; // 0x90
		::UnityEngine::Transform* RegionColliderRoot; // 0x98
		::Il2CppArray<::RPG::Client::DecalPuzzleRegion*>* TargetRegions; // 0xA0
		::Class_2_EDD269FDB76B8418* Behavior; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLE__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLE_RESET_OFFSET))(this);
		}

		::System::Void SetActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLE_SETACTIVE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLE_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLE_START_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLE_GET_ARTBOUND_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALPUZZLE_GET_ARTBOUNDFULL_OFFSET))(this);
		}
	};
}
