#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATAVATARLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18607280)
#define RPG_GAMECORE_ACTIVITYDICECOMBATAVATARLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18607620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatAvatarLevelRow_TypeDefinitionIndex = 10769;

	class ActivityDiceCombatAvatarLevelRow : public ::System::Object
	{
	public:
		::System::String* Dice3FramePath; // 0x10
		::System::String* Dice1FramePath; // 0x18
		::System::String* Dice2FramePath; // 0x20
		::System::String* Dice3FramePathUI3D; // 0x28
		::System::String* SideUI3DMatPath; // 0x30
		::System::String* FrontAndBackUI3DMatPath; // 0x38
		::System::String* Dice2FramePathUI3D; // 0x40
		::System::String* Dice4FramePathUI3D; // 0x48
		::System::String* Dice4FramePath; // 0x50
		::System::String* Dice1FramePathUI3D; // 0x58
		::System::UInt32 ID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATAVATARLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceCombatAvatarLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATAVATARLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
