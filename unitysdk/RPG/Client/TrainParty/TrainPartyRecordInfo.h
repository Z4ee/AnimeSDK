#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TrainPartyGameRecordType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TrainPartyLogConfigRow; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_GET_LOGCONTENT_OFFSET UNITYSDK_OFFSET(0xCABC900)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xCABC850)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_GET_RECORDTYPE_OFFSET UNITYSDK_OFFSET(0xCABC8B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_GET_REPLACEPARAMS_OFFSET UNITYSDK_OFFSET(0xCABC920)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_RECORD_OFFSET UNITYSDK_OFFSET(0xCABC6F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_SET_LOGCONTENT_OFFSET UNITYSDK_OFFSET(0xCABC910)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_SET_REPLACEPARAMS_OFFSET UNITYSDK_OFFSET(0xCABC930)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO__COMPARETO_OFFSET UNITYSDK_OFFSET(0xCABC7A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCABC6E0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyRecordInfo_TypeDefinitionIndex = 69439;

	class TrainPartyRecordInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::TrainPartyLogConfigRow* _Row; // 0x10
		::Il2CppArray<::System::Object*>* _ReplaceParams_k__BackingField; // 0x18
		::System::UInt32 _Priority; // 0x20
		::RPG::Client::TextID _LogContent_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Record(::RPG::GameCore::TrainPartyGameRecordType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyGameRecordType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_RECORD_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_IComparable_RPG_Client_TrainParty_TrainPartyRecordInfo__CompareTo(::RPG::Client::TrainParty::TrainPartyRecordInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO__COMPARETO_OFFSET))(this, a1);
		}

		::RPG::GameCore::TrainPartyGameRecordType get_RecordType()
		{
			return ((::RPG::GameCore::TrainPartyGameRecordType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_GET_RECORDTYPE_OFFSET))(this);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_GET_PRIORITY_OFFSET))(this);
		}

		::RPG::Client::TextID get_LogContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_GET_LOGCONTENT_OFFSET))(this);
		}

		::System::Void set_LogContent(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_SET_LOGCONTENT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* get_ReplaceParams()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_GET_REPLACEPARAMS_OFFSET))(this);
		}

		::System::Void set_ReplaceParams(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYRECORDINFO_SET_REPLACEPARAMS_OFFSET))(this, a1);
		}
	};
}
