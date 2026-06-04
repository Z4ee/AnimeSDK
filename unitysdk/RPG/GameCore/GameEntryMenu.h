#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GAMEENTRYMENU_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197B48A0)
#define RPG_GAMECORE_GAMEENTRYMENU__CTOR_OFFSET UNITYSDK_OFFSET(0x197C89D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntryMenu_TypeDefinitionIndex = 15636;

	class GameEntryMenu : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MapID; // 0x10
		::System::UInt32 ButtonIndex; // 0x14
		::System::UInt32 PlaneID; // 0x18
		::System::UInt32 FloorID; // 0x1C
		::RPG::GameCore::PlaneType PlaneType; // 0x20
		::Il2CppArray<::System::UInt32>* CharacterIDList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTRYMENU__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameEntryMenu*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameEntryMenu*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTRYMENU_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
