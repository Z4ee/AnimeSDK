#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_METHOD_3_A420E0DE267F2002_OFFSET UNITYSDK_OFFSET(0x1D87A9B0)
#define RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_METHOD_3_E105A9386EF64789_OFFSET UNITYSDK_OFFSET(0x1D87A9F0)
#define RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87A9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetTriggerEnableAction_TypeDefinitionIndex = 18476;

	class FiveDimSetTriggerEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::String* TriggerName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A420E0DE267F2002(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetTriggerEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetTriggerEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_METHOD_3_A420E0DE267F2002_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E105A9386EF64789(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetTriggerEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetTriggerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_METHOD_3_E105A9386EF64789_OFFSET))(a1, a2);
		}
	};
}
