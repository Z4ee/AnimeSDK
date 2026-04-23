#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_60;
namespace RPG::GameCore { class TrainPartyActionConfigBase; }
namespace RPG::GameCore { class TrainPartyCardConfigRow; }
namespace RPG::GameCore { class TrainPartyCardEffectConfig; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CLEARNEWSTATUS_OFFSET UNITYSDK_OFFSET(0xB34A120)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB34A160)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CREATECARDDATA_OFFSET UNITYSDK_OFFSET(0xB349DC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CREATETEMPCARDDATA_OFFSET UNITYSDK_OFFSET(0xB349D50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GETEFFECTCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xB349F70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xB34A200)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB34A0C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_STEPNUM_OFFSET UNITYSDK_OFFSET(0xB34A1E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xB34A1C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SETCARDID_OFFSET UNITYSDK_OFFSET(0xB349F10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xB34A210)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SET_STEPNUM_OFFSET UNITYSDK_OFFSET(0xB34A1F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xB34A1D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB349E60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB349D40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB349D30)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyCardData_TypeDefinitionIndex = 68584;

	class TrainPartyCardData : public ::System::Object
	{
	public:
		::RPG::GameCore::TrainPartyCardEffectConfig* _CardEffectConfig; // 0x10
		::System::UInt32 _StepNum_k__BackingField; // 0x18
		::System::UInt32 _UniqueID_k__BackingField; // 0x1C
		::System::Boolean _IsNew_k__BackingField; // 0x20
		::System::UInt32 CardID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 cardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA__CTOR_1_OFFSET))(this, cardID);
		}

		static ::RPG::Client::TrainParty::TrainPartyCardData* CreateTempCardData(::System::UInt32 cardID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CREATETEMPCARDDATA_OFFSET))(cardID);
		}

		static ::RPG::Client::TrainParty::TrainPartyCardData* CreateCardData(::Class_1_4BC858D7C27E10ED_60* serverInfo)
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardData*(*)(::Class_1_4BC858D7C27E10ED_60*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CREATECARDDATA_OFFSET))(serverInfo);
		}

		::System::Void Sync(::Class_1_4BC858D7C27E10ED_60* serverInfo, ::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_60*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SYNC_OFFSET))(this, serverInfo, isNew);
		}

		::System::Void SetCardID(::System::UInt32 cardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SETCARDID_OFFSET))(this, cardID);
		}

		::Il2CppArray<::RPG::GameCore::TrainPartyActionConfigBase*>* GetEffectConfigList()
		{
			return ((::Il2CppArray<::RPG::GameCore::TrainPartyActionConfigBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GETEFFECTCONFIGLIST_OFFSET))(this);
		}

		::System::Void ClearNewStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_CLEARNEWSTATUS_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::TrainParty::TrainPartyCardData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_COMPARETO_OFFSET))(this, other);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SET_UNIQUEID_OFFSET))(this, value);
		}

		::System::UInt32 get_StepNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_STEPNUM_OFFSET))(this);
		}

		::System::Void set_StepNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SET_STEPNUM_OFFSET))(this, value);
		}

		::RPG::GameCore::TrainPartyCardConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TrainPartyCardConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYCARDDATA_SET_ISNEW_OFFSET))(this, value);
		}
	};
}
