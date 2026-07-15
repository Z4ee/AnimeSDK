#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TutorialGuideHintType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALGUIDEHINTADAPTCONFIG_METHOD_2_137099894272D18B_OFFSET UNITYSDK_OFFSET(0x1B06CC20)
#define RPG_GAMECORE_TUTORIALGUIDEHINTADAPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B06CDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideHintAdaptConfig_TypeDefinitionIndex = 23530;

	class TutorialGuideHintAdaptConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TutorialGuideHintType GuideHintType; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::Boolean CopySize; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEHINTADAPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_137099894272D18B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialGuideHintAdaptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialGuideHintAdaptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEHINTADAPTCONFIG_METHOD_2_137099894272D18B_OFFSET))(a1, a2);
		}
	};
}
