#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6F289C13530086A8_1;
namespace RPG::Client { class GridFightSettleRecord; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA442B40)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA442A70)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_ARCHIVEID_OFFSET UNITYSDK_OFFSET(0xA442BB0)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_ARCHIVETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA442BD0)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_ISCURSEASON_OFFSET UNITYSDK_OFFSET(0xA442DE0)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_ISCURVERSION_OFFSET UNITYSDK_OFFSET(0xA442D50)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xA442C10)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_SETTLERECORD_OFFSET UNITYSDK_OFFSET(0xA442BF0)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_VERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0xA442C30)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_VERSIONSTR_OFFSET UNITYSDK_OFFSET(0xA442C50)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_SET_ARCHIVEID_OFFSET UNITYSDK_OFFSET(0xA442BC0)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_SET_ARCHIVETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA442BE0)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_SET_SEASONUID_OFFSET UNITYSDK_OFFSET(0xA442C20)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_SET_SETTLERECORD_OFFSET UNITYSDK_OFFSET(0xA442C00)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA_SET_VERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0xA442C40)
#define RPG_CLIENT_GRIDFIGHTARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA442B30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightArchiveData_TypeDefinitionIndex = 59217;

	class GridFightArchiveData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightSettleRecord* _SettleRecord_k__BackingField; // 0x10
		::System::UInt32 _ArchiveID_k__BackingField; // 0x18
		::System::UInt32 _VersionNumber_k__BackingField; // 0x1C
		::System::UInt64 _ArchiveTimeStamp_k__BackingField; // 0x20
		::System::UInt32 _SeasonUID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightArchiveData* Create(::Class_1_6F289C13530086A8_1* archiveInfo)
		{
			return ((::RPG::Client::GridFightArchiveData*(*)(::Class_1_6F289C13530086A8_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_CREATE_OFFSET))(archiveInfo);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightArchiveData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightArchiveData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_COMPARETO_OFFSET))(this, other);
		}

		::System::UInt32 get_ArchiveID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_ARCHIVEID_OFFSET))(this);
		}

		::System::Void set_ArchiveID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_SET_ARCHIVEID_OFFSET))(this, value);
		}

		::System::UInt64 get_ArchiveTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_ARCHIVETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_ArchiveTimeStamp(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_SET_ARCHIVETIMESTAMP_OFFSET))(this, value);
		}

		::RPG::Client::GridFightSettleRecord* get_SettleRecord()
		{
			return ((::RPG::Client::GridFightSettleRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_SETTLERECORD_OFFSET))(this);
		}

		::System::Void set_SettleRecord(::RPG::Client::GridFightSettleRecord* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSettleRecord*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_SET_SETTLERECORD_OFFSET))(this, value);
		}

		::System::UInt32 get_SeasonUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_SEASONUID_OFFSET))(this);
		}

		::System::Void set_SeasonUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_SET_SEASONUID_OFFSET))(this, value);
		}

		::System::UInt32 get_VersionNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_VERSIONNUMBER_OFFSET))(this);
		}

		::System::Void set_VersionNumber(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_SET_VERSIONNUMBER_OFFSET))(this, value);
		}

		::System::String* get_VersionStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_VERSIONSTR_OFFSET))(this);
		}

		::System::Boolean get_IsCurVersion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_ISCURVERSION_OFFSET))(this);
		}

		::System::Boolean get_IsCurSeason()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTARCHIVEDATA_GET_ISCURSEASON_OFFSET))(this);
		}
	};
}
