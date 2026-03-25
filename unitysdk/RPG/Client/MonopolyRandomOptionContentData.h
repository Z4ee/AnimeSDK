#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYRANDOMOPTIONCONTENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D77070)
#define RPG_CLIENT_MONOPOLYRANDOMOPTIONCONTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D77110)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyRandomOptionContentData_TypeDefinitionIndex = 53900;

	class MonopolyRandomOptionContentData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RollResultList; // 0x10
		::System::UInt32 RandomOptionID; // 0x18
		::System::UInt32 ExtraRollResult; // 0x1C
		::System::UInt32 SelectOptionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYRANDOMOPTIONCONTENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyRandomOptionContentData* Create(::System::UInt32 selectOptionID, ::System::Collections::Generic::List_1<::System::UInt32>* rollResultList, ::System::UInt32 extraRollResult, ::System::UInt32 randomOptionID)
		{
			return ((::RPG::Client::MonopolyRandomOptionContentData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYRANDOMOPTIONCONTENTDATA_CREATE_OFFSET))(selectOptionID, rollResultList, extraRollResult, randomOptionID);
		}
	};
}
