#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_METHOD_3_0DF5817E050B0CAC_OFFSET UNITYSDK_OFFSET(0x1D0E8930)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_METHOD_3_7143C9DCF65316C1_OFFSET UNITYSDK_OFFSET(0x1D0E88B0)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E8920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGarbageBinFinishMoveAction_TypeDefinitionIndex = 18483;

	class FiveDimGarbageBinFinishMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7143C9DCF65316C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_METHOD_3_7143C9DCF65316C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0DF5817E050B0CAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINFINISHMOVEACTION_METHOD_3_0DF5817E050B0CAC_OFFSET))(a1, a2);
		}
	};
}
