#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTEVENTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE8770)

namespace RPG::Client::LittleGame::ElfRestaurant
{
	inline static constexpr unsigned int ElfRestaurantEventParams_TypeDefinitionIndex = 71781;

	class ElfRestaurantEventParams : public ::System::Object
	{
	public:
		::System::String* EventTip; // 0x10
		::System::String* ParamStr; // 0x18
		::System::String* EventIconPath; // 0x20
		::System::Boolean FollowEntity; // 0x28
		::RPG::GameCore::RestaurantNormalEventType Type; // 0x2C
		::System::Single Duration; // 0x30
		::UnityEngine::Vector3 EventWorldPos; // 0x34
		::System::Int32 EventEntityRuntimeID; // 0x40
		::System::Int32 ParamInt; // 0x44

		::System::Void _ctor(::RPG::GameCore::RestaurantNormalEventType a1, ::UnityEngine::Vector3 a2, ::System::String* a3, ::System::String* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantNormalEventType, ::UnityEngine::Vector3, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ELFRESTAURANT_ELFRESTAURANTEVENTPARAMS__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
