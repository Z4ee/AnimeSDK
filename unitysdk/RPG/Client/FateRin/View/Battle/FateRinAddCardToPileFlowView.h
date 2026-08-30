#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1349;
class Class_0_16E4307DCC419505_413;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardPileBtnViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardDisplayViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_2607E22D710FF025_OFFSET UNITYSDK_OFFSET(0x1B5B9AD0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_341A3DF81C331CBB_OFFSET UNITYSDK_OFFSET(0x1B5B9980)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_52B6C8E3328F0DD1_OFFSET UNITYSDK_OFFSET(0x1B5B7710)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_64587FE21067DFC1_OFFSET UNITYSDK_OFFSET(0x1B5B8D60)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_73897A3F6F629112_OFFSET UNITYSDK_OFFSET(0x1B5B9C50)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_7FFA59D764841066_OFFSET UNITYSDK_OFFSET(0x1B5B8C10)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_864765D5C3A0F56E_OFFSET UNITYSDK_OFFSET(0x1B5B9810)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_8EC1D6F2D4E5DAC8_OFFSET UNITYSDK_OFFSET(0x1B5B8FA0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_9DF4AE18A27A14EC_OFFSET UNITYSDK_OFFSET(0x1B5B8EB0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_9E990ADBDFDA373F_OFFSET UNITYSDK_OFFSET(0x1B5BA270)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_B80FCB706F7045BB_OFFSET UNITYSDK_OFFSET(0x1B5B9F90)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_BE4C0A9B4FEBEC5B_OFFSET UNITYSDK_OFFSET(0x1B5B9E60)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_C7234EB4F5BB9CC8_OFFSET UNITYSDK_OFFSET(0x1B5B9510)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_E3C78D781491783F_OFFSET UNITYSDK_OFFSET(0x1B5B9F20)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_PLAYADDCARDTODISCARDPILEFLOW_OFFSET UNITYSDK_OFFSET(0x1B5B8380)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_PLAYADDCARDTODRAWPILEFLOW_OFFSET UNITYSDK_OFFSET(0x1B5B7610)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_PLAYPROJECTIONREPLICATEFLOW_OFFSET UNITYSDK_OFFSET(0x1B5B8470)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5BA540)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinAddCardToPileFlowView_TypeDefinitionIndex = 79330;

	class FateRinAddCardToPileFlowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _BtnDrawTransform; // 0x18
		::UnityEngine::RectTransform* _BtnDropTransform; // 0x20
		::UnityEngine::Animation* _BtnDrawAnimation; // 0x28
		::UnityEngine::Animation* _BtnDropAnimation; // 0x30
		::System::Single _TemporaryCardHoldDuration; // 0x38
		::System::Single _StaggerInterval; // 0x3C
		::UnityEngine::Vector3 _TrailMidLocalOffset; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_413* PlayAddCardToDrawPileFlow(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::RPG::Client::Promises::IPendingPromise* a5)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_PLAYADDCARDTODRAWPILEFLOW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Class_0_16E4307DCC419505_413* PlayAddCardToDiscardPileFlow(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::Class_0_16E4307DCC419505_1349* a5, ::RPG::Client::Promises::IPendingPromise* a6)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::Class_0_16E4307DCC419505_1349*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_PLAYADDCARDTODISCARDPILEFLOW_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Class_0_16E4307DCC419505_413* PlayProjectionReplicateFlow(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Action* a2)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_PLAYPROJECTIONREPLICATEFLOW_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_413* Method_5_52B6C8E3328F0DD1(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::UnityEngine::RectTransform* a5, ::UnityEngine::Animation* a6, ::System::String* a7, ::System::Boolean a8, ::Class_0_16E4307DCC419505_1349* a9, ::RPG::Client::Promises::IPendingPromise* a10)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::UnityEngine::RectTransform*, ::UnityEngine::Animation*, ::System::String*, ::System::Boolean, ::Class_0_16E4307DCC419505_1349*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_52B6C8E3328F0DD1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::Class_0_16E4307DCC419505_413* Method_5_341A3DF81C331CBB(::RPG::Client::FateRin::View::Battle::FateRinEffectController* a1, ::System::Object* a2)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_341A3DF81C331CBB_OFFSET))(a1, a2);
		}

		static ::Class_0_16E4307DCC419505_413* Method_5_2607E22D710FF025(::Class_0_16E4307DCC419505_1349* a1, ::System::String* a2)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::Class_0_16E4307DCC419505_1349*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_2607E22D710FF025_OFFSET))(a1, a2);
		}

		::Class_0_16E4307DCC419505_413* Method_5_C7234EB4F5BB9CC8(::UnityEngine::RectTransform* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a2, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a3, ::UnityEngine::RectTransform* a4, ::UnityEngine::Animation* a5, ::System::String* a6, ::System::Boolean a7, ::System::Object* a8)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::UnityEngine::RectTransform*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::UnityEngine::RectTransform*, ::UnityEngine::Animation*, ::System::String*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_C7234EB4F5BB9CC8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::UnityEngine::Vector3 Method_5_73897A3F6F629112(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_73897A3F6F629112_OFFSET))(this, a1, a2);
		}

		static ::Class_0_16E4307DCC419505_413* Method_5_864765D5C3A0F56E(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* a2, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a3, ::System::Object* a4)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_864765D5C3A0F56E_OFFSET))(a1, a2, a3, a4);
		}

		static ::Class_0_16E4307DCC419505_413* Method_5_64587FE21067DFC1(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::String* a2)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_64587FE21067DFC1_OFFSET))(a1, a2);
		}

		static ::Class_0_16E4307DCC419505_413* Method_5_7FFA59D764841066(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Boolean a2)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_7FFA59D764841066_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BE4C0A9B4FEBEC5B(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_BE4C0A9B4FEBEC5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E3C78D781491783F(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_E3C78D781491783F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B80FCB706F7045BB(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_B80FCB706F7045BB_OFFSET))(a1);
		}

		static ::System::Void Method_5_9E990ADBDFDA373F(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_9E990ADBDFDA373F_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MonoAnimationTrigger* Method_5_9DF4AE18A27A14EC(::UnityEngine::RectTransform* a1)
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_9DF4AE18A27A14EC_OFFSET))(a1);
		}

		static ::System::Boolean Method_5_8EC1D6F2D4E5DAC8(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_METHOD_5_8EC1D6F2D4E5DAC8_OFFSET))(a1);
		}
	};
}
