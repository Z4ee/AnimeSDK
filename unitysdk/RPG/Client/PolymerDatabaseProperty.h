#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PolymerDatabasePropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_POLYMERDATABASEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xAD6F050)

namespace RPG::Client
{
	inline static constexpr unsigned int PolymerDatabaseProperty_TypeDefinitionIndex = 64805;

	class PolymerDatabaseProperty : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 slotID; // 0x18
		::RPG::Client::PolymerDatabasePropertyType type; // 0x1C
		::System::Int32 uniqueID; // 0x20

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMERDATABASEPROPERTY__CTOR_OFFSET))(this, a1);
		}
	};
}
