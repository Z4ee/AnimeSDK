#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_METHOD_3_21F366CE44399BA9_OFFSET UNITYSDK_OFFSET(0x18920190)
#define RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_METHOD_3_FDA382B743339DB5_OFFSET UNITYSDK_OFFSET(0x18920090)
#define RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18920170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartSuiyangBeatAction_TypeDefinitionIndex = 17776;

	class FiveDimStartSuiyangBeatAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single BPM; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FDA382B743339DB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartSuiyangBeatAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartSuiyangBeatAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_METHOD_3_FDA382B743339DB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_21F366CE44399BA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartSuiyangBeatAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartSuiyangBeatAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSUIYANGBEATACTION_METHOD_3_21F366CE44399BA9_OFFSET))(a1, a2);
		}
	};
}
