#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CUTSCENECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5EAB80)
#define RPG_GAMECORE_CUTSCENECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EAFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CutSceneConfigRow_TypeDefinitionIndex = 13101;

	class CutSceneConfigRow : public ::System::Object
	{
	public:
		::System::String* CutSceneBGMStateName; // 0x10
		::System::String* CutSceneName; // 0x18
		::Il2CppArray<::System::String*>* HideBlockList; // 0x20
		::System::String* CutScenePath; // 0x28
		::Il2CppArray<::System::Single>* PosOffSet; // 0x30
		::System::String* CaptionPath; // 0x38
		::System::String* CutSceneSFXJsonPath; // 0x40
		::System::UInt32 MazePlaneID; // 0x48
		::System::UInt32 SFXID; // 0x4C
		::System::Boolean IsPlayerInvolved; // 0x50
		::System::UInt32 VoiceID; // 0x54
		::System::UInt32 MazeFloorID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CutSceneConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CutSceneConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
