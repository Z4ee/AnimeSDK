#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameFireEffectParams; }

#define RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_METHOD_4_4D796B9D65B0FC66_OFFSET UNITYSDK_OFFSET(0x1D6901F0)
#define RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_METHOD_4_7CF0AD9DF38D4BB3_OFFSET UNITYSDK_OFFSET(0x1D690360)
#define RPG_GAMECORE_FIVEDIMFIREEFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D690350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFireEffectAction_TypeDefinitionIndex = 18738;

	class FiveDimFireEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IgnoreInitEvent; // 0x10
		::System::Boolean SkipWhenCullByCamera; // 0x11
		::RPG::GameCore::LittleGameFireEffectParams* FireParams; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREEFFECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4D796B9D65B0FC66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFireEffectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFireEffectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_METHOD_4_4D796B9D65B0FC66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7CF0AD9DF38D4BB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFireEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_METHOD_4_7CF0AD9DF38D4BB3_OFFSET))(a1, a2);
		}
	};
}
