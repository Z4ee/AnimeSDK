#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNewsSwitchUI3DLimaoType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::LimaoNews { class LimaoNewsMainEntrance3DViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsMainLimaoControl_LimaoGroup; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_INITENTITY_OFFSET UNITYSDK_OFFSET(0xD3C0020)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xD3C01D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0xD3BFDB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_PLAYFREESTYLE_OFFSET UNITYSDK_OFFSET(0xD3C0070)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_SETEYEEMOTION_OFFSET UNITYSDK_OFFSET(0xD3C0660)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_SETLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xD3C0530)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_SWITCHLIMAOSTATUS_OFFSET UNITYSDK_OFFSET(0xD3BF8D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__APPLYVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3BF6F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__CREATELIMAOGROUP_OFFSET UNITYSDK_OFFSET(0xD3BF410)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD3C0CB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETCURRENTLIMAOGROUP_OFFSET UNITYSDK_OFFSET(0xD3C04C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETENTITYNAME_OFFSET UNITYSDK_OFFSET(0xD3C0BE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETENTITY_OFFSET UNITYSDK_OFFSET(0xD3C09E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETGROUPPATH_OFFSET UNITYSDK_OFFSET(0xD3C0A90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETLIMAOPATH_OFFSET UNITYSDK_OFFSET(0xD3C0B00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3BF640)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD3BF1E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYENTITYDITHER_OFFSET UNITYSDK_OFFSET(0xD3C07E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEIN_G__ONTIMELINEAPPEARONSTOPPED_9_0_OFFSET UNITYSDK_OFFSET(0xD3C0CF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEOUT_G__ONTIMELINEDISAPPEARONSTOPPED_10_0_OFFSET UNITYSDK_OFFSET(0xD3C0DD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SETLIMAOCOUNT_OFFSET UNITYSDK_OFFSET(0xD3C03F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SWITCHTOVIEWMODELIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xD3BF970)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SWITCHTOVIEWMODELWITHFADEINANDFADEOUT_OFFSET UNITYSDK_OFFSET(0xD3BFC90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SWITCHTOVIEWMODELWITHFADEIN_OFFSET UNITYSDK_OFFSET(0xD3BFA20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SWITCHTOVIEWMODELWITHFADEOUT_OFFSET UNITYSDK_OFFSET(0xD3BFB80)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainLimaoControl_TypeDefinitionIndex = 80365;

	class LimaoNewsMainLimaoControl : public ::Sofa::BaseSofaControl
	{
	public:
		::Il2CppArray<::RPG::Client::LimaoNews::LimaoNewsMainLimaoControl_LimaoGroup*>* _LimaoGroups; // 0x40
		::System::Int32 _CurrentLimaoCount; // 0x48
		::UnityEngine::Transform* _LookAtTarget; // 0x50
		::UnityEngine::Playables::PlayableDirector* _TimeLineAppear; // 0x58
		::UnityEngine::Playables::PlayableDirector* _TimeLineDisappear; // 0x60
		::RPG::Client::Promises::Promise* _PromiseAppear; // 0x68
		::RPG::Client::Promises::Promise* _PromiseDisappear; // 0x70

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

		::System::Void SwitchLimaoStatus(::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* a1, ::RPG::Client::LimaoNewsSwitchUI3DLimaoType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel*, ::RPG::Client::LimaoNewsSwitchUI3DLimaoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_SWITCHLIMAOSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void _SwitchToViewModelWithFadeInAndFadeOut(::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SWITCHTOVIEWMODELWITHFADEINANDFADEOUT_OFFSET))(this, a1);
		}

		::System::Void _SwitchToViewModelWithFadeOut(::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SWITCHTOVIEWMODELWITHFADEOUT_OFFSET))(this, a1);
		}

		::System::Void _SwitchToViewModelImmediate(::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SWITCHTOVIEWMODELIMMEDIATE_OFFSET))(this, a1);
		}

		::System::Void _SwitchToViewModelWithFadeIn(::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SWITCHTOVIEWMODELWITHFADEIN_OFFSET))(this, a1);
		}

		::System::Void _ApplyViewModel(::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsMainEntrance3DViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__APPLYVIEWMODEL_OFFSET))(this, a1);
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

		::System::Void _SetLimaoCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SETLIMAOCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsMainLimaoControl_LimaoGroup* _GetCurrentLimaoGroup()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMainLimaoControl_LimaoGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETCURRENTLIMAOGROUP_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsMainLimaoControl_LimaoGroup* _CreateLimaoGroup(::System::Int32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsMainLimaoControl_LimaoGroup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__CREATELIMAOGROUP_OFFSET))(this, a1);
		}

		::System::String* _GetGroupPath(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETGROUPPATH_OFFSET))(this, a1);
		}

		::System::String* _GetLimaoPath(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETLIMAOPATH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* _GetEntity(::System::Int32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETENTITY_OFFSET))(this, a1);
		}

		::System::String* _GetEntityName(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETENTITYNAME_OFFSET))(this, a1, a2);
		}

		::System::Void _PlayFadeIn_g__OnTimeLineAppearOnstopped_9_0(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEIN_G__ONTIMELINEAPPEARONSTOPPED_9_0_OFFSET))(this, a1);
		}

		::System::Void _PlayFadeOut_g__OnTimeLineDisappearOnstopped_10_0(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEOUT_G__ONTIMELINEDISAPPEARONSTOPPED_10_0_OFFSET))(this, a1);
		}
	};
}
