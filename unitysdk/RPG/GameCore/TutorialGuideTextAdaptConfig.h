#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TutorialGuideDirectionType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideTextType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TUTORIALGUIDETEXTADAPTCONFIG_METHOD_2_40B705F7DA2C1C7D_OFFSET UNITYSDK_OFFSET(0x190DB740)
#define RPG_GAMECORE_TUTORIALGUIDETEXTADAPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190DBA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideTextAdaptConfig_TypeDefinitionIndex = 23413;

	class TutorialGuideTextAdaptConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TutorialGuideTextType GuideTextType; // 0x10
		::System::Boolean HasDirection; // 0x14
		::System::String* PrefabPath; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TutorialGuideDirectionType, ::System::String*>* DirectionPrefabPathMap; // 0x20
		::System::String* OverrideTextPath; // 0x28
		::System::String* OverrideKeyMapPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETEXTADAPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_40B705F7DA2C1C7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialGuideTextAdaptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialGuideTextAdaptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETEXTADAPTCONFIG_METHOD_2_40B705F7DA2C1C7D_OFFSET))(a1, a2);
		}
	};
}
