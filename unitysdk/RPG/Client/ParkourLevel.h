#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourLevelState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ParkourLevel_IServerAgent; }
namespace RPG::GameCore { class ParkourLevelConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define RPG_CLIENT_PARKOURLEVEL_CHECKNEEDAUTOSHOWUIENTRANCEWHENSUCCESS_OFFSET UNITYSDK_OFFSET(0xC343160)
#define RPG_CLIENT_PARKOURLEVEL_CREATE_OFFSET UNITYSDK_OFFSET(0xC344CA0)
#define RPG_CLIENT_PARKOURLEVEL_FILLSUBMISSIONIDTO_OFFSET UNITYSDK_OFFSET(0xC344E80)
#define RPG_CLIENT_PARKOURLEVEL_GETRANDOMBGMID_OFFSET UNITYSDK_OFFSET(0xC343020)
#define RPG_CLIENT_PARKOURLEVEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC344830)
#define RPG_CLIENT_PARKOURLEVEL_GET_HASSTORY_OFFSET UNITYSDK_OFFSET(0xC3448B0)
#define RPG_CLIENT_PARKOURLEVEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xC33FA60)
#define RPG_CLIENT_PARKOURLEVEL_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xC344B70)
#define RPG_CLIENT_PARKOURLEVEL_GET_LAPCOUNT_OFFSET UNITYSDK_OFFSET(0xC33FF30)
#define RPG_CLIENT_PARKOURLEVEL_GET_LIMITBALLID_OFFSET UNITYSDK_OFFSET(0xC33F070)
#define RPG_CLIENT_PARKOURLEVEL_GET_MAPIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xC3448D0)
#define RPG_CLIENT_PARKOURLEVEL_GET_MINIMAPANGLE_OFFSET UNITYSDK_OFFSET(0xC3448F0)
#define RPG_CLIENT_PARKOURLEVEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC33FB10)
#define RPG_CLIENT_PARKOURLEVEL_GET_RECORD_OFFSET UNITYSDK_OFFSET(0xC340090)
#define RPG_CLIENT_PARKOURLEVEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xC344910)
#define RPG_CLIENT_PARKOURLEVEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC344940)
#define RPG_CLIENT_PARKOURLEVEL_GET_TARGETRANK_OFFSET UNITYSDK_OFFSET(0xC344890)
#define RPG_CLIENT_PARKOURLEVEL_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xC344860)
#define RPG_CLIENT_PARKOURLEVEL_GET_TRIGGERCARTASKUNLOCK_OFFSET UNITYSDK_OFFSET(0xC344920)
#define RPG_CLIENT_PARKOURLEVEL_MARKHASSEEN_OFFSET UNITYSDK_OFFSET(0xC344D20)
#define RPG_CLIENT_PARKOURLEVEL__CHECKHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC344A10)
#define RPG_CLIENT_PARKOURLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC344D10)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourLevel_TypeDefinitionIndex = 57842;

	class ParkourLevel : public ::System::Object
	{
	public:
		::RPG::GameCore::ParkourLevelConfigRow* _Meta; // 0x10
		::RPG::Client::ParkourLevel_IServerAgent* _ServerAgent; // 0x18

		::System::Void _ctor(::RPG::GameCore::ParkourLevelConfigRow* a1, ::RPG::Client::ParkourLevel_IServerAgent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParkourLevelConfigRow*, ::RPG::Client::ParkourLevel_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_Target()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_TARGET_OFFSET))(this);
		}

		::System::UInt32 get_TargetRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_TARGETRANK_OFFSET))(this);
		}

		::System::Boolean get_HasStory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_HASSTORY_OFFSET))(this);
		}

		::System::String* get_MapImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_MAPIMAGEPATH_OFFSET))(this);
		}

		::System::Single get_MinimapAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_MINIMAPANGLE_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_REWARDID_OFFSET))(this);
		}

		::System::String* get_TriggerCarTaskUnlock()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_TRIGGERCARTASKUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_LapCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_LAPCOUNT_OFFSET))(this);
		}

		::RPG::Client::ParkourLevelState get_State()
		{
			return ((::RPG::Client::ParkourLevelState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_STATE_OFFSET))(this);
		}

		::System::UInt32 get_Record()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_RECORD_OFFSET))(this);
		}

		::System::UInt32 get_LimitBallID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_LIMITBALLID_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GET_ISNEW_OFFSET))(this);
		}

		static ::RPG::Client::ParkourLevel* Create(::RPG::GameCore::ParkourLevelConfigRow* a1, ::RPG::Client::ParkourLevel_IServerAgent* a2)
		{
			return ((::RPG::Client::ParkourLevel*(*)(::RPG::GameCore::ParkourLevelConfigRow*, ::RPG::Client::ParkourLevel_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean CheckNeedAutoShowUIEntranceWhenSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_CHECKNEEDAUTOSHOWUIENTRANCEWHENSUCCESS_OFFSET))(this);
		}

		::System::UInt32 GetRandomBGMID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_GETRANDOMBGMID_OFFSET))(this);
		}

		::System::Void MarkHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_MARKHASSEEN_OFFSET))(this);
		}

		::System::Void FillSubmissionIDTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_FILLSUBMISSIONIDTO_OFFSET))(this, a1);
		}

		::System::Boolean _CheckHasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL__CHECKHASUNLOCKED_OFFSET))(this);
		}
	};
}
