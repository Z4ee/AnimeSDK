#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIQuad; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOQUADEFFECT_DOTICK_OFFSET UNITYSDK_OFFSET(0x9D2A0E0)
#define RPG_CLIENT_MONOQUADEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x9D2A270)
#define RPG_CLIENT_MONOQUADEFFECT_UPDATEPOS_OFFSET UNITYSDK_OFFSET(0x9D2A190)
#define RPG_CLIENT_MONOQUADEFFECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D2A080)
#define RPG_CLIENT_MONOQUADEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2A2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoQuadEffect_TypeDefinitionIndex = 59491;

	class MonoQuadEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _ShouldTick; // 0x18
		::System::Single _CurTime; // 0x1C
		::System::Single _StartPercentage; // 0x20
		::System::Single _EndPercentage; // 0x24
		::RPG::Client::UIQuad* QuadRef; // 0x28
		::System::Single TotalTime; // 0x30
		::UnityEngine::Transform* HightLightPointTfRef; // 0x38
		::UnityEngine::Transform* RootTransform; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOQUADEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOQUADEFFECT_UPDATE_OFFSET))(this);
		}

		::System::Void DoTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOQUADEFFECT_DOTICK_OFFSET))(this);
		}

		::System::Void UpdatePos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOQUADEFFECT_UPDATEPOS_OFFSET))(this);
		}

		::System::Void Play(::System::Single start, ::System::Single end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOQUADEFFECT_PLAY_OFFSET))(this, start, end);
		}
	};
}
