#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWBOSSINFOBAR_METHOD_3_008F311B38678707_OFFSET UNITYSDK_OFFSET(0x18E5B140)
#define RPG_GAMECORE_SHOWBOSSINFOBAR_METHOD_3_60129D44EAF51953_OFFSET UNITYSDK_OFFSET(0x18E5B1C0)
#define RPG_GAMECORE_SHOWBOSSINFOBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x18E5B190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBossInfoBar_TypeDefinitionIndex = 21856;

	class ShowBossInfoBar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBOSSINFOBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_008F311B38678707(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBossInfoBar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBossInfoBar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBOSSINFOBAR_METHOD_3_008F311B38678707_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_60129D44EAF51953(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowBossInfoBar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowBossInfoBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBOSSINFOBAR_METHOD_3_60129D44EAF51953_OFFSET))(a1, a2);
		}
	};
}
