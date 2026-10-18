#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_METHOD_4_165C0BA3C2B57A6C_OFFSET UNITYSDK_OFFSET(0x1D6AE3E0)
#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_METHOD_4_A13DC101AAE00A61_OFFSET UNITYSDK_OFFSET(0x1D6AE3A0)
#define RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AE3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAddGlobalTimeScaleAction_TypeDefinitionIndex = 18669;

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

		static ::System::Void Method_4_A13DC101AAE00A61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_METHOD_4_A13DC101AAE00A61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_165C0BA3C2B57A6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMADDGLOBALTIMESCALEACTION_METHOD_4_165C0BA3C2B57A6C_OFFSET))(a1, a2);
		}
	};
}
