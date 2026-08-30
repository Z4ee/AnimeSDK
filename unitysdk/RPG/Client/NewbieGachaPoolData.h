#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGachaPoolData.h"

namespace System { class String; }

#define RPG_CLIENT_NEWBIEGACHAPOOLDATA_HAVETIMELIMIT_OFFSET UNITYSDK_OFFSET(0xD9CFD10)
#define RPG_CLIENT_NEWBIEGACHAPOOLDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0xD9CFCC0)
#define RPG_CLIENT_NEWBIEGACHAPOOLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD9CFB40)

namespace RPG::Client
{
	inline static constexpr unsigned int NewbieGachaPoolData_TypeDefinitionIndex = 64373;

	class NewbieGachaPoolData : public ::RPG::Client::BaseGachaPoolData
	{
	public:
		// static const ::System::String* _TOTAL_GACHCA_TIME_INDEX; // 0x0
		// static const ::System::String* _DISCOUNT_NUM_INDEX; // 0x0
		::System::UInt32 DoGachaTime; // 0x90
		::System::UInt32 TotalGachaTime; // 0x94

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIEGACHAPOOLDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIEGACHAPOOLDATA_ISVALID_OFFSET))(this);
		}

		::System::Boolean HaveTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NEWBIEGACHAPOOLDATA_HAVETIMELIMIT_OFFSET))(this);
		}
	};
}
