#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_38.h"
#include "unitysdk/MoleMole/UIBossChallengeTabBtnsWidgetController_TabDef.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7B81231F8EC46EFE;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_GETTABANIM_OFFSET UNITYSDK_OFFSET(0x19A90C10)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_INDEXOFPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x19A91030)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A8F910)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A8FA00)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A8F9A0)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_PLAYTABFADEINANIM_OFFSET UNITYSDK_OFFSET(0x19A90E90)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_PLAYTABFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x19A90CF0)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_REFRESHSELECTED_OFFSET UNITYSDK_OFFSET(0x19A906C0)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_SETUP_OFFSET UNITYSDK_OFFSET(0x19A8FDB0)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_STOPSWITCHANIM_OFFSET UNITYSDK_OFFSET(0x19A8FA90)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_SYNCGAMEPADSELECTED_OFFSET UNITYSDK_OFFSET(0x19A91170)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_TRYGETGAMEPADTABINDEX_OFFSET UNITYSDK_OFFSET(0x19A91490)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A91890)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A91830)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A91940)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A919D0)
#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A91A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeTabBtnsWidgetController_TypeDefinitionIndex = 63012;

	class UIBossChallengeTabBtnsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::Il2CppArray<::MoleMole::UIBossChallengeTabBtnsWidgetController_TabDef>** StaticGet_TabDefs()
		{
			return (::Il2CppArray<::MoleMole::UIBossChallengeTabBtnsWidgetController_TabDef>**)Il2CppClass::FromTypeDefinitionIndex(UIBossChallengeTabBtnsWidgetController_TypeDefinitionIndex)->GetStaticField(0x3CF40);
		}
		::Class_2_7B81231F8EC46EFE* _view; // 0x2C0
		::System::Action_1<::Enum_3_DB663931210BBC27_38>* _onTabClicked; // 0x2C8
		::Enum_3_DB663931210BBC27_38 _currentPlayType; // 0x2D0
		::System::Boolean _hasCurrent; // 0x2D4
		::UnityEngine::Coroutine* _fadeInCo; // 0x2D8
		::UnityEngine::Coroutine* _fadeOutCo; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean Setup(::System::Action_1<::Enum_3_DB663931210BBC27_38>* onTabClicked, ::System::Boolean showRedDot)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::Enum_3_DB663931210BBC27_38>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_SETUP_OFFSET))(this, onTabClicked, showRedDot);
		}

		::System::Void RefreshSelected(::Enum_3_DB663931210BBC27_38 current, ::System::Boolean withAni)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_38, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_REFRESHSELECTED_OFFSET))(this, current, withAni);
		}

		::System::Void PlayTabFadeInAnim(::Enum_3_DB663931210BBC27_38 pt, ::System::Action* finishCb)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_38, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_PLAYTABFADEINANIM_OFFSET))(this, pt, finishCb);
		}

		::System::Void PlayTabFadeOutAnim(::Enum_3_DB663931210BBC27_38 pt, ::System::Action* finishCb)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_38, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_PLAYTABFADEOUTANIM_OFFSET))(this, pt, finishCb);
		}

		static ::System::Int32 IndexOfPlayType(::Enum_3_DB663931210BBC27_38 pt)
		{
			return ((::System::Int32(*)(::Enum_3_DB663931210BBC27_38))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_INDEXOFPLAYTYPE_OFFSET))(pt);
		}

		::System::Void SyncGamepadSelected(::Enum_3_DB663931210BBC27_38 playType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_38))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_SYNCGAMEPADSELECTED_OFFSET))(this, playType);
		}

		::System::Boolean TryGetGamepadTabIndex(::MoleMole::MonoGamepadModule* module, ::Enum_3_DB663931210BBC27_38 playType, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::Enum_3_DB663931210BBC27_38, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_TRYGETGAMEPADTABINDEX_OFFSET))(this, module, playType, index);
		}

		::UnityEngine::Animation* GetTabAnim(::System::Int32 index)
		{
			return ((::UnityEngine::Animation*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_GETTABANIM_OFFSET))(this, index);
		}

		::System::Void StopSwitchAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_STOPSWITCHANIM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
