#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1349;
class Class_0_16E4307DCC419505_1355;
class Class_0_16E4307DCC419505_413;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardPileBtnViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudHandCardLayout; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_1CF3A1D1A4FE9772_OFFSET UNITYSDK_OFFSET(0x1B5CB980)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_2607E22D710FF025_OFFSET UNITYSDK_OFFSET(0x1B5CB830)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_3CDEC98B97A86E18_OFFSET UNITYSDK_OFFSET(0x1B5CBCE0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_7862EE92DD57F8E9_OFFSET UNITYSDK_OFFSET(0x1B5CB290)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_7F1A139D7A734F56_OFFSET UNITYSDK_OFFSET(0x1B5CBE30)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0x1B5CBC00)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_DCC8F661C81705B2_OFFSET UNITYSDK_OFFSET(0x1B5CBAB0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_PLAYDRAWFLOW_OFFSET UNITYSDK_OFFSET(0x1B5BB930)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CBF90)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___CREATEBTNDRAWPLAYACTIONCOMMAND_B__11_0_OFFSET UNITYSDK_OFFSET(0x1B5CBFF0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinDrawCardFlowView_TypeDefinitionIndex = 79358;

	class FateRinDrawCardFlowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _BtnDrawTransform; // 0x18
		::UnityEngine::Animation* _BtnDrawAnimation; // 0x20
		::System::Single _StaggerInterval; // 0x28
		::System::Single _DrawFlyDurationA; // 0x2C
		::System::Single _DrawFlyDurationB; // 0x30
		::UnityEngine::Vector3 _DrawFlyMidLocalOffset; // 0x34
		::System::String* _DrawFlyEaseNameA; // 0x40
		::System::String* _DrawFlyEaseNameB; // 0x48
		::System::Single _ReflowDuration; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_413* PlayDrawFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a3, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a4, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a5, ::Class_0_16E4307DCC419505_1349* a6, ::RPG::Client::Promises::IPendingPromise* a7)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::Class_0_16E4307DCC419505_1349*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_PLAYDRAWFLOW_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::Class_0_16E4307DCC419505_413* Method_5_7862EE92DD57F8E9(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a3, ::System::Boolean a4, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a5, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a6, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a7)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::System::Boolean, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_7862EE92DD57F8E9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::Class_0_16E4307DCC419505_413* Method_5_1CF3A1D1A4FE9772()
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_1CF3A1D1A4FE9772_OFFSET))(this);
		}

		static ::Class_0_16E4307DCC419505_413* Method_5_2607E22D710FF025(::Class_0_16E4307DCC419505_1349* a1, ::System::String* a2)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::Class_0_16E4307DCC419505_1349*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_2607E22D710FF025_OFFSET))(a1, a2);
		}

		::Class_0_16E4307DCC419505_413* Method_5_3CDEC98B97A86E18(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_3CDEC98B97A86E18_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_1355* Method_5_D41F2EAAA87E2BFD()
		{
			return ((::Class_0_16E4307DCC419505_1355*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_D41F2EAAA87E2BFD_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_413* Method_5_DCC8F661C81705B2(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a1)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_DCC8F661C81705B2_OFFSET))(this, a1);
		}

		::RPG::Client::MonoAnimationTrigger* Method_5_7F1A139D7A734F56(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_METHOD_5_7F1A139D7A734F56_OFFSET))(this, a1);
		}

		::System::Void __CreateBtnDrawPlayActionCommand_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___CREATEBTNDRAWPLAYACTIONCOMMAND_B__11_0_OFFSET))(this);
		}
	};
}
