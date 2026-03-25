#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_326;

#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9FE5720)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_GET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0x9FE58C0)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9FE58E0)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_ISVALIDTOSHOW_OFFSET UNITYSDK_OFFSET(0x9FE57A0)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_SET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0x9FE58D0)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9FE58F0)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9FE5690)
#define RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE5790)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerGridFightRecordData_TypeDefinitionIndex = 52192;

	class PlayerGridFightRecordData : public ::System::Object
	{
	public:
		::System::UInt32 _DivisionID_k__BackingField; // 0x10
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_326* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_326*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_SYNC_OFFSET))(this, proto);
		}

		static ::RPG::Client::PlayerGridFightRecordData* Create()
		{
			return ((::RPG::Client::PlayerGridFightRecordData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_CREATE_OFFSET))();
		}

		::System::Boolean IsValidToShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_ISVALIDTOSHOW_OFFSET))(this);
		}

		::System::UInt32 get_DivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_GET_DIVISIONID_OFFSET))(this);
		}

		::System::Void set_DivisionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_SET_DIVISIONID_OFFSET))(this, value);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERGRIDFIGHTRECORDDATA_SET_DIVISIONLEVEL_OFFSET))(this, value);
		}
	};
}
