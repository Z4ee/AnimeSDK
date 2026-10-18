#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_METHOD_4_DA60E4C0036FB323_OFFSET UNITYSDK_OFFSET(0x1D68F810)
#define RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_METHOD_4_E46CF6EF15C760B8_OFFSET UNITYSDK_OFFSET(0x1D68F7D0)
#define RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68F800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileSetTraceTargetAction_TypeDefinitionIndex = 18788;

	class FiveDimEvilSmileSetTraceTargetAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsTraceCustomTarget; // 0x10
		::System::UInt32 CustomTargetConfigID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E46CF6EF15C760B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_METHOD_4_E46CF6EF15C760B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DA60E4C0036FB323(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileSetTraceTargetAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESETTRACETARGETACTION_METHOD_4_DA60E4C0036FB323_OFFSET))(a1, a2);
		}
	};
}
