#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_EQUIPMENTPROPERTYUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB92E3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int EquipmentPropertyUIData_TypeDefinitionIndex = 61414;

	class EquipmentPropertyUIData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* BaseNum; // 0x18
		::RPG::Client::TextID NameID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTPROPERTYUIDATA__CTOR_OFFSET))(this);
		}
	};
}
