#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GunPlayModeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ADA1C0)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADAB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleWolfGunPlayLevelRow_TypeDefinitionIndex = 13340;

	class MazePuzzleWolfGunPlayLevelRow : public ::System::Object
	{
	public:
		::System::String* TriggerCustomString; // 0x10
		::Il2CppArray<::System::UInt32>* QuestList; // 0x18
		::System::UInt32 UnlockCondition; // 0x20
		::System::Boolean ShowInUI; // 0x24
		::System::UInt32 GunLevel; // 0x28
		::System::UInt32 TargetScore; // 0x2C
		::RPG::Client::TextID Title; // 0x30
		::RPG::Client::TextID Description; // 0x40
		::System::UInt32 UnlockConditionMode; // 0x50
		::RPG::GameCore::GunPlayModeType GunMode; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
