#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYRANDOMOPTIONCONTENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD8AD270)
#define RPG_CLIENT_MONOPOLYRANDOMOPTIONCONTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD8AD310)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyRandomOptionContentData_TypeDefinitionIndex = 66328;

	class MonopolyRandomOptionContentData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RollResultList; // 0x10
		::System::UInt32 ExtraRollResult; // 0x18
		::System::UInt32 SelectOptionID; // 0x1C
		::System::UInt32 RandomOptionID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYRANDOMOPTIONCONTENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyRandomOptionContentData* Create(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::MonopolyRandomOptionContentData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYRANDOMOPTIONCONTENTDATA_CREATE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
