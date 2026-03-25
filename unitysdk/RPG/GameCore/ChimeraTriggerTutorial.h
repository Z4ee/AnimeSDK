#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERATRIGGERTUTORIAL_METHOD_3_271792A63F45B6E7_OFFSET UNITYSDK_OFFSET(0x170AC9B0)
#define RPG_GAMECORE_CHIMERATRIGGERTUTORIAL_METHOD_3_CEA240D572DE4EC5_OFFSET UNITYSDK_OFFSET(0x170ACA10)
#define RPG_GAMECORE_CHIMERATRIGGERTUTORIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x170ACA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTriggerTutorial_TypeDefinitionIndex = 14570;

	class ChimeraTriggerTutorial : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* TutorialID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERTUTORIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_271792A63F45B6E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTriggerTutorial*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTriggerTutorial*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERTUTORIAL_METHOD_3_271792A63F45B6E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CEA240D572DE4EC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTriggerTutorial* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTriggerTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERTUTORIAL_METHOD_3_CEA240D572DE4EC5_OFFSET))(a1, a2);
		}
	};
}
