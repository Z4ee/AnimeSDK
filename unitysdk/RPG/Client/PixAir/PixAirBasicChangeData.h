#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirBasicInfo; }

#define RPG_CLIENT_PIXAIR_PIXAIRBASICCHANGEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC3B2AE0)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICCHANGEDATA_GET_CHANGEDCURRENTAMOUNT_OFFSET UNITYSDK_OFFSET(0xC3B2F50)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICCHANGEDATA_GET_CHANGEDFIXAMOUNT_OFFSET UNITYSDK_OFFSET(0xC3B2FB0)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICCHANGEDATA_GET_CHANGEDMAXHP_OFFSET UNITYSDK_OFFSET(0xC3B2EF0)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICCHANGEDATA_ISBASICINFOCHANGED_OFFSET UNITYSDK_OFFSET(0xC3B2D60)
#define RPG_CLIENT_PIXAIR_PIXAIRBASICCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC3B2C40)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBasicChangeData_TypeDefinitionIndex = 73635;

	class PixAirBasicChangeData : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirBasicInfo* OldBasicInfo; // 0x10
		::RPG::Client::PixAir::PixAirBasicInfo* NewBasicInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICCHANGEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirBasicChangeData* Create()
		{
			return ((::RPG::Client::PixAir::PixAirBasicChangeData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICCHANGEDATA_CREATE_OFFSET))();
		}

		::System::Boolean IsBasicInfoChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICCHANGEDATA_ISBASICINFOCHANGED_OFFSET))(this);
		}

		::System::Int32 get_ChangedMaxHp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICCHANGEDATA_GET_CHANGEDMAXHP_OFFSET))(this);
		}

		::System::UInt32 get_ChangedCurrentAmount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICCHANGEDATA_GET_CHANGEDCURRENTAMOUNT_OFFSET))(this);
		}

		::System::Int32 get_ChangedFixAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBASICCHANGEDATA_GET_CHANGEDFIXAMOUNT_OFFSET))(this);
		}
	};
}
