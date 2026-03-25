#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloorType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEFLOORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173C2710)
#define RPG_GAMECORE_MAZEFLOORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173C3160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeFloorRow_TypeDefinitionIndex = 12837;

	class MazeFloorRow : public ::System::Object
	{
	public:
		::System::String* MunicipalConfigPath; // 0x10
		::System::String* FloorBGMGroupName; // 0x18
		::System::String* FloorBGMNormalStateName; // 0x20
		::Il2CppArray<::System::String*>* EnterAudioEvent; // 0x28
		::System::String* FloorBGMBusyStateName; // 0x30
		::Il2CppArray<::System::String*>* ExitAudioEvent; // 0x38
		::System::String* BGMWorldState; // 0x40
		::System::String* CombatBGMHigh; // 0x48
		::System::String* CombatBGMLow; // 0x50
		::Il2CppArray<::System::String*>* FloorTag; // 0x58
		::System::String* FloorDefaultEmotion; // 0x60
		::System::String* OptionalLoadBlocksConfig; // 0x68
		::Il2CppArray<::RPG::Client::TextID>* MapLayerNameList; // 0x70
		::System::String* FloorName; // 0x78
		::System::UInt32 FloorID; // 0x80
		::System::UInt32 BaseFloorID; // 0x84
		::System::Single WalkingEffectAdditiveScale; // 0x88
		::RPG::GameCore::FloorType FloorType; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazeFloorRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeFloorRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
