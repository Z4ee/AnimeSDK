#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_413;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudHandCardLayout; }
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_GET_SPAWNANCHORTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B5B4BC0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_METHOD_5_0B3CA52D1AD6A767_OFFSET UNITYSDK_OFFSET(0x1B5B5910)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_METHOD_5_341A3DF81C331CBB_OFFSET UNITYSDK_OFFSET(0x1B5B5D40)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_METHOD_5_36414C46A95B72BB_OFFSET UNITYSDK_OFFSET(0x1B5B5A80)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_METHOD_5_382C3CF5F121EEBF_OFFSET UNITYSDK_OFFSET(0x1B5B5340)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_METHOD_5_78C1E62FB9D29916_OFFSET UNITYSDK_OFFSET(0x1B5B5EA0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_METHOD_5_7F1A139D7A734F56_OFFSET UNITYSDK_OFFSET(0x1B5B5C10)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_PLAYADDCARDTOHANDFLOW_OFFSET UNITYSDK_OFFSET(0x1B5B4C00)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B6440)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinAddCardToHandFlowView_TypeDefinitionIndex = 79325;

	class FateRinAddCardToHandFlowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _FlyDuration; // 0x18
		::System::String* _FlyEaseName; // 0x20
		::System::Single _ReflowDuration; // 0x28
		::UnityEngine::Transform* _SpawnAnchorTransform; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_SpawnAnchorTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_GET_SPAWNANCHORTRANSFORM_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_413* PlayAddCardToHandFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a2, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a5, ::RPG::Client::Promises::IPendingPromise* a6)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_PLAYADDCARDTOHANDFLOW_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Class_0_16E4307DCC419505_413* Method_5_341A3DF81C331CBB(::RPG::Client::FateRin::View::Battle::FateRinEffectController* a1, ::System::Object* a2)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_METHOD_5_341A3DF81C331CBB_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_413* Method_5_0B3CA52D1AD6A767(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a2, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a3)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_METHOD_5_0B3CA52D1AD6A767_OFFSET))(this, a1, a2, a3);
		}

		::Class_0_16E4307DCC419505_413* Method_5_78C1E62FB9D29916(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a2)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_METHOD_5_78C1E62FB9D29916_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_413* Method_5_36414C46A95B72BB(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a2, ::System::Object* a3, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a4)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_METHOD_5_36414C46A95B72BB_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::MonoAnimationTrigger* Method_5_7F1A139D7A734F56(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_METHOD_5_7F1A139D7A734F56_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_5_382C3CF5F121EEBF(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_METHOD_5_382C3CF5F121EEBF_OFFSET))(a1);
		}
	};
}
