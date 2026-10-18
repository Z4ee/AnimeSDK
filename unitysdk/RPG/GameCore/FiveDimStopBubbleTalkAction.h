#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_METHOD_4_509ABE2EB19748D0_OFFSET UNITYSDK_OFFSET(0x1D6B1490)
#define RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_METHOD_4_E6989E824F6584D5_OFFSET UNITYSDK_OFFSET(0x1D6B1510)
#define RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B1500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStopBubbleTalkAction_TypeDefinitionIndex = 18776;

	class FiveDimStopBubbleTalkAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_509ABE2EB19748D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_METHOD_4_509ABE2EB19748D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E6989E824F6584D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_METHOD_4_E6989E824F6584D5_OFFSET))(a1, a2);
		}
	};
}
