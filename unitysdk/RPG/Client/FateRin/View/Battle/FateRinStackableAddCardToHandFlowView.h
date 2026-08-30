#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_413;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudHandCardLayout; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_3CDEC98B97A86E18_OFFSET UNITYSDK_OFFSET(0x1B5CF750)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_5E28DFEC97B9C645_OFFSET UNITYSDK_OFFSET(0x1B5CFE40)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_5ECDE5F5AB3C6985_OFFSET UNITYSDK_OFFSET(0x1B5CF880)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_64587FE21067DFC1_OFFSET UNITYSDK_OFFSET(0x1B5CF520)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_7FFA59D764841066_OFFSET UNITYSDK_OFFSET(0x1B5CF3D0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_827D5488E6DDE0EA_OFFSET UNITYSDK_OFFSET(0x1B5CFFA0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_9DF4AE18A27A14EC_OFFSET UNITYSDK_OFFSET(0x1B5CF670)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_9E990ADBDFDA373F_OFFSET UNITYSDK_OFFSET(0x1B5D0340)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_B80FCB706F7045BB_OFFSET UNITYSDK_OFFSET(0x1B5D0050)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_PLAYSTACKABLEADDCARDTOHANDFLOW_OFFSET UNITYSDK_OFFSET(0x1B5BC650)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5D0610)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinStackableAddCardToHandFlowView_TypeDefinitionIndex = 79375;

	class FateRinStackableAddCardToHandFlowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _FlyDuration; // 0x18
		::System::String* _FlyEaseName; // 0x20
		::System::Single _ReflowDuration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_413* PlayStackableAddCardToHandFlow(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a3, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a4, ::RPG::Client::Promises::IPendingPromise* a5)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_PLAYSTACKABLEADDCARDTOHANDFLOW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::Class_0_16E4307DCC419505_413* Method_5_3CDEC98B97A86E18(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_3CDEC98B97A86E18_OFFSET))(a1);
		}

		::Class_0_16E4307DCC419505_413* Method_5_5ECDE5F5AB3C6985(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a2, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a3)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_5ECDE5F5AB3C6985_OFFSET))(this, a1, a2, a3);
		}

		::Class_0_16E4307DCC419505_413* Method_5_827D5488E6DDE0EA(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_827D5488E6DDE0EA_OFFSET))(this, a1, a2);
		}

		static ::Class_0_16E4307DCC419505_413* Method_5_64587FE21067DFC1(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::String* a2)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_64587FE21067DFC1_OFFSET))(a1, a2);
		}

		static ::Class_0_16E4307DCC419505_413* Method_5_5E28DFEC97B9C645(::UnityEngine::RectTransform* a1, ::System::String* a2)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_5E28DFEC97B9C645_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B80FCB706F7045BB(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_B80FCB706F7045BB_OFFSET))(a1);
		}

		static ::Class_0_16E4307DCC419505_413* Method_5_7FFA59D764841066(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Boolean a2)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_7FFA59D764841066_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9E990ADBDFDA373F(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_9E990ADBDFDA373F_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MonoAnimationTrigger* Method_5_9DF4AE18A27A14EC(::UnityEngine::RectTransform* a1)
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_METHOD_5_9DF4AE18A27A14EC_OFFSET))(a1);
		}
	};
}
