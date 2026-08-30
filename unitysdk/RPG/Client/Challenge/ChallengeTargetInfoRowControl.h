#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::Challenge { class ChallengeTargetViewModel; }
namespace RPG::Client::Challenge { class ChallengeTargetViewModel_ProgressViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_GETSUCCESSHINTANIMLENGTH_OFFSET UNITYSDK_OFFSET(0x1C8625B0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_GET_PRIVATECOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x1C862780)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_GET_PRIVATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C862A00)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0x1C861B20)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_PLAYSUCCESSHINTANIM_OFFSET UNITYSDK_OFFSET(0x1C862600)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_REFRESHCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x1C862880)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_REFRESHNAMEPARAMS_OFFSET UNITYSDK_OFFSET(0x1C862700)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_REFRESHNAME_OFFSET UNITYSDK_OFFSET(0x1C862540)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_SET_PRIVATECOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x1C862800)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_SET_PRIVATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C862A80)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0x1C861BD0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL__CONVERTSTATETOTRIGGERNAME_OFFSET UNITYSDK_OFFSET(0x1C8628E0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C862B60)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1C861C20)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL__REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C862AD0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL__SETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1C862650)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeTargetInfoRowControl_TypeDefinitionIndex = 80091;

	class ChallengeTargetInfoRowControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LocalizedText* _TextName; // 0x38
		::UnityEngine::Animator* _AnimatorRoot; // 0x40
		::System::String* _TriggerNameOfSucceeded; // 0x48
		::System::String* _TriggerNameOfFailed; // 0x50
		::System::String* _TriggerNameOfPending; // 0x58
		::System::String* _TriggerNameOfSuccessHint; // 0x60
		::System::Single _FakeAnimSuccessHintDuration; // 0x68
		::UnityEngine::RectTransform* _NodeProgress; // 0x70
		::RPG::Client::LocalizedText* _TextProgressCurrent; // 0x78
		::RPG::Client::LocalizedText* _TextProgressTotal; // 0x80
		::System::String* _LastTriggerName; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::ChallengeTargetViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::Challenge::ChallengeTargetViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::Challenge::ChallengeTargetViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::ChallengeTargetViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Single GetSuccessHintAnimLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_GETSUCCESSHINTANIMLENGTH_OFFSET))(this);
		}

		::System::Void PlaySuccessHintAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_PLAYSUCCESSHINTANIM_OFFSET))(this);
		}

		::System::Void RefreshName(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_REFRESHNAME_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshNameParams(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_REFRESHNAMEPARAMS_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeTargetState get_PrivateCompleteStatus()
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_GET_PRIVATECOMPLETESTATUS_OFFSET))(this);
		}

		::System::Void set_PrivateCompleteStatus(::RPG::Client::ChallengeTargetState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeTargetState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_SET_PRIVATECOMPLETESTATUS_OFFSET))(this, a1);
		}

		::System::Void RefreshCompleteStatus(::RPG::Client::ChallengeTargetState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeTargetState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_REFRESHCOMPLETESTATUS_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::ChallengeTargetViewModel_ProgressViewModel* get_PrivateProgress()
		{
			return ((::RPG::Client::Challenge::ChallengeTargetViewModel_ProgressViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_GET_PRIVATEPROGRESS_OFFSET))(this);
		}

		::System::Void set_PrivateProgress(::RPG::Client::Challenge::ChallengeTargetViewModel_ProgressViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::ChallengeTargetViewModel_ProgressViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL_SET_PRIVATEPROGRESS_OFFSET))(this, a1);
		}

		::System::Void _RefreshProgress(::RPG::Client::Challenge::ChallengeTargetViewModel_ProgressViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::ChallengeTargetViewModel_ProgressViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL__REFRESHPROGRESS_OFFSET))(this, a1);
		}

		::System::String* _ConvertStateToTriggerName(::RPG::Client::ChallengeTargetState a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::ChallengeTargetState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL__CONVERTSTATETOTRIGGERNAME_OFFSET))(this, a1);
		}

		::System::Void _SetTrigger(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL__SETTRIGGER_OFFSET))(this, a1);
		}
	};
}
