#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GunPlayModeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D282DA0)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2836E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleWolfGunPlayLevelRow_TypeDefinitionIndex = 13978;

	class MazePuzzleWolfGunPlayLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::String* TriggerCustomString; // 0x18
		::System::UInt32 GunLevel; // 0x20
		::System::UInt32 TargetScore; // 0x24
		::RPG::Client::TextID Description; // 0x28
		::RPG::GameCore::GunPlayModeType GunMode; // 0x38
		::System::Boolean ShowInUI; // 0x3C
		::RPG::Client::TextID Title; // 0x40
		::System::UInt32 UnlockCondition; // 0x50
		::System::UInt32 UnlockConditionMode; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
