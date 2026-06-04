#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloorType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEFLOORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19900900)
#define RPG_GAMECORE_MAZEFLOORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19901350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeFloorRow_TypeDefinitionIndex = 13376;

	class MazeFloorRow : public ::System::Object
	{
	public:
		::System::String* FloorBGMNormalStateName; // 0x10
		::Il2CppArray<::System::String*>* ExitAudioEvent; // 0x18
		::System::String* FloorBGMGroupName; // 0x20
		::System::String* OptionalLoadBlocksConfig; // 0x28
		::System::String* FloorDefaultEmotion; // 0x30
		::Il2CppArray<::System::String*>* EnterAudioEvent; // 0x38
		::System::String* CombatBGMHigh; // 0x40
		::System::String* FloorBGMBusyStateName; // 0x48
		::System::String* FloorName; // 0x50
		::System::String* CombatBGMLow; // 0x58
		::System::String* BGMWorldState; // 0x60
		::Il2CppArray<::RPG::Client::TextID>* MapLayerNameList; // 0x68
		::Il2CppArray<::System::String*>* FloorTag; // 0x70
		::System::String* MunicipalConfigPath; // 0x78
		::System::UInt32 BaseFloorID; // 0x80
		::System::Single WalkingEffectAdditiveScale; // 0x84
		::RPG::GameCore::FloorType FloorType; // 0x88
		::System::UInt32 FloorID; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeFloorRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeFloorRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
