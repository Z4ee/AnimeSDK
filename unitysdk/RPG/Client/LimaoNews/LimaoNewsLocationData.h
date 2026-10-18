#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_FB89C8AC7AFEDB7F_3;

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xD3BB900)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD3BB8A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0xD3BB9A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA_GET_LOCATIONNAME_OFFSET UNITYSDK_OFFSET(0xD3BB9C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA_SET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0xD3BB9B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA_SET_LOCATIONNAME_OFFSET UNITYSDK_OFFSET(0xD3BB9D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3BB990)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsLocationData_TypeDefinitionIndex = 80288;

	class LimaoNewsLocationData : public ::System::Object
	{
	public:
		::RPG::Client::TextID _LocationName_k__BackingField; // 0x10
		::System::UInt32 _LocationID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsLocationData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsLocationData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsLocationData* Create_1(::Class_1_FB89C8AC7AFEDB7F_3* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsLocationData*(*)(::Class_1_FB89C8AC7AFEDB7F_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA_CREATE_1_OFFSET))(a1);
		}

		::System::UInt32 get_LocationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA_GET_LOCATIONID_OFFSET))(this);
		}

		::System::Void set_LocationID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA_SET_LOCATIONID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_LocationName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA_GET_LOCATIONNAME_OFFSET))(this);
		}

		::System::Void set_LocationName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSLOCATIONDATA_SET_LOCATIONNAME_OFFSET))(this, a1);
		}
	};
}
