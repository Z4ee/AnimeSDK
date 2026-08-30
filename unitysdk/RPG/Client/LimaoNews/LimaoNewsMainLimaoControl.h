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

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_INITENTITY_OFFSET UNITYSDK_OFFSET(0xD4694B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xD469660)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0xD469240)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_PLAYFREESTYLE_OFFSET UNITYSDK_OFFSET(0xD469500)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_SETEYEEMOTION_OFFSET UNITYSDK_OFFSET(0xD469AF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_SETLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xD4699C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_SWITCHLIMAOSTATUS_OFFSET UNITYSDK_OFFSET(0xD468D60)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__APPLYVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD468B80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__CREATELIMAOGROUP_OFFSET UNITYSDK_OFFSET(0xD4688A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD46A140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETCURRENTLIMAOGROUP_OFFSET UNITYSDK_OFFSET(0xD469950)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETENTITYNAME_OFFSET UNITYSDK_OFFSET(0xD46A070)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETENTITY_OFFSET UNITYSDK_OFFSET(0xD469E70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETGROUPPATH_OFFSET UNITYSDK_OFFSET(0xD469F20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__GETLIMAOPATH_OFFSET UNITYSDK_OFFSET(0xD469F90)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD468AD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD468670)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYENTITYDITHER_OFFSET UNITYSDK_OFFSET(0xD469C70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEIN_G__ONTIMELINEAPPEARONSTOPPED_9_0_OFFSET UNITYSDK_OFFSET(0xD46A180)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEOUT_G__ONTIMELINEDISAPPEARONSTOPPED_10_0_OFFSET UNITYSDK_OFFSET(0xD46A260)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SETLIMAOCOUNT_OFFSET UNITYSDK_OFFSET(0xD469880)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SWITCHTOVIEWMODELIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xD468E00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SWITCHTOVIEWMODELWITHFADEINANDFADEOUT_OFFSET UNITYSDK_OFFSET(0xD469120)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SWITCHTOVIEWMODELWITHFADEIN_OFFSET UNITYSDK_OFFSET(0xD468EB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL__SWITCHTOVIEWMODELWITHFADEOUT_OFFSET UNITYSDK_OFFSET(0xD469010)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainLimaoControl_TypeDefinitionIndex = 79042;

	class LimaoNewsMainLimaoControl : public ::Sofa::BaseSofaControl
	{
	public:
		::Il2CppArray<::RPG::Client::LimaoNews::LimaoNewsMainLimaoControl_LimaoGroup*>* _LimaoGroups; // 0x38
		::System::Int32 _CurrentLimaoCount; // 0x40
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
