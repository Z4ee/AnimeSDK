#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialGuideHintAdaptConfig; }
namespace RPG::GameCore { class TutorialGuideTalkListAdaptConfig; }
namespace RPG::GameCore { class TutorialGuideTextAdaptConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALJSONCONFIG_METHOD_2_3C180D895DE1BC75_OFFSET UNITYSDK_OFFSET(0x178DD480)
#define RPG_GAMECORE_TUTORIALJSONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x178DD890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialJsonConfig_TypeDefinitionIndex = 22445;

	class TutorialJsonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TutorialGuideHintAdaptConfig*>* GuideHintAdaptionConfigList; // 0x10
		::Il2CppArray<::RPG::GameCore::TutorialGuideTextAdaptConfig*>* GuideTextAdaptionConfigList; // 0x18
		::Il2CppArray<::RPG::GameCore::TutorialGuideTalkListAdaptConfig*>* GuideTalkAdaptionConfigList; // 0x20
		::System::String* DefaultTextPath; // 0x28
		::System::String* DefaultKeyMapPath; // 0x30
		::System::String* DefaultContentPath; // 0x38
		::System::String* TutorialUIMaskPath; // 0x40
		::System::String* TutorialBlockMaskPath; // 0x48
		::System::String* GuideTalkUIName; // 0x50
		::System::Single WidthHeightEqualCheckThreshold; // 0x58
		::System::Single ExtraOffsetDelta; // 0x5C
		::System::Single NodeMoveCheckThreshold; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALJSONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3C180D895DE1BC75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialJsonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialJsonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALJSONCONFIG_METHOD_2_3C180D895DE1BC75_OFFSET))(a1, a2);
		}
	};
}
