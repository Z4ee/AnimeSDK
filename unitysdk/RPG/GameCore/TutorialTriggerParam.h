#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TutorialTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALTRIGGERPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190DDFE0)
#define RPG_GAMECORE_TUTORIALTRIGGERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x190DE0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialTriggerParam_TypeDefinitionIndex = 14589;

	class TutorialTriggerParam : public ::System::Object
	{
	public:
		::System::String* TriggerParam; // 0x10
		::RPG::GameCore::TutorialTriggerType TriggerType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALTRIGGERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TutorialTriggerParam*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialTriggerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALTRIGGERPARAM_FROMBINARY_OFFSET))(array, val);
		}
	};
}
