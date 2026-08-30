#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTEVENTREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3AA660)
#define RPG_GAMECORE_RESTAURANTEVENTREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AA940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantEventRewardRow_TypeDefinitionIndex = 11314;

	class RestaurantEventRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* DynamicValues; // 0x10
		::System::String* BuffName; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::RestaurantSuperEventType SuperEventType; // 0x24
		::RPG::Client::TextID EventDsc; // 0x28
		::System::UInt32 RewardID; // 0x38
		::RPG::GameCore::RestaurantNormalEventType EventType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEVENTREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantEventRewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantEventRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEVENTREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
