#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALLOCKPLAYERACTION_METHOD_3_071171E3F38CEFCD_OFFSET UNITYSDK_OFFSET(0x190DC2D0)
#define RPG_GAMECORE_TUTORIALLOCKPLAYERACTION_METHOD_3_6F4CBAE8D5D0773C_OFFSET UNITYSDK_OFFSET(0x190DC350)
#define RPG_GAMECORE_TUTORIALLOCKPLAYERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x190DC320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialLockPlayerAction_TypeDefinitionIndex = 23293;

	class TutorialLockPlayerAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Lock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALLOCKPLAYERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_071171E3F38CEFCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialLockPlayerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialLockPlayerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALLOCKPLAYERACTION_METHOD_3_071171E3F38CEFCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6F4CBAE8D5D0773C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialLockPlayerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialLockPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALLOCKPLAYERACTION_METHOD_3_6F4CBAE8D5D0773C_OFFSET))(a1, a2);
		}
	};
}
