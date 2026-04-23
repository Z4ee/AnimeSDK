#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarOutfit_PlayerOutfitSlotTypeFlags.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__GETENUMERATOR_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DAF670)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__GETENUMERATOR_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_PLAYEROUTFITSLOTTYPE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9DAF720)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__GETENUMERATOR_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9DAF780)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__GETENUMERATOR_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9DAF730)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__GETENUMERATOR_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DAF660)
#define RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__GETENUMERATOR_D__2__CTOR_OFFSET UNITYSDK_OFFSET(0x9DAF0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfit_PlayerOutfitSlotTypeFlags__GetEnumerator_d__2_TypeDefinitionIndex = 57674;

	class AvatarOutfit_PlayerOutfitSlotTypeFlags__GetEnumerator_d__2 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::RPG::Client::AvatarOutfit_PlayerOutfitSlotTypeFlags __4__this; // 0x18
		::System::Int32 _i_5__2; // 0x28
		::RPG::GameCore::PlayerOutfitSlotType __2__current; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__GETENUMERATOR_D__2__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__GETENUMERATOR_D__2_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__GETENUMERATOR_D__2_MOVENEXT_OFFSET))(this);
		}

		::RPG::GameCore::PlayerOutfitSlotType System_Collections_Generic_IEnumerator_RPG_GameCore_PlayerOutfitSlotType__get_Current()
		{
			return ((::RPG::GameCore::PlayerOutfitSlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__GETENUMERATOR_D__2_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_PLAYEROUTFITSLOTTYPE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__GETENUMERATOR_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_PLAYEROUTFITSLOTTYPEFLAGS__GETENUMERATOR_D__2_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
