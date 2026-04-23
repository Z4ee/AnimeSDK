#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationStateControllerBase.h"

namespace RPG::Client::Prop { class ChimeraGalleryStateController_ActConfig; }
namespace RPG::Client::Prop { class ChimeraGameObjectBuilder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_FORCEIDLEANIMATION_OFFSET UNITYSDK_OFFSET(0xADDFA30)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_GETACTCONFIG_OFFSET UNITYSDK_OFFSET(0xADDF750)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xADDF0C0)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_ONENTER_OFFSET UNITYSDK_OFFSET(0xADDF380)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_ONEXIT_OFFSET UNITYSDK_OFFSET(0xADDF490)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_PLAYACTANIMATION_OFFSET UNITYSDK_OFFSET(0xADDF7D0)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_PLAYBLENDOUTANIMATION_OFFSET UNITYSDK_OFFSET(0xADDF900)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_RELOADCHIMERA_OFFSET UNITYSDK_OFFSET(0xADDF4F0)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_SETEYESANIMATIONACTIVE_OFFSET UNITYSDK_OFFSET(0xADDFA90)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xADDFB10)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER__INIT_OFFSET UNITYSDK_OFFSET(0xADDF110)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___IFIXBASEPROXY_ONENTER_OFFSET UNITYSDK_OFFSET(0xADDFBE0)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___IFIXBASEPROXY_ONEXIT_OFFSET UNITYSDK_OFFSET(0xADDFBF0)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___IFIXBASEPROXY__INIT_OFFSET UNITYSDK_OFFSET(0xADDFB80)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraGalleryStateController_TypeDefinitionIndex = 71990;

	class ChimeraGalleryStateController : public ::RPG::Client::Prop::ChimeraPreparationStateControllerBase
	{
	public:
		::RPG::Client::Prop::ChimeraGameObjectBuilder* _ChimeraBuilder; // 0x38
		::UnityEngine::Animator* _ChimeraAnimator; // 0x40
		::System::String* _ForceIdleTriggerName; // 0x48
		::System::Single ForceCutDuration; // 0x50
		::System::Single ForceCutVfxDuration; // 0x54
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraGalleryStateController_ActConfig*>* _ActConfigs; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Prop::ChimeraGalleryStateController_ActConfig*>* _ActConfigDict; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraPreparationState get_State()
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_GET_STATE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER__INIT_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_ONEXIT_OFFSET))(this);
		}

		::System::Void ReloadChimera(::System::UInt32 chimeraID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_RELOADCHIMERA_OFFSET))(this, chimeraID);
		}

		::RPG::Client::Prop::ChimeraGalleryStateController_ActConfig* GetActConfig(::System::UInt32 actID)
		{
			return ((::RPG::Client::Prop::ChimeraGalleryStateController_ActConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_GETACTCONFIG_OFFSET))(this, actID);
		}

		::System::Void PlayActAnimation(::System::UInt32 actID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_PLAYACTANIMATION_OFFSET))(this, actID);
		}

		::System::Void PlayBlendOutAnimation(::System::UInt32 actID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_PLAYBLENDOUTANIMATION_OFFSET))(this, actID);
		}

		::System::Void ForceIdleAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_FORCEIDLEANIMATION_OFFSET))(this);
		}

		::System::Void SetEyesAnimationActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_SETEYESANIMATIONACTIVE_OFFSET))(this, active);
		}

		::System::Void __iFixBaseProxy__Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___IFIXBASEPROXY__INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___IFIXBASEPROXY_ONENTER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___IFIXBASEPROXY_ONEXIT_OFFSET))(this);
		}
	};
}
