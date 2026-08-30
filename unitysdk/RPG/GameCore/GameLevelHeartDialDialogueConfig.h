#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameLevelHeartDialPerformance; }
namespace RPG::GameCore { class LevelDialogInfo; }
namespace System { class String; }

#define RPG_GAMECORE_GAMELEVELHEARTDIALDIALOGUECONFIG_METHOD_2_FA865E2343559C67_OFFSET UNITYSDK_OFFSET(0x1D13CFC0)
#define RPG_GAMECORE_GAMELEVELHEARTDIALDIALOGUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D13D310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameLevelHeartDialDialogueConfig_TypeDefinitionIndex = 17223;

	class GameLevelHeartDialDialogueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DialogueID; // 0x10
		::System::String* ConfigEntityPath; // 0x18
		::System::UInt32 FreeStyleID; // 0x20
		::RPG::GameCore::GameLevelHeartDialPerformance* StartPerformance; // 0x28
		::RPG::GameCore::GameLevelHeartDialPerformance* StartPerformanceOnFinish; // 0x30
		::RPG::GameCore::LevelDialogInfo* Dialog; // 0x38
		::System::UInt32 CustomGroupID; // 0x40
		::System::UInt32 CameraIndex; // 0x44
		::System::String* BlendShapeConfigName; // 0x48
		::System::Boolean IsOverrideFreeStyleAndBlendShape; // 0x50
		::System::Boolean IsShowToastAfterPerformance; // 0x51

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALDIALOGUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FA865E2343559C67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameLevelHeartDialDialogueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameLevelHeartDialDialogueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALDIALOGUECONFIG_METHOD_2_FA865E2343559C67_OFFSET))(a1, a2);
		}
	};
}
