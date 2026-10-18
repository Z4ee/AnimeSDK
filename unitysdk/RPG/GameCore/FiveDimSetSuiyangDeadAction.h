#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_METHOD_4_2E175494EB229D9C_OFFSET UNITYSDK_OFFSET(0x1D6ADCB0)
#define RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_METHOD_4_FDE3AEA1923293F1_OFFSET UNITYSDK_OFFSET(0x1D6ADD30)
#define RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ADD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetSuiyangDeadAction_TypeDefinitionIndex = 18709;

	class FiveDimSetSuiyangDeadAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2E175494EB229D9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSuiyangDeadAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSuiyangDeadAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_METHOD_4_2E175494EB229D9C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FDE3AEA1923293F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSuiyangDeadAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSuiyangDeadAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_METHOD_4_FDE3AEA1923293F1_OFFSET))(a1, a2);
		}
	};
}
