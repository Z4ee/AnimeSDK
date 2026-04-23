#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloorType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEFLOORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AD0AD0)
#define RPG_GAMECORE_MAZEFLOORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD1520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeFloorRow_TypeDefinitionIndex = 13301;

	class MazeFloorRow : public ::System::Object
	{
	public:
		::System::String* CombatBGMHigh; // 0x10
		::System::String* MunicipalConfigPath; // 0x18
		::System::String* FloorBGMNormalStateName; // 0x20
		::System::String* FloorBGMBusyStateName; // 0x28
		::System::String* BGMWorldState; // 0x30
		::System::String* FloorName; // 0x38
		::System::String* FloorBGMGroupName; // 0x40
		::Il2CppArray<::System::String*>* EnterAudioEvent; // 0x48
		::Il2CppArray<::System::String*>* ExitAudioEvent; // 0x50
		::System::String* FloorDefaultEmotion; // 0x58
		::Il2CppArray<::RPG::Client::TextID>* MapLayerNameList; // 0x60
		::System::String* CombatBGMLow; // 0x68
		::System::String* OptionalLoadBlocksConfig; // 0x70
		::Il2CppArray<::System::String*>* FloorTag; // 0x78
		::System::Single WalkingEffectAdditiveScale; // 0x80
		::RPG::GameCore::FloorType FloorType; // 0x84
		::System::UInt32 FloorID; // 0x88
		::System::UInt32 BaseFloorID; // 0x8C

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
