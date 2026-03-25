#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_METHOD_3_77606EEB70D04FF0_OFFSET UNITYSDK_OFFSET(0x1720B740)
#define RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_METHOD_3_F666462BFF6BA3A4_OFFSET UNITYSDK_OFFSET(0x1720B610)
#define RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1720B720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetTriggerEnableAction_TypeDefinitionIndex = 17150;

	class FiveDimSetTriggerEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F666462BFF6BA3A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetTriggerEnableAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetTriggerEnableAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_METHOD_3_F666462BFF6BA3A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_77606EEB70D04FF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetTriggerEnableAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetTriggerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_METHOD_3_77606EEB70D04FF0_OFFSET))(a1, a2);
		}
	};
}
