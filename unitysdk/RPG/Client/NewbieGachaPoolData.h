#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaPoolData.h"

namespace System { class String; }

#define RPG_CLIENT_NEWBIEGACHAPOOLDATA_HAVETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x9E87850)
#define RPG_CLIENT_NEWBIEGACHAPOOLDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x9E87800)
#define RPG_CLIENT_NEWBIEGACHAPOOLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E87680)
#define RPG_CLIENT_NEWBIEGACHAPOOLDATA___IFIXBASEPROXY_HAVETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x9E87900)
#define RPG_CLIENT_NEWBIEGACHAPOOLDATA___IFIXBASEPROXY_ISVALID_OFFSET UNITYSDK_OFFSET(0x9E87890)

namespace RPG::Client
{
	inline static constexpr unsigned int NewbieGachaPoolData_TypeDefinitionIndex = 52220;

	class NewbieGachaPoolData : public ::RPG::Client::BaseGachaPoolData
	{
	public:
		// static const ::System::String* _TOTAL_GACHCA_TIME_INDEX; // 0x0
		// static const ::System::String* _DISCOUNT_NUM_INDEX; // 0x0
		::System::UInt32 DoGachaTime; // 0x80
		::System::UInt32 TotalGachaTime; // 0x84

		::System::Void _ctor(::System::UInt32 gachaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIEGACHAPOOLDATA__CTOR_OFFSET))(this, gachaID);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIEGACHAPOOLDATA_ISVALID_OFFSET))(this);
		}

		::System::Boolean HaveTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIEGACHAPOOLDATA_HAVETIMELIMIT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIEGACHAPOOLDATA___IFIXBASEPROXY_ISVALID_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_HaveTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIEGACHAPOOLDATA___IFIXBASEPROXY_HAVETIMELIMIT_OFFSET))(this);
		}
	};
}
