#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkScriptType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkUnlockCost; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170BDEE0)
#define RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170BEA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkScriptConfigRow_TypeDefinitionIndex = 10442;

	class ClockParkScriptConfigRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* ScriptUnlockCondition; // 0x18
		::System::String* PrefabPath; // 0x20
		::RPG::GameCore::ClockParkUnlockCost* ScriptUnlockCost; // 0x28
		::System::String* ScriptBGM; // 0x30
		::System::String* ScriptResultLogoMaskPath; // 0x38
		::Il2CppArray<::System::UInt32>* TalentCanBeUsed; // 0x40
		::System::String* IconPath; // 0x48
		::System::String* ScriptPostPrefabPath; // 0x50
		::RPG::Client::TextID ScriptCharacteristic; // 0x58
		::System::UInt32 ScriptEndingUnlockChapterID; // 0x68
		::System::UInt32 ActivityModuleID; // 0x6C
		::RPG::Client::TextID ScriptTitle; // 0x70
		::RPG::Client::TextID ScriptGamePlayDesc; // 0x80
		::System::UInt32 ScriptGamePlayGuideGroupID; // 0x90
		::RPG::GameCore::ClockParkScriptType ScriptType; // 0x94
		::System::UInt32 StartChapterID; // 0x98
		::System::UInt32 ActivityStudioScriptID; // 0x9C
		::RPG::Client::TextID ScriptDesc; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkScriptConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkScriptConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
