#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETSPLINETRACEEFFECTVISIBLEACTION_METHOD_4_A4854FAFEB8B50F9_OFFSET UNITYSDK_OFFSET(0x1D6ADBF0)
#define RPG_GAMECORE_FIVEDIMSETSPLINETRACEEFFECTVISIBLEACTION_METHOD_4_A6CD07C631DD0BFC_OFFSET UNITYSDK_OFFSET(0x1D6ADB10)
#define RPG_GAMECORE_FIVEDIMSETSPLINETRACEEFFECTVISIBLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ADBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetSplineTraceEffectVisibleAction_TypeDefinitionIndex = 18754;

	class FiveDimSetSplineTraceEffectVisibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Visible; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINETRACEEFFECTVISIBLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A6CD07C631DD0BFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINETRACEEFFECTVISIBLEACTION_METHOD_4_A6CD07C631DD0BFC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A4854FAFEB8B50F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINETRACEEFFECTVISIBLEACTION_METHOD_4_A4854FAFEB8B50F9_OFFSET))(a1, a2);
		}
	};
}
