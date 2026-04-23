#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TUTORIALTASKUNLOCK_METHOD_3_3722056C68A4F00C_OFFSET UNITYSDK_OFFSET(0x190DDE60)
#define RPG_GAMECORE_TUTORIALTASKUNLOCK_METHOD_3_E9B4C7BB3A77879D_OFFSET UNITYSDK_OFFSET(0x190DDEE0)
#define RPG_GAMECORE_TUTORIALTASKUNLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x190DDEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialTaskUnlock_TypeDefinitionIndex = 19878;

	class TutorialTaskUnlock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* TriggerParam; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALTASKUNLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3722056C68A4F00C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialTaskUnlock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialTaskUnlock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALTASKUNLOCK_METHOD_3_3722056C68A4F00C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9B4C7BB3A77879D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialTaskUnlock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialTaskUnlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALTASKUNLOCK_METHOD_3_E9B4C7BB3A77879D_OFFSET))(a1, a2);
		}
	};
}
