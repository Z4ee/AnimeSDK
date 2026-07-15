#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/CharacterMeetEventSentence.h"
#include "unitysdk/System/Object.h"

class Class_1_E1B52763F52BED2C;
namespace RPG::Client::ActivityIdleLive { class AvatarNewGotUiData; }
namespace RPG::Client::ActivityIdleLive { class CharacterMeetPerformService_BattleAvatarGender; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_FILLEVENTBGSRANDOMLY_OFFSET UNITYSDK_OFFSET(0x19D20450)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_GETALLEVENTBGS_OFFSET UNITYSDK_OFFSET(0x19D20340)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_GETFIRSTAVATARCONFIG_OFFSET UNITYSDK_OFFSET(0x19D201C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_GETFIRSTGOTAVATARBG_OFFSET UNITYSDK_OFFSET(0x19D20560)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_GETNEXTSENTENCE_OFFSET UNITYSDK_OFFSET(0x19D202C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_GET_TARGETEVENTBG_OFFSET UNITYSDK_OFFSET(0x19D1F720)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_HASNEXTSENTENCE_OFFSET UNITYSDK_OFFSET(0x19D20240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_SHOWAVATARNEWGOTPAGE_OFFSET UNITYSDK_OFFSET(0x19D20870)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE__BUILDAVATARNEWGOTUIDATAS_OFFSET UNITYSDK_OFFSET(0x19D205F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1F760)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE__INITALLPOSSIBLEEVENTBGS_OFFSET UNITYSDK_OFFSET(0x19D1F890)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE__INITAVATARGOTIDS_OFFSET UNITYSDK_OFFSET(0x19D1FD60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE__INITBATTLEAVATARGENDERS_OFFSET UNITYSDK_OFFSET(0x19D1FB20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE__INITEVENTTOPERFORM_OFFSET UNITYSDK_OFFSET(0x19D1FAD0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int CharacterMeetPerformService_TypeDefinitionIndex = 71559;

	class CharacterMeetPerformService : public ::System::Object
	{
	public:
		::System::String* _TargetEventBg; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _AllEventBgs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::CharacterMeetPerformService_BattleAvatarGender*>* _BattleAvatarGenders; // 0x20
		::Class_1_E1B52763F52BED2C* _CharacterMeetEvent; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _AvatarGotIds; // 0x30
		::System::UInt32 _EventIdToPerform; // 0x38

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_TargetEventBg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_GET_TARGETEVENTBG_OFFSET))(this);
		}

		::System::Void _InitAllPossibleEventBgs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE__INITALLPOSSIBLEEVENTBGS_OFFSET))(this);
		}

		::System::Void _InitEventToPerform(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE__INITEVENTTOPERFORM_OFFSET))(this, a1);
		}

		::System::Void _InitBattleAvatarGenders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE__INITBATTLEAVATARGENDERS_OFFSET))(this);
		}

		::System::Void _InitAvatarGotIds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE__INITAVATARGOTIDS_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* GetFirstAvatarConfig()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_GETFIRSTAVATARCONFIG_OFFSET))(this);
		}

		::System::Boolean HasNextSentence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_HASNEXTSENTENCE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence GetNextSentence()
		{
			return ((::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_GETNEXTSENTENCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetAllEventBgs(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_GETALLEVENTBGS_OFFSET))(this, a1, a2);
		}

		::System::String* GetFirstGotAvatarBg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_GETFIRSTGOTAVATARBG_OFFSET))(this);
		}

		::System::Void FillEventBgsRandomly(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_FILLEVENTBGSRANDOMLY_OFFSET))(this, a1, a2);
		}

		::System::Void ShowAvatarNewGotPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_SHOWAVATARNEWGOTPAGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::AvatarNewGotUiData*>* _BuildAvatarNewGotUiDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::AvatarNewGotUiData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE__BUILDAVATARNEWGOTUIDATAS_OFFSET))(this);
		}
	};
}
