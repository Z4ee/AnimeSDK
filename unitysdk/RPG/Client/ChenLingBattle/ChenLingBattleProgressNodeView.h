#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/ChenLingBattleProgressNodeState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x9FA2550)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9FA25B0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW__CLEAR_OFFSET UNITYSDK_OFFSET(0x9FA2390)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA26B0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW__SETDOINGSTATE_OFFSET UNITYSDK_OFFSET(0x9FA2400)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW__SETDONESTATE_OFFSET UNITYSDK_OFFSET(0x9FA24B0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleProgressNodeView_TypeDefinitionIndex = 70159;

	class ChenLingBattleProgressNodeView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _NodeTransform; // 0x18
		::UnityEngine::Transform* _CompleteBg; // 0x20
		::UnityEngine::Transform* _Light; // 0x28
		::UnityEngine::Transform* _Tag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void _Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW__CLEAR_OFFSET))(this);
		}

		::System::Void _SetDoingState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW__SETDOINGSTATE_OFFSET))(this);
		}

		::System::Void _SetDoneState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW__SETDONESTATE_OFFSET))(this);
		}

		::System::Void SafeSetActive(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW_SAFESETACTIVE_OFFSET))(this, isShow);
		}

		::System::Void SetUpView(::System::Boolean isShow, ::RPG::Client::ChenLingBattle::ChenLingBattleProgressNodeState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::ChenLingBattle::ChenLingBattleProgressNodeState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW_SETUPVIEW_OFFSET))(this, isShow, state);
		}
	};
}
