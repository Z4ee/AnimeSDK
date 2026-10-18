#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_METHOD_4_893D2C734186EEE5_OFFSET UNITYSDK_OFFSET(0x1D6B4360)
#define RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_METHOD_4_A5A88172AAA7C520_OFFSET UNITYSDK_OFFSET(0x1D6B43E0)
#define RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B43D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimChenLingCaptureFrameAction_TypeDefinitionIndex = 18782;

	class FiveDimChenLingCaptureFrameAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_893D2C734186EEE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_METHOD_4_893D2C734186EEE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A5A88172AAA7C520(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_METHOD_4_A5A88172AAA7C520_OFFSET))(a1, a2);
		}
	};
}
