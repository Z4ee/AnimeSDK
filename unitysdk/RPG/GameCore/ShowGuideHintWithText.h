#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialGuideDirectionType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideHintType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideTextType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TutorialGuideShowConfig; }
namespace RPG::GameCore { class TutorialGuideUIContextConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWGUIDEHINTWITHTEXT_METHOD_3_7E48DDECFB1CB741_OFFSET UNITYSDK_OFFSET(0x1D529F90)
#define RPG_GAMECORE_SHOWGUIDEHINTWITHTEXT_METHOD_3_B6EE8191DD04A107_OFFSET UNITYSDK_OFFSET(0x1D529F30)
#define RPG_GAMECORE_SHOWGUIDEHINTWITHTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D529F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGuideHintWithText_TypeDefinitionIndex = 24049;

	class ShowGuideHintWithText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Block; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TargetEvent; // 0x20
		::Il2CppArray<::System::String*>* NodeIDList; // 0x28
		::System::Boolean IsAutoMatchGuideHintType; // 0x30
		::RPG::GameCore::TutorialGuideHintType GuideHintType; // 0x34
		::RPG::GameCore::TutorialGuideTextType GuideTextType; // 0x38
		::System::Single WeakGuideLifeTime; // 0x3C
		::System::String* GuideText; // 0x40
		::System::String* GuideTextPC; // 0x48
		::System::String* GuideTextController; // 0x50
		::System::UInt32 GuideTalkID; // 0x58
		::System::UInt32 GuideTalkIDPC; // 0x5C
		::System::UInt32 GuideTalkIDController; // 0x60
		::System::Boolean ShowKeyMapTip; // 0x64
		::System::String* OverrideActionName; // 0x68
		::System::String* OverrideHintPrefabPath; // 0x70
		::System::String* OverrideTextPrefabPath; // 0x78
		::RPG::GameCore::TutorialGuideDirectionType CustomTextDirection; // 0x80
		::RPG::GameCore::TutorialGuideShowConfig* GuideHintShowConfig; // 0x88
		::RPG::GameCore::TutorialGuideShowConfig* GuideTextShowConfig; // 0x90
		::RPG::GameCore::TutorialGuideUIContextConfig* GuideUIContextConfig; // 0x98
		::System::Boolean EnableNavigation; // 0xA0
		::System::Boolean EnableSubmit; // 0xA1
		::System::Boolean EnableClickInHintArea; // 0xA2
		::Il2CppArray<::System::String*>* EnableActionList; // 0xA8
		::Il2CppArray<::RPG::GameCore::BattleOperationType>* EnableBattleOperationList; // 0xB0
		::RPG::GameCore::DynamicFloat* ParamInt; // 0xB8
		::System::Single ShowDelay; // 0xC0
		::System::Boolean EnableHotSwitch; // 0xC4
		::System::Boolean DisableBlackMask; // 0xC5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEHINTWITHTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B6EE8191DD04A107(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideHintWithText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideHintWithText*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEHINTWITHTEXT_METHOD_3_B6EE8191DD04A107_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7E48DDECFB1CB741(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideHintWithText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideHintWithText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEHINTWITHTEXT_METHOD_3_7E48DDECFB1CB741_OFFSET))(a1, a2);
		}
	};
}
