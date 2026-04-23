#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_METHOD_3_514F79262A258E92_OFFSET UNITYSDK_OFFSET(0x188F9340)
#define RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_METHOD_3_633A12081CA93A9F_OFFSET UNITYSDK_OFFSET(0x188F3710)
#define RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x188F36F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimChenLingCaptureFrameAction_TypeDefinitionIndex = 17845;

	class FiveDimChenLingCaptureFrameAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_514F79262A258E92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_METHOD_3_514F79262A258E92_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_633A12081CA93A9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_METHOD_3_633A12081CA93A9F_OFFSET))(a1, a2);
		}
	};
}
