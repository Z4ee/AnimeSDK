#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1349;
class Class_0_16E4307DCC419505_413;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardPileBtnViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudHandCardLayout; }
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x1B5CAEC0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_2607E22D710FF025_OFFSET UNITYSDK_OFFSET(0x1B5CA8E0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_3CDEC98B97A86E18_OFFSET UNITYSDK_OFFSET(0x1B5CAA40)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_73897A3F6F629112_OFFSET UNITYSDK_OFFSET(0x1B5CAB90)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_7F1A139D7A734F56_OFFSET UNITYSDK_OFFSET(0x1B5CAD70)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_93EC104704E507CE_OFFSET UNITYSDK_OFFSET(0x1B5CA110)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_B028A1E147D1AA05_OFFSET UNITYSDK_OFFSET(0x1B5C9860)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_PLAYDISCARDFLOWFROMWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B5BDA00)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_PLAYDISCARDFLOW_OFFSET UNITYSDK_OFFSET(0x1B5BD6B0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CAF50)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinDiscardCardFlowView_TypeDefinitionIndex = 79353;

	class FateRinDiscardCardFlowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _BtnDropTransform; // 0x18
		::UnityEngine::Animation* _BtnDropAnimation; // 0x20
		::System::Single _StaggerInterval; // 0x28
		::UnityEngine::Vector3 _TrailMidLocalOffset; // 0x2C
		::System::Single _ReflowDuration; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_413* PlayDiscardFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a2, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::Class_0_16E4307DCC419505_1349* a5, ::RPG::Client::Promises::IPendingPromise* a6)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::Class_0_16E4307DCC419505_1349*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_PLAYDISCARDFLOW_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Class_0_16E4307DCC419505_413* PlayDiscardFlowFromWorldPosition(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a2, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::Class_0_16E4307DCC419505_1349* a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7, ::RPG::Client::Promises::IPendingPromise* a8)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::Class_0_16E4307DCC419505_1349*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_PLAYDISCARDFLOWFROMWORLDPOSITION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::Class_0_16E4307DCC419505_413* Method_5_B028A1E147D1AA05(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a2, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::Class_0_16E4307DCC419505_1349* a5, ::System::Nullable_1<::UnityEngine::Vector3> a6, ::System::Nullable_1<::UnityEngine::Quaternion> a7, ::RPG::Client::Promises::IPendingPromise* a8)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::Class_0_16E4307DCC419505_1349*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_B028A1E147D1AA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::Class_0_16E4307DCC419505_413* Method_5_93EC104704E507CE(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::System::Boolean a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a5, ::System::Object* a6, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a7, ::System::Nullable_1<::UnityEngine::Vector3> a8, ::System::Nullable_1<::UnityEngine::Quaternion> a9)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::System::Boolean, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::System::Object*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_93EC104704E507CE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::UnityEngine::Vector3 Method_5_73897A3F6F629112(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_73897A3F6F629112_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_413* Method_5_3CDEC98B97A86E18(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_3CDEC98B97A86E18_OFFSET))(this, a1);
		}

		static ::Class_0_16E4307DCC419505_413* Method_5_2607E22D710FF025(::Class_0_16E4307DCC419505_1349* a1, ::System::String* a2)
		{
			return ((::Class_0_16E4307DCC419505_413*(*)(::Class_0_16E4307DCC419505_1349*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_2607E22D710FF025_OFFSET))(a1, a2);
		}

		::System::Void Method_5_078D85152011B919()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_078D85152011B919_OFFSET))(this);
		}

		::RPG::Client::MonoAnimationTrigger* Method_5_7F1A139D7A734F56(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_METHOD_5_7F1A139D7A734F56_OFFSET))(this, a1);
		}
	};
}
