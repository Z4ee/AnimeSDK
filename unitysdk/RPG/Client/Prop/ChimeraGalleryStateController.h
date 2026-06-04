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

#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_FORCEIDLEANIMATION_OFFSET UNITYSDK_OFFSET(0xC523DF0)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_GETACTCONFIG_OFFSET UNITYSDK_OFFSET(0xC523B60)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC5234B0)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_ONENTER_OFFSET UNITYSDK_OFFSET(0xC5237A0)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_ONEXIT_OFFSET UNITYSDK_OFFSET(0xC5238A0)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_PLAYACTANIMATION_OFFSET UNITYSDK_OFFSET(0xC523C30)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_PLAYBLENDOUTANIMATION_OFFSET UNITYSDK_OFFSET(0xC523D10)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_RELOADCHIMERA_OFFSET UNITYSDK_OFFSET(0xC523900)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_SETEYESANIMATIONACTIVE_OFFSET UNITYSDK_OFFSET(0xC523E50)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC523ED0)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER__INIT_OFFSET UNITYSDK_OFFSET(0xC523500)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___IFIXBASEPROXY_ONENTER_OFFSET UNITYSDK_OFFSET(0xC523FA0)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___IFIXBASEPROXY_ONEXIT_OFFSET UNITYSDK_OFFSET(0xC523FB0)
#define RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER___IFIXBASEPROXY__INIT_OFFSET UNITYSDK_OFFSET(0xC523F40)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraGalleryStateController_TypeDefinitionIndex = 73012;

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

		::System::Void ReloadChimera(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_RELOADCHIMERA_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraGalleryStateController_ActConfig* GetActConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::Prop::ChimeraGalleryStateController_ActConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_GETACTCONFIG_OFFSET))(this, a1);
		}

		::System::Void PlayActAnimation(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_PLAYACTANIMATION_OFFSET))(this, a1);
		}

		::System::Void PlayBlendOutAnimation(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_PLAYBLENDOUTANIMATION_OFFSET))(this, a1);
		}

		::System::Void ForceIdleAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_FORCEIDLEANIMATION_OFFSET))(this);
		}

		::System::Void SetEyesAnimationActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAGALLERYSTATECONTROLLER_SETEYESANIMATIONACTIVE_OFFSET))(this, a1);
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
