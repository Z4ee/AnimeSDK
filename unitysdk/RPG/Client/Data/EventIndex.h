#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Data/NameID.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_DATA_EVENTINDEX_ISADD_OFFSET UNITYSDK_OFFSET(0x7CB40)
#define RPG_CLIENT_DATA_EVENTINDEX_ISMATCHED_OFFSET UNITYSDK_OFFSET(0x7CBE0)
#define RPG_CLIENT_DATA_EVENTINDEX_ISPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x7CAF0)
#define RPG_CLIENT_DATA_EVENTINDEX_ISREMOVE_OFFSET UNITYSDK_OFFSET(0x7CB90)
#define RPG_CLIENT_DATA_EVENTINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7CAD0)
#define RPG_CLIENT_DATA_EVENTINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x7CAE0)
#define RPG_CLIENT_DATA_EVENTINDEX___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7CC10)

namespace RPG::Client::Data
{
	inline static constexpr unsigned int EventIndex_TypeDefinitionIndex = 60186;

	struct alignas(4) EventIndex
	{
		::RPG::Client::Data::NameID PModelName; // 0x10
		::RPG::Client::Data::NameID ModelName; // 0x14
		::System::Int32 ModelID; // 0x18
		::System::Byte ActionType; // 0x1C
		::RPG::Client::Data::NameID PropertyName; // 0x20
		::System::Int32 Eid; // 0x24

		::System::Void _ctor(::RPG::Client::Data::NameID PModel, ::RPG::Client::Data::NameID model, ::RPG::Client::Data::NameID property, ::System::Int32 mid, ::System::Byte action)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Data::NameID, ::RPG::Client::Data::NameID, ::RPG::Client::Data::NameID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_EVENTINDEX__CTOR_OFFSET))(this, PModel, model, property, mid, action);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_EVENTINDEX_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsPropertyChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_EVENTINDEX_ISPROPERTYCHANGED_OFFSET))(this);
		}

		::System::Boolean IsAdd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_EVENTINDEX_ISADD_OFFSET))(this);
		}

		::System::Boolean IsRemove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_EVENTINDEX_ISREMOVE_OFFSET))(this);
		}

		::System::Boolean IsMatched(::RPG::Client::Data::EventIndex eventIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Data::EventIndex))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_EVENTINDEX_ISMATCHED_OFFSET))(this, eventIndex);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATA_EVENTINDEX___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
