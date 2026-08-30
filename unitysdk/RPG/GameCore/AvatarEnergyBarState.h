#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARENERGYBARSTATE_COPYDATAFROM_OFFSET UNITYSDK_OFFSET(0xE515C40)
#define RPG_GAMECORE_AVATARENERGYBARSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xE516EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnergyBarState_TypeDefinitionIndex = 57054;

	class AvatarEnergyBarState : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::RPG::GameCore::GameEntity* OwnerEntity; // 0x18
		::Il2CppArray<::System::String*>* EnergyDotPrefabPaths; // 0x20
		::System::String* IconPath; // 0x28
		::System::Boolean IsActive; // 0x30
		::System::Boolean ShowEnhancedTextColor; // 0x31
		::System::Int32 CounterType; // 0x34
		::System::Int32 CurrCount; // 0x38
		::RPG::GameCore::EnergyBarState CurrentStatus; // 0x3C
		::System::Int32 ActiveCount; // 0x40
		::System::Int32 CoolDown; // 0x44
		::System::Int32 MaxCount; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENERGYBARSTATE__CTOR_OFFSET))(this);
		}

		::System::Void CopyDataFrom(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENERGYBARSTATE_COPYDATAFROM_OFFSET))(this, a1);
		}
	};
}
