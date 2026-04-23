#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_54E934475116746E_OFFSET UNITYSDK_OFFSET(0x1875A610)
#define RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_88CE9E9EBC9EF094_OFFSET UNITYSDK_OFFSET(0x1875A540)
#define RPG_GAMECORE_BYISTUTORIALFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1875A5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTutorialFinish_TypeDefinitionIndex = 23372;

	class ByIsTutorialFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TutorialID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_88CE9E9EBC9EF094(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTutorialFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTutorialFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_88CE9E9EBC9EF094_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_54E934475116746E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTutorialFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTutorialFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTUTORIALFINISH_METHOD_4_54E934475116746E_OFFSET))(a1, a2);
		}
	};
}
