#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_METHOD_3_02A4BD48335192B3_OFFSET UNITYSDK_OFFSET(0x1D0A0480)
#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_METHOD_3_8932AFDA807151A2_OFFSET UNITYSDK_OFFSET(0x1D0A0440)
#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A0470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddGlobalTimeScaleAction_TypeDefinitionIndex = 18460;

	class FiveDimAddGlobalTimeScaleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* Key; // 0x10
		::System::Single TimeScale; // 0x18
		::System::Boolean IgnoreSelf; // 0x1C
		::System::Boolean IgnoreChildren; // 0x1D
		::System::Boolean IgnorePlayer; // 0x1E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8932AFDA807151A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_METHOD_3_8932AFDA807151A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_02A4BD48335192B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_METHOD_3_02A4BD48335192B3_OFFSET))(a1, a2);
		}
	};
}
