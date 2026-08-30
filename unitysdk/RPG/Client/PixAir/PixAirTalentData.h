#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirTalentStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1BD18180)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BD18160)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_PARAMMAP_OFFSET UNITYSDK_OFFSET(0x1BD18200)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_PRETALENTLIST_OFFSET UNITYSDK_OFFSET(0x1BD181A0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1BD181E0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_TALENTID_OFFSET UNITYSDK_OFFSET(0x1BD18140)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_UNLOCKSCORE_OFFSET UNITYSDK_OFFSET(0x1BD181C0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1BD18480)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1BD18190)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1BD18170)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_PARAMMAP_OFFSET UNITYSDK_OFFSET(0x1BD18210)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_PRETALENTLIST_OFFSET UNITYSDK_OFFSET(0x1BD181B0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1BD181F0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_TALENTID_OFFSET UNITYSDK_OFFSET(0x1BD18150)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_UNLOCKSCORE_OFFSET UNITYSDK_OFFSET(0x1BD181D0)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SYNCCURRENTSCORE_OFFSET UNITYSDK_OFFSET(0x1BD18430)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1BD18220)
#define RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD183F0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirTalentData_TypeDefinitionIndex = 78897;

	class PixAirTalentData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ParamMap_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _PreTalentList_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* ParamList; // 0x20
		::RPG::Client::PixAir::PixAirTalentStatus _Status_k__BackingField; // 0x28
		::RPG::Client::TextID _Desc_k__BackingField; // 0x30
		::RPG::Client::TextID _Name_k__BackingField; // 0x40
		::System::UInt32 _UnlockScore_k__BackingField; // 0x50
		::System::UInt32 _TalentID_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_TalentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_TALENTID_OFFSET))(this);
		}

		::System::Void set_TalentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_TALENTID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_DESC_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_PreTalentList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_PRETALENTLIST_OFFSET))(this);
		}

		::System::Void set_PreTalentList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_PRETALENTLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_UNLOCKSCORE_OFFSET))(this);
		}

		::System::Void set_UnlockScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_UNLOCKSCORE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirTalentStatus get_Status()
		{
			return ((::RPG::Client::PixAir::PixAirTalentStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::PixAir::PixAirTalentStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirTalentStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ParamMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_GET_PARAMMAP_OFFSET))(this);
		}

		::System::Void set_ParamMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SET_PARAMMAP_OFFSET))(this, a1);
		}

		static ::RPG::Client::PixAir::PixAirTalentData* TryCreate(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PixAir::PixAirTalentData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_TRYCREATE_OFFSET))(a1, a2);
		}

		::System::Void SyncCurrentScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SYNCCURRENTSCORE_OFFSET))(this, a1);
		}

		::System::Void SetUnlocked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRTALENTDATA_SETUNLOCKED_OFFSET))(this);
		}
	};
}
