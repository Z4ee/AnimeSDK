#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LevelNpcMaterialReplacer; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL_INITENTITY_OFFSET UNITYSDK_OFFSET(0xA754B50)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xA754DA0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0xA755140)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL_PLAYFREESTYLE_OFFSET UNITYSDK_OFFSET(0xA755390)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL_SETEYEEMOTION_OFFSET UNITYSDK_OFFSET(0xA754C40)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL_SETLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xA754BE0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA755550)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__GETENTITY_OFFSET UNITYSDK_OFFSET(0xA7554B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA7549D0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA7547B0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__PLAYENTITYDITHER_OFFSET UNITYSDK_OFFSET(0xA754FB0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEIN_G__ONTIMELINEAPPEARONSTOPPED_3_0_OFFSET UNITYSDK_OFFSET(0xA755560)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEOUT_G__ONTIMELINEDISAPPEARONSTOPPED_4_0_OFFSET UNITYSDK_OFFSET(0xA755620)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA755740)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA7556E0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsMainLimaoControl_TypeDefinitionIndex = 68438;

	class LimaoNewsMainLimaoControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LevelNpcMaterialReplacer* _MaterialReplacer; // 0x30
		::RPG::Client::LookAtIK* _LookAtIK; // 0x38
		::UnityEngine::Transform* _LookAtTarget; // 0x40
		::UnityEngine::Playables::PlayableDirector* _TimeLineAppear; // 0x48
		::UnityEngine::Playables::PlayableDirector* _TimeLineDisappear; // 0x50
		::RPG::Client::Promises::Promise* _PromiseAppear; // 0x58
		::RPG::Client::Promises::Promise* _PromiseDisappear; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void InitEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL_INITENTITY_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* PlayFadeIn()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL_PLAYFADEIN_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* PlayFadeOut()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL_PLAYFADEOUT_OFFSET))(this);
		}

		::System::Void PlayFreeStyle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL_PLAYFREESTYLE_OFFSET))(this);
		}

		::System::Void SetEyeEmotion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL_SETEYEEMOTION_OFFSET))(this);
		}

		::System::Void SetLookAtTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL_SETLOOKATTARGET_OFFSET))(this);
		}

		::System::Void _PlayEntityDither(::System::Boolean fadeIn, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__PLAYENTITYDITHER_OFFSET))(this, fadeIn, duration);
		}

		::RPG::GameCore::GameEntity* _GetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__GETENTITY_OFFSET))(this);
		}

		::System::Void _PlayFadeIn_g__OnTimeLineAppearOnstopped_3_0(::UnityEngine::Playables::PlayableDirector* _)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEIN_G__ONTIMELINEAPPEARONSTOPPED_3_0_OFFSET))(this, _);
		}

		::System::Void _PlayFadeOut_g__OnTimeLineDisappearOnstopped_4_0(::UnityEngine::Playables::PlayableDirector* _)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL__PLAYFADEOUT_G__ONTIMELINEDISAPPEARONSTOPPED_4_0_OFFSET))(this, _);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSMAINLIMAOCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
