#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_METHOD_3_84905083C43F65B6_OFFSET UNITYSDK_OFFSET(0x1D87A950)
#define RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_METHOD_3_EC5E1FEEB35C3627_OFFSET UNITYSDK_OFFSET(0x1D87A8D0)
#define RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87A940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetSuiyangDeadAction_TypeDefinitionIndex = 18499;

	class FiveDimSetSuiyangDeadAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC5E1FEEB35C3627(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSuiyangDeadAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSuiyangDeadAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_METHOD_3_EC5E1FEEB35C3627_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_84905083C43F65B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSuiyangDeadAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSuiyangDeadAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSUIYANGDEADACTION_METHOD_3_84905083C43F65B6_OFFSET))(a1, a2);
		}
	};
}
