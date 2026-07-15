#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TRIGGERGROUPEVENT_METHOD_3_4D127035B522AE51_OFFSET UNITYSDK_OFFSET(0x1B056AB0)
#define RPG_GAMECORE_TRIGGERGROUPEVENT_METHOD_3_758C198758DC8A57_OFFSET UNITYSDK_OFFSET(0x1B056C10)
#define RPG_GAMECORE_TRIGGERGROUPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B056C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerGroupEvent_TypeDefinitionIndex = 20398;

	class TriggerGroupEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* EventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4D127035B522AE51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerGroupEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerGroupEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENT_METHOD_3_4D127035B522AE51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_758C198758DC8A57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerGroupEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerGroupEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENT_METHOD_3_758C198758DC8A57_OFFSET))(a1, a2);
		}
	};
}
