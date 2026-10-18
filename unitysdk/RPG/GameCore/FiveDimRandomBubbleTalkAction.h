#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimActionRandomBubbleTalkInfoGroup; }

#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_METHOD_4_881D44CA49161AFD_OFFSET UNITYSDK_OFFSET(0x1D6D6DC0)
#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_METHOD_4_D5058A5C86D8008A_OFFSET UNITYSDK_OFFSET(0x1D6D6D70)
#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D6DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRandomBubbleTalkAction_TypeDefinitionIndex = 18774;

	class FiveDimRandomBubbleTalkAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimActionRandomBubbleTalkInfoGroup*>* BubbleTalkInfoGroupList; // 0x10
		::System::Boolean IsLoop; // 0x18
		::System::Single LoopInterval; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D5058A5C86D8008A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_METHOD_4_D5058A5C86D8008A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_881D44CA49161AFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_METHOD_4_881D44CA49161AFD_OFFSET))(a1, a2);
		}
	};
}
