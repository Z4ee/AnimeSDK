#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8679A895216DFB85_2;
namespace RPG::Client { class MonopolyOptionalEventDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9D75880)
#define RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D75AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyOptionalGroupEventDisplayData_TypeDefinitionIndex = 53897;

	class MonopolyOptionalGroupEventDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyOptionalEventDisplayData*>* OptionalEventList; // 0x10
		::System::UInt32 CurEventIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyOptionalGroupEventDisplayData* Create(::System::UInt32 curEventIndex, ::System::Collections::Generic::List_1<::Class_1_8679A895216DFB85_2*>* optionEventList)
		{
			return ((::RPG::Client::MonopolyOptionalGroupEventDisplayData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_8679A895216DFB85_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA_CREATE_OFFSET))(curEventIndex, optionEventList);
		}
	};
}
