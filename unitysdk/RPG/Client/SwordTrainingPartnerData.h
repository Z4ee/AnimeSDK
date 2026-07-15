#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingPartnerRow; }
namespace System { class String; }

#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_ASSISTTIME_OFFSET UNITYSDK_OFFSET(0x19C73090)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x19C73070)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_AVATARITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x19C73360)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_AVATARROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x19C63650)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19C73050)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_PARTNERIMAGE_OFFSET UNITYSDK_OFFSET(0x19C730F0)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_PARTNERNAME_OFFSET UNITYSDK_OFFSET(0x19C732B0)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x19C73190)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_STORYDISPLAYPARTNERNAME_OFFSET UNITYSDK_OFFSET(0x19C731F0)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x19C730D0)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x19C72F10)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x19C73080)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x19C73060)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_SET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x19C730E0)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA_SYSTEM_ICOMPARABLE_RPG_CLIENT_SWORDTRAININGPARTNERDATA__COMPARETO_OFFSET UNITYSDK_OFFSET(0x19C73000)
#define RPG_CLIENT_SWORDTRAININGPARTNERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19C64FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingPartnerData_TypeDefinitionIndex = 59232;

	class SwordTrainingPartnerData : public ::System::Object
	{
	public:
		::System::UInt32 _AvatarID_k__BackingField; // 0x10
		::System::UInt32 _UnlockID_k__BackingField; // 0x14
		::System::UInt32 _ID_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::SwordTrainingPartnerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingPartnerRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_ISUNLOCK_OFFSET))(this);
		}

		::System::Int32 System_IComparable_RPG_Client_SwordTrainingPartnerData__CompareTo(::RPG::Client::SwordTrainingPartnerData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingPartnerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_SYSTEM_ICOMPARABLE_RPG_CLIENT_SWORDTRAININGPARTNERDATA__COMPARETO_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AssistTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_ASSISTTIME_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_UNLOCKID_OFFSET))(this);
		}

		::System::Void set_UnlockID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_SET_UNLOCKID_OFFSET))(this, a1);
		}

		::System::String* get_PartnerImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_PARTNERIMAGE_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryDisplayPartnerName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_STORYDISPLAYPARTNERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_PartnerName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_PARTNERNAME_OFFSET))(this);
		}

		::System::String* get_AvatarRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_AVATARROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_AVATARITEMICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingPartnerRow* get_Row()
		{
			return ((::RPG::GameCore::SwordTrainingPartnerRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPARTNERDATA_GET_ROW_OFFSET))(this);
		}
	};
}
