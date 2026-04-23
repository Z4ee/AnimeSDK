#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_METHOD_3_74B97D3336460AC3_OFFSET UNITYSDK_OFFSET(0x189204A0)
#define RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_METHOD_3_897FB4F89661C262_OFFSET UNITYSDK_OFFSET(0x18920560)
#define RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18920540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStopBubbleTalkAction_TypeDefinitionIndex = 17839;

	class FiveDimStopBubbleTalkAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_74B97D3336460AC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_METHOD_3_74B97D3336460AC3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_897FB4F89661C262(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_METHOD_3_897FB4F89661C262_OFFSET))(a1, a2);
		}
	};
}
