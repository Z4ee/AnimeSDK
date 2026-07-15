#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SCRIPTSINFOJSON_METHOD_2_94AB2AD039EBA52B_OFFSET UNITYSDK_OFFSET(0x1C2C9870)
#define RPG_GAMECORE_SCRIPTSINFOJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C9C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScriptsInfoJson_TypeDefinitionIndex = 18315;

	class ScriptsInfoJson : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* DailyTest; // 0x10
		::Il2CppArray<::System::String*>* SmokeTest; // 0x18
		::Il2CppArray<::System::String*>* BattleServerTest; // 0x20
		::Il2CppArray<::System::String*>* DebugTest; // 0x28
		::Il2CppArray<::System::String*>* TutorialTest; // 0x30
		::Il2CppArray<::System::String*>* V1toV2CP1Test; // 0x38
		::Il2CppArray<::System::String*>* AutoStageTest; // 0x40
		::Il2CppArray<::System::String*>* ChapterTest; // 0x48
		::Il2CppArray<::System::String*>* FullTest; // 0x50
		::Il2CppArray<::System::String*>* ProtoSetTeamTest; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRIPTSINFOJSON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_94AB2AD039EBA52B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ScriptsInfoJson*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScriptsInfoJson*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCRIPTSINFOJSON_METHOD_2_94AB2AD039EBA52B_OFFSET))(a1, a2);
		}
	};
}
