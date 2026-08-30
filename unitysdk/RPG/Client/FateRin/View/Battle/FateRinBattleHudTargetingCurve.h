#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDTARGETINGCURVE_METHOD_5_55157FBA4997D865_OFFSET UNITYSDK_OFFSET(0xD024BC0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDTARGETINGCURVE_SETPOINTS_OFFSET UNITYSDK_OFFSET(0xD01EC40)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDTARGETINGCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xD025410)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinBattleHudTargetingCurve_TypeDefinitionIndex = 79348;

	class FateRinBattleHudTargetingCurve : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Curve::BGCurve* _Curve; // 0x18
		::System::Single _DesignDistance; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* _DesignControlFirst; // 0x28
		::Il2CppArray<::UnityEngine::Vector3>* _DesignControlSecond; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDTARGETINGCURVE__CTOR_OFFSET))(this);
		}

		::System::Void SetPoints(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDTARGETINGCURVE_SETPOINTS_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_55157FBA4997D865()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLEHUDTARGETINGCURVE_METHOD_5_55157FBA4997D865_OFFSET))(this);
		}
	};
}
