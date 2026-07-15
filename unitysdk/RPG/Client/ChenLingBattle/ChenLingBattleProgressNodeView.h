#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/ChenLingBattleProgressNodeState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1964F710)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1964F770)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW__CLEAR_OFFSET UNITYSDK_OFFSET(0x1964F550)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1964F8E0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW__SETDOINGSTATE_OFFSET UNITYSDK_OFFSET(0x1964F5C0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW__SETDONESTATE_OFFSET UNITYSDK_OFFSET(0x1964F670)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleProgressNodeView_TypeDefinitionIndex = 72484;

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

		::System::Void SafeSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW_SAFESETACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetUpView(::System::Boolean a1, ::RPG::Client::ChenLingBattle::ChenLingBattleProgressNodeState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::ChenLingBattle::ChenLingBattleProgressNodeState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPROGRESSNODEVIEW_SETUPVIEW_OFFSET))(this, a1, a2);
		}
	};
}
