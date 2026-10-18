#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_METHOD_4_5AD20F4027ABA9D2_OFFSET UNITYSDK_OFFSET(0x1D692EC0)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_METHOD_4_EBD888FF2CF2D9D3_OFFSET UNITYSDK_OFFSET(0x1D692F40)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D692F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGarbageBinFinishMoveAction_TypeDefinitionIndex = 18692;

	class FiveDimGarbageBinFinishMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5AD20F4027ABA9D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_METHOD_4_5AD20F4027ABA9D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EBD888FF2CF2D9D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_METHOD_4_EBD888FF2CF2D9D3_OFFSET))(a1, a2);
		}
	};
}
