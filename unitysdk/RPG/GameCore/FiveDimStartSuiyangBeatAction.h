#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_METHOD_4_D2972CE3B067A0D8_OFFSET UNITYSDK_OFFSET(0x1D6B11F0)
#define RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_METHOD_4_E6E6C89AD8CD9D15_OFFSET UNITYSDK_OFFSET(0x1D6B1130)
#define RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B11E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartSuiyangBeatAction_TypeDefinitionIndex = 18710;

	class FiveDimStartSuiyangBeatAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single BPM; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E6E6C89AD8CD9D15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartSuiyangBeatAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartSuiyangBeatAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_METHOD_4_E6E6C89AD8CD9D15_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D2972CE3B067A0D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartSuiyangBeatAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartSuiyangBeatAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_METHOD_4_D2972CE3B067A0D8_OFFSET))(a1, a2);
		}
	};
}
