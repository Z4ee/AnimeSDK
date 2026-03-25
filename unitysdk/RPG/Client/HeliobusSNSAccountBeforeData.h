#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_HELIOBUSSNSACCOUNTBEFOREDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x992AEE0)
#define RPG_CLIENT_HELIOBUSSNSACCOUNTBEFOREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x992AF60)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusSNSAccountBeforeData_TypeDefinitionIndex = 53337;

	class HeliobusSNSAccountBeforeData : public ::System::Object
	{
	public:
		::System::UInt32 Comments; // 0x10
		::System::UInt32 Incomes; // 0x14
		::System::Boolean IsAllFinish; // 0x18
		::System::UInt32 Fans; // 0x1C
		::System::UInt32 ActionDay; // 0x20
		::System::UInt32 PopPhase; // 0x24
		::System::UInt32 Likes; // 0x28
		::System::UInt32 Posts; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSACCOUNTBEFOREDATA__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::HeliobusSNSAccountBeforeData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeliobusSNSAccountBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSACCOUNTBEFOREDATA_COPYTO_OFFSET))(this, data);
		}
	};
}
