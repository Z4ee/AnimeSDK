#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourLevelState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ParkourLevel_IServerAgent; }
namespace RPG::GameCore { class ParkourLevelConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define RPG_CLIENT_PARKOURLEVEL_CHECKNEEDAUTOSHOWUIENTRANCEWHENSUCCESS_OFFSET UNITYSDK_OFFSET(0xAC34860)
#define RPG_CLIENT_PARKOURLEVEL_CREATE_OFFSET UNITYSDK_OFFSET(0xAC347E0)
#define RPG_CLIENT_PARKOURLEVEL_FILLSUBMISSIONIDTO_OFFSET UNITYSDK_OFFSET(0xAC34B40)
#define RPG_CLIENT_PARKOURLEVEL_GETRANDOMBGMID_OFFSET UNITYSDK_OFFSET(0xAC34940)
#define RPG_CLIENT_PARKOURLEVEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xAC342D0)
#define RPG_CLIENT_PARKOURLEVEL_GET_HASSTORY_OFFSET UNITYSDK_OFFSET(0xAC34350)
#define RPG_CLIENT_PARKOURLEVEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xAC33EA0)
#define RPG_CLIENT_PARKOURLEVEL_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xAC346B0)
#define RPG_CLIENT_PARKOURLEVEL_GET_LAPCOUNT_OFFSET UNITYSDK_OFFSET(0xAC343E0)
#define RPG_CLIENT_PARKOURLEVEL_GET_LIMITBALLID_OFFSET UNITYSDK_OFFSET(0xAC34690)
#define RPG_CLIENT_PARKOURLEVEL_GET_MAPIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xAC34370)
#define RPG_CLIENT_PARKOURLEVEL_GET_MINIMAPANGLE_OFFSET UNITYSDK_OFFSET(0xAC34390)
#define RPG_CLIENT_PARKOURLEVEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xAC33EC0)
#define RPG_CLIENT_PARKOURLEVEL_GET_RECORD_OFFSET UNITYSDK_OFFSET(0xAC34630)
#define RPG_CLIENT_PARKOURLEVEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xAC343B0)
#define RPG_CLIENT_PARKOURLEVEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0xAC34400)
#define RPG_CLIENT_PARKOURLEVEL_GET_TARGETRANK_OFFSET UNITYSDK_OFFSET(0xAC34330)
#define RPG_CLIENT_PARKOURLEVEL_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xAC34300)
#define RPG_CLIENT_PARKOURLEVEL_GET_TRIGGERCARTASKUNLOCK_OFFSET UNITYSDK_OFFSET(0xAC343C0)
#define RPG_CLIENT_PARKOURLEVEL_MARKHASSEEN_OFFSET UNITYSDK_OFFSET(0xAC349E0)
#define RPG_CLIENT_PARKOURLEVEL__CHECKHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xAC344D0)
#define RPG_CLIENT_PARKOURLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAC34850)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourLevel_TypeDefinitionIndex = 57055;

	class ParkourLevel : public ::System::Object
	{
	public:
		::RPG::Client::ParkourLevel_IServerAgent* _ServerAgent; // 0x10
		::RPG::GameCore::ParkourLevelConfigRow* _Meta; // 0x18

		::System::Void _ctor(::RPG::GameCore::ParkourLevelConfigRow* meta, ::RPG::Client::ParkourLevel_IServerAgent* serverAgent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParkourLevelConfigRow*, ::RPG::Client::ParkourLevel_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL__CTOR_OFFSET))(this, meta, serverAgent);
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

		static ::RPG::Client::ParkourLevel* Create(::RPG::GameCore::ParkourLevelConfigRow* meta, ::RPG::Client::ParkourLevel_IServerAgent* serverAgent)
		{
			return ((::RPG::Client::ParkourLevel*(*)(::RPG::GameCore::ParkourLevelConfigRow*, ::RPG::Client::ParkourLevel_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_CREATE_OFFSET))(meta, serverAgent);
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

		::System::Void FillSubmissionIDTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL_FILLSUBMISSIONIDTO_OFFSET))(this, buffer);
		}

		::System::Boolean _CheckHasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVEL__CHECKHASUNLOCKED_OFFSET))(this);
		}
	};
}
