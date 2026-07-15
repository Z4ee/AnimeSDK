#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4E17DBE66E488E00;
namespace RPG::Client { class MonopolyOptionalEventDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x195490E0)
#define RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19549390)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyOptionalGroupEventDisplayData_TypeDefinitionIndex = 63340;

	class MonopolyOptionalGroupEventDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyOptionalEventDisplayData*>* OptionalEventList; // 0x10
		::System::UInt32 CurEventIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyOptionalGroupEventDisplayData* Create(::System::UInt32 a1, ::System::Collections::Generic::List_1<::Class_1_4E17DBE66E488E00*>* a2)
		{
			return ((::RPG::Client::MonopolyOptionalGroupEventDisplayData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_4E17DBE66E488E00*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA_CREATE_OFFSET))(a1, a2);
		}
	};
}
