#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F0A446EC7AE7E87D_2;
namespace RPG::Client { class MonopolyOptionalEventDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAABBB00)
#define RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAABBD40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyOptionalGroupEventDisplayData_TypeDefinitionIndex = 61041;

	class MonopolyOptionalGroupEventDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyOptionalEventDisplayData*>* OptionalEventList; // 0x10
		::System::UInt32 CurEventIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyOptionalGroupEventDisplayData* Create(::System::UInt32 curEventIndex, ::System::Collections::Generic::List_1<::Class_1_F0A446EC7AE7E87D_2*>* optionEventList)
		{
			return ((::RPG::Client::MonopolyOptionalGroupEventDisplayData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_F0A446EC7AE7E87D_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALGROUPEVENTDISPLAYDATA_CREATE_OFFSET))(curEventIndex, optionEventList);
		}
	};
}
