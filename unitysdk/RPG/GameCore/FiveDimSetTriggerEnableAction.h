#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_METHOD_3_D7E1DB40F5DCB9D0_OFFSET UNITYSDK_OFFSET(0x197567F0)
#define RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_METHOD_3_E105A9386EF64789_OFFSET UNITYSDK_OFFSET(0x19756860)
#define RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19756840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetTriggerEnableAction_TypeDefinitionIndex = 17779;

	class FiveDimSetTriggerEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::String* TriggerName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D7E1DB40F5DCB9D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetTriggerEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetTriggerEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_METHOD_3_D7E1DB40F5DCB9D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E105A9386EF64789(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetTriggerEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetTriggerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_METHOD_3_E105A9386EF64789_OFFSET))(a1, a2);
		}
	};
}
