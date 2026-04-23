#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RecordPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PropertyRecord; }

#define RPG_CLIENT_POOLPROPERTYRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0xAD70290)

namespace RPG::Client
{
	inline static constexpr unsigned int PoolPropertyRecord_TypeDefinitionIndex = 66917;

	class PoolPropertyRecord : public ::System::Object
	{
	public:
		::System::Int32 Index; // 0x10
		::RPG::Client::RecordPropertyType PropertyType; // 0x14
		::RPG::Client::PropertyRecord* record; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POOLPROPERTYRECORD__CTOR_OFFSET))(this);
		}
	};
}
