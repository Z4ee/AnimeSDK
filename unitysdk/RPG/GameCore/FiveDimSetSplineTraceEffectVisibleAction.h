#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETSPLINETRACEEFFECTVISIBLEACTION_METHOD_3_EED67C108FBFB365_OFFSET UNITYSDK_OFFSET(0x1D101CA0)
#define RPG_GAMECORE_FIVEDIMSETSPLINETRACEEFFECTVISIBLEACTION_METHOD_3_F4379460B89246E8_OFFSET UNITYSDK_OFFSET(0x1D101D80)
#define RPG_GAMECORE_FIVEDIMSETSPLINETRACEEFFECTVISIBLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D101D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetSplineTraceEffectVisibleAction_TypeDefinitionIndex = 18544;

	class FiveDimSetSplineTraceEffectVisibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Visible; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINETRACEEFFECTVISIBLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EED67C108FBFB365(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINETRACEEFFECTVISIBLEACTION_METHOD_3_EED67C108FBFB365_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F4379460B89246E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSPLINETRACEEFFECTVISIBLEACTION_METHOD_3_F4379460B89246E8_OFFSET))(a1, a2);
		}
	};
}
