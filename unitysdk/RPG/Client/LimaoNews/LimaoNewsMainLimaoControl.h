#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LevelNpcMaterialReplacer; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_INITENTITY_OFFSET UNITYSDK_OFFSET(0xBD928C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xBD92B10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0xBD92EC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_PLAYFREESTYLE_OFFSET UNITYSDK_OFFSET(0xBD93130)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_SETEYEEMOTION_OFFSET UNITYSDK_OFFSET(0xBD929B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_SETLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xBD92950)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD932F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETENTITY_OFFSET UNITYSDK_OFFSET(0xBD93250)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD926F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD924D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYENTITYDITHER_OFFSET UNITYSDK_OFFSET(0xBD92D30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEIN_G__ONTIMELINEAPPEARONSTOPPED_3_0_OFFSET UNITYSDK_OFFSET(0xBD93320)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEOUT_G__ONTIMELINEDISAPPEARONSTOPPED_4_0_OFFSET UNITYSDK_OFFSET(0xBD93400)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD93540)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD934E0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainLimaoControl_TypeDefinitionIndex = 73813;

	class LimaoNewsMainLimaoControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LevelNpcMaterialReplacer* _MaterialReplacer; // 0x38
		::RPG::Client::LookAtIK* _LookAtIK; // 0x40
		::UnityEngine::Transform* _LookAtTarget; // 0x48
		::UnityEngine::Playables::PlayableDirector* _TimeLineAppear; // 0x50
		::UnityEngine::Playables::PlayableDirector* _TimeLineDisappear; // 0x58
		::RPG::Client::Promises::Promise* _PromiseAppear; // 0x60
		::RPG::Client::Promises::Promise* _PromiseDisappear; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void InitEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_INITENTITY_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* PlayFadeIn()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_PLAYFADEIN_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* PlayFadeOut()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_PLAYFADEOUT_OFFSET))(this);
		}

		::System::Void PlayFreeStyle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_PLAYFREESTYLE_OFFSET))(this);
		}

		::System::Void SetEyeEmotion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_SETEYEEMOTION_OFFSET))(this);
		}

		::System::Void SetLookAtTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_SETLOOKATTARGET_OFFSET))(this);
		}

		::System::Void _PlayEntityDither(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYENTITYDITHER_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* _GetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETENTITY_OFFSET))(this);
		}

		::System::Void _PlayFadeIn_g__OnTimeLineAppearOnstopped_3_0(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEIN_G__ONTIMELINEAPPEARONSTOPPED_3_0_OFFSET))(this, a1);
		}

		::System::Void _PlayFadeOut_g__OnTimeLineDisappearOnstopped_4_0(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEOUT_G__ONTIMELINEDISAPPEARONSTOPPED_4_0_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
