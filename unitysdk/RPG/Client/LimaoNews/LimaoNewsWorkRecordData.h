#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsWorkRecordType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD3EDFE0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_GET_RECORDID_OFFSET UNITYSDK_OFFSET(0xD3EE0C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_GET_RECORDPARAM_OFFSET UNITYSDK_OFFSET(0xD3EE100)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_GET_RECORDTITLE_OFFSET UNITYSDK_OFFSET(0xD3EE120)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_GET_RECORDTYPE_OFFSET UNITYSDK_OFFSET(0xD3EE0E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_GET_SHOWCONDITION_OFFSET UNITYSDK_OFFSET(0xD3EE140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_SET_RECORDID_OFFSET UNITYSDK_OFFSET(0xD3EE0D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_SET_RECORDPARAM_OFFSET UNITYSDK_OFFSET(0xD3EE110)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_SET_RECORDTITLE_OFFSET UNITYSDK_OFFSET(0xD3EE130)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_SET_RECORDTYPE_OFFSET UNITYSDK_OFFSET(0xD3EE0F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_SET_SHOWCONDITION_OFFSET UNITYSDK_OFFSET(0xD3EE150)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3EE0B0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkRecordData_TypeDefinitionIndex = 80307;

	class LimaoNewsWorkRecordData : public ::System::Object
	{
	public:
		::RPG::Client::TextID _RecordTitle_k__BackingField; // 0x10
		::System::UInt32 _RecordParam_k__BackingField; // 0x20
		::System::UInt32 _RecordID_k__BackingField; // 0x24
		::System::UInt32 _ShowCondition_k__BackingField; // 0x28
		::RPG::GameCore::LimaoNewsWorkRecordType _RecordType_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWorkRecordData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkRecordData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_RecordID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_GET_RECORDID_OFFSET))(this);
		}

		::System::Void set_RecordID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_SET_RECORDID_OFFSET))(this, a1);
		}

		::RPG::GameCore::LimaoNewsWorkRecordType get_RecordType()
		{
			return ((::RPG::GameCore::LimaoNewsWorkRecordType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_GET_RECORDTYPE_OFFSET))(this);
		}

		::System::Void set_RecordType(::RPG::GameCore::LimaoNewsWorkRecordType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsWorkRecordType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_SET_RECORDTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_RecordParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_GET_RECORDPARAM_OFFSET))(this);
		}

		::System::Void set_RecordParam(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_SET_RECORDPARAM_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_RecordTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_GET_RECORDTITLE_OFFSET))(this);
		}

		::System::Void set_RecordTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_SET_RECORDTITLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShowCondition()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_GET_SHOWCONDITION_OFFSET))(this);
		}

		::System::Void set_ShowCondition(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRECORDDATA_SET_SHOWCONDITION_OFFSET))(this, a1);
		}
	};
}
