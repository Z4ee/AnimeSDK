#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_1.h"
#include "unitysdk/System/Object.h"

class Class_1_48ABDB052C195CD2;

#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA45A2E0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPID_OFFSET UNITYSDK_OFFSET(0xA45A3B0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPTYPE_OFFSET UNITYSDK_OFFSET(0xA45A390)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_NUM_OFFSET UNITYSDK_OFFSET(0xA45A3D0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPID_OFFSET UNITYSDK_OFFSET(0xA45A3C0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPTYPE_OFFSET UNITYSDK_OFFSET(0xA45A3A0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_NUM_OFFSET UNITYSDK_OFFSET(0xA45A3E0)
#define RPG_CLIENT_GRIDFIGHTBONUSDROPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA45A380)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusDropData_TypeDefinitionIndex = 59276;

	class GridFightBonusDropData : public ::System::Object
	{
	public:
		::Enum_3_F80BFD5B986D5503_1 _DropType_k__BackingField; // 0x10
		::System::UInt32 _Num_k__BackingField; // 0x14
		::System::UInt32 _DropId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightBonusDropData* Create(::Class_1_48ABDB052C195CD2* dropInfo)
		{
			return ((::RPG::Client::GridFightBonusDropData*(*)(::Class_1_48ABDB052C195CD2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_CREATE_OFFSET))(dropInfo);
		}

		::Enum_3_F80BFD5B986D5503_1 get_DropType()
		{
			return ((::Enum_3_F80BFD5B986D5503_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPTYPE_OFFSET))(this);
		}

		::System::Void set_DropType(::Enum_3_F80BFD5B986D5503_1 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_DropId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_DROPID_OFFSET))(this);
		}

		::System::Void set_DropId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_DROPID_OFFSET))(this, value);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_GET_NUM_OFFSET))(this);
		}

		::System::Void set_Num(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSDROPDATA_SET_NUM_OFFSET))(this, value);
		}
	};
}
