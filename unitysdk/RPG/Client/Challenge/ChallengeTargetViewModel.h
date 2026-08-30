#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::Client::Challenge { class ChallengeTargetViewModel_ProgressViewModel; }
namespace System { class Object; }

#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_ISNEWFINISHED_OFFSET UNITYSDK_OFFSET(0xC9F3150)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_NAMEPARAMS_OFFSET UNITYSDK_OFFSET(0xC9F24B0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC9F23D0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_PROGRESSCURRENT_OFFSET UNITYSDK_OFFSET(0xC9F30B0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_PROGRESSTOTAL_OFFSET UNITYSDK_OFFSET(0xC9F3100)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xC9F2E30)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_SHOULDHIDEPROGRESS_OFFSET UNITYSDK_OFFSET(0xC9F2F30)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC9F2CF0)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET__MODELHASPROGRESSTOSHOW_OFFSET UNITYSDK_OFFSET(0xC9F2D40)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_SET_ISNEWFINISHED_OFFSET UNITYSDK_OFFSET(0xC9F3160)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_SET_SHOULDHIDEPROGRESS_OFFSET UNITYSDK_OFFSET(0xC9F2F80)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC9F3170)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeTargetViewModel_TypeDefinitionIndex = 80099;

	class ChallengeTargetViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::Challenge::ChallengeTargetViewModel_ProgressViewModel* _Progress; // 0x18
		::RPG::Client::BaseChallengeTargetData* _Model; // 0x20
		::System::Boolean _IsNewFinished_k__BackingField; // 0x28
		::System::Boolean _ShouldHideProgress; // 0x29

		::System::Void _ctor(::RPG::Client::BaseChallengeTargetData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeTargetState get_State()
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_STATE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_NameParams()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_NAMEPARAMS_OFFSET))(this);
		}

		::System::Boolean get__ModelHasProgressToShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET__MODELHASPROGRESSTOSHOW_OFFSET))(this);
		}

		::RPG::Client::Challenge::ChallengeTargetViewModel_ProgressViewModel* get_Progress()
		{
			return ((::RPG::Client::Challenge::ChallengeTargetViewModel_ProgressViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_PROGRESS_OFFSET))(this);
		}

		::System::Boolean get_ShouldHideProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_SHOULDHIDEPROGRESS_OFFSET))(this);
		}

		::System::Void set_ShouldHideProgress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_SET_SHOULDHIDEPROGRESS_OFFSET))(this, a1);
		}

		::System::Int32 get_ProgressCurrent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_PROGRESSCURRENT_OFFSET))(this);
		}

		::System::Int32 get_ProgressTotal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_PROGRESSTOTAL_OFFSET))(this);
		}

		::System::Boolean get_IsNewFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_GET_ISNEWFINISHED_OFFSET))(this);
		}

		::System::Void set_IsNewFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETVIEWMODEL_SET_ISNEWFINISHED_OFFSET))(this, a1);
		}
	};
}
