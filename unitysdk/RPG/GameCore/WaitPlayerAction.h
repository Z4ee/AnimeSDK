#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialPlayerActionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITPLAYERACTION_METHOD_3_3EC7E050953C3F0F_OFFSET UNITYSDK_OFFSET(0x1DEBD930)
#define RPG_GAMECORE_WAITPLAYERACTION_METHOD_3_5404949E3945BEC6_OFFSET UNITYSDK_OFFSET(0x1DEBD980)
#define RPG_GAMECORE_WAITPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBD970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPlayerAction_TypeDefinitionIndex = 24051;

	class WaitPlayerAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TutorialPlayerActionType ActionType; // 0x18
		::System::String* Param; // 0x20
		::System::Single ProtectTime; // 0x28
		::System::Boolean ForceSetNavigation; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3EC7E050953C3F0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERACTION_METHOD_3_3EC7E050953C3F0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5404949E3945BEC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERACTION_METHOD_3_5404949E3945BEC6_OFFSET))(a1, a2);
		}
	};
}
