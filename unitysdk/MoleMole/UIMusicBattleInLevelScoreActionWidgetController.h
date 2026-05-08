#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_724B3079070B9259_7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMusicBattleInLevelScoreActionContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ACTIVATEBONUS_OFFSET UNITYSDK_OFFSET(0x15DD0D70)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ACTIVATEFEVER_OFFSET UNITYSDK_OFFSET(0x15DD0AF0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ADDTICK_OFFSET UNITYSDK_OFFSET(0x15DD0C70)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_GETSCORERANKINFO_OFFSET UNITYSDK_OFFSET(0x15DD09C0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_INITDATA_OFFSET UNITYSDK_OFFSET(0x15DCF720)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_INITSCORERANK_OFFSET UNITYSDK_OFFSET(0x15DCFE20)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15DCFB90)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15DCF7A0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ONSHOOTSCORECHANGE_OFFSET UNITYSDK_OFFSET(0x15DD02F0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15DCF830)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15DCF360)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15DCF5E0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_REFRESHSCORERANKINFO_OFFSET UNITYSDK_OFFSET(0x15DD0430)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_REMOVETICK_OFFSET UNITYSDK_OFFSET(0x15DD0DE0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_SETCOREPROGRESS_OFFSET UNITYSDK_OFFSET(0x15DD0630)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_SETGLOW_OFFSET UNITYSDK_OFFSET(0x15DD0B80)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x15DD0EE0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15DD0F90)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15DD12A0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15DD1330)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15DD13C0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15DD1450)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelScoreActionWidgetController_TypeDefinitionIndex = 62480;

	class UIMusicBattleInLevelScoreActionWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_724B3079070B9259_7* _view; // 0x2B8
		::Il2CppArray<::System::String*>* _scoreLoop; // 0x2C0
		::Il2CppArray<::System::String*>* _rankProgress; // 0x2C8
		::System::Int32 currentRankIndex; // 0x2D0
		::System::Single currentScoreProgress; // 0x2D4
		::System::Single scoreProgressDefaultWidth; // 0x2D8
		::UnityEngine::Vector2 scoreProgressDefaultAnchorMax; // 0x2DC
		::System::Collections::Generic::List_1<::System::String*>* scoreRankChangeAnimList; // 0x2E8
		::System::Boolean isPlayRankAnim; // 0x2F0
		::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> template_; // 0x2F4
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Material*, ::Foundation::AssetRequestHandle>>* _scoreLoopList; // 0x300
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Material*, ::Foundation::AssetRequestHandle>>* _rankProgressList; // 0x308
		::System::Single _updateMatTime; // 0x310
		::System::Single _feverTime; // 0x314
		::System::Boolean _isPlayingFever; // 0x318
		::System::Boolean _isPlayingBonus; // 0x319
		::System::Single _tickedFeverTime; // 0x31C
		::System::Int32 _glowCount; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void InitData(::MoleMole::UIMusicBattleInLevelScoreActionContext* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMusicBattleInLevelScoreActionContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_INITDATA_OFFSET))(this, ctx);
		}

		::System::Void InitScoreRank(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> initTemplate, ::System::Int32 initScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_INITSCORERANK_OFFSET))(this, initTemplate, initScore);
		}

		::System::Void RefreshScoreRankInfo(::System::Int32 newRankIndex, ::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_REFRESHSCORERANKINFO_OFFSET))(this, newRankIndex, progress);
		}

		::System::Void SetCoreProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_SETCOREPROGRESS_OFFSET))(this, progress);
		}

		::System::Void GetScoreRankInfo(::System::Int32 score, ::System::Int32& rank, ::System::Single& scoreRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_GETSCORERANKINFO_OFFSET))(this, score, rank, scoreRatio);
		}

		::System::Void OnShootScoreChange(::System::Int32 score)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ONSHOOTSCORECHANGE_OFFSET))(this, score);
		}

		::System::Void ActivateFever(::System::Single feverTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ACTIVATEFEVER_OFFSET))(this, feverTime);
		}

		::System::Void ActivateBonus(::System::Boolean activated)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ACTIVATEBONUS_OFFSET))(this, activated);
		}

		::System::Void SetGlow(::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_SETGLOW_OFFSET))(this, isEnabled);
		}

		::System::Void AddTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_ADDTICK_OFFSET))(this);
		}

		::System::Void RemoveTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_REMOVETICK_OFFSET))(this);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELSCOREACTIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
