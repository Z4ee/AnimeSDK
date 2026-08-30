#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TutorialGuideDirectionType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideTalkListType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TUTORIALGUIDETALKLISTADAPTCONFIG_METHOD_2_876419F9A078D635_OFFSET UNITYSDK_OFFSET(0x1D2A7530)
#define RPG_GAMECORE_TUTORIALGUIDETALKLISTADAPTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A7710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideTalkListAdaptConfig_TypeDefinitionIndex = 24117;

	class TutorialGuideTalkListAdaptConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TutorialGuideTalkListType GuideTalkType; // 0x10
		::System::Boolean HasDirection; // 0x14
		::System::String* PrefabPath; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TutorialGuideDirectionType, ::System::String*>* DirectionPrefabPathMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKLISTADAPTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_876419F9A078D635(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialGuideTalkListAdaptConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialGuideTalkListAdaptConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDETALKLISTADAPTCONFIG_METHOD_2_876419F9A078D635_OFFSET))(a1, a2);
		}
	};
}
