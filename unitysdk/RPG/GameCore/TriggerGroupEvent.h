#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_TRIGGERGROUPEVENT_METHOD_3_758C198758DC8A57_OFFSET UNITYSDK_OFFSET(0x19E15DD0)
#define RPG_GAMECORE_TRIGGERGROUPEVENT_METHOD_3_8F3B3BCA0004D265_OFFSET UNITYSDK_OFFSET(0x19E15C00)
#define RPG_GAMECORE_TRIGGERGROUPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E15DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerGroupEvent_TypeDefinitionIndex = 20026;

	class TriggerGroupEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* EventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8F3B3BCA0004D265(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerGroupEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerGroupEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENT_METHOD_3_8F3B3BCA0004D265_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_758C198758DC8A57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerGroupEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerGroupEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENT_METHOD_3_758C198758DC8A57_OFFSET))(a1, a2);
		}
	};
}
