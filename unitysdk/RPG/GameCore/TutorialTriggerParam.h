#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TutorialTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALTRIGGERPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B87B6C0)
#define RPG_GAMECORE_TUTORIALTRIGGERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B87B7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialTriggerParam_TypeDefinitionIndex = 14772;

	class TutorialTriggerParam : public ::System::Object
	{
	public:
		::System::String* TriggerParam; // 0x10
		::RPG::GameCore::TutorialTriggerType TriggerType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALTRIGGERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialTriggerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialTriggerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALTRIGGERPARAM_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
