#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_METHOD_3_728DE1F8E34E441A_OFFSET UNITYSDK_OFFSET(0x188F5480)
#define RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_METHOD_3_F57910CD09982F93_OFFSET UNITYSDK_OFFSET(0x18900C50)
#define RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x188F5460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileSetTraceTargetAction_TypeDefinitionIndex = 17851;

	class FiveDimEvilSmileSetTraceTargetAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsTraceCustomTarget; // 0x10
		::System::UInt32 CustomTargetConfigID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F57910CD09982F93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_METHOD_3_F57910CD09982F93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_728DE1F8E34E441A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_METHOD_3_728DE1F8E34E441A_OFFSET))(a1, a2);
		}
	};
}
