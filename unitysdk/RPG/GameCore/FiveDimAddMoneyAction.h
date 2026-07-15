#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMADDMONEYACTION_METHOD_3_92F641EF45881CAA_OFFSET UNITYSDK_OFFSET(0x1BA86D70)
#define RPG_GAMECORE_FIVEDIMADDMONEYACTION_METHOD_3_D08C0B26602BB61C_OFFSET UNITYSDK_OFFSET(0x1BA86E20)
#define RPG_GAMECORE_FIVEDIMADDMONEYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA86E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddMoneyAction_TypeDefinitionIndex = 17991;

	class FiveDimAddMoneyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 AddNum; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDMONEYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_92F641EF45881CAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddMoneyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddMoneyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDMONEYACTION_METHOD_3_92F641EF45881CAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D08C0B26602BB61C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddMoneyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddMoneyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDMONEYACTION_METHOD_3_D08C0B26602BB61C_OFFSET))(a1, a2);
		}
	};
}
