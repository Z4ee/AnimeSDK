#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_METHOD_3_633A12081CA93A9F_OFFSET UNITYSDK_OFFSET(0x1BA8C640)
#define RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_METHOD_3_EF9AA1C10255AEEE_OFFSET UNITYSDK_OFFSET(0x1BA8C5C0)
#define RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8C630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimChenLingCaptureFrameAction_TypeDefinitionIndex = 18049;

	class FiveDimChenLingCaptureFrameAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EF9AA1C10255AEEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_METHOD_3_EF9AA1C10255AEEE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_633A12081CA93A9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGCAPTUREFRAMEACTION_METHOD_3_633A12081CA93A9F_OFFSET))(a1, a2);
		}
	};
}
