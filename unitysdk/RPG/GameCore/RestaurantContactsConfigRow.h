#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTCONTACTSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3A93B0)
#define RPG_GAMECORE_RESTAURANTCONTACTSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A9550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantContactsConfigRow_TypeDefinitionIndex = 11374;

	class RestaurantContactsConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ContactsID; // 0x18
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTCONTACTSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantContactsConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantContactsConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTCONTACTSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
