#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SO_TRIGGERGROUPEVENT_METHOD_4_C186FBC84337057E_OFFSET UNITYSDK_OFFSET(0x18DE0E00)
#define RPG_GAMECORE_SO_TRIGGERGROUPEVENT_METHOD_4_FDD3189D3DD447EF_OFFSET UNITYSDK_OFFSET(0x18DE0850)
#define RPG_GAMECORE_SO_TRIGGERGROUPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18DE0820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_TriggerGroupEvent_TypeDefinitionIndex = 18988;

	class SO_TriggerGroupEvent : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::System::String* EventName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_TRIGGERGROUPEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C186FBC84337057E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_TriggerGroupEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_TriggerGroupEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_TRIGGERGROUPEVENT_METHOD_4_C186FBC84337057E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FDD3189D3DD447EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_TriggerGroupEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_TriggerGroupEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_TRIGGERGROUPEVENT_METHOD_4_FDD3189D3DD447EF_OFFSET))(a1, a2);
		}
	};
}
