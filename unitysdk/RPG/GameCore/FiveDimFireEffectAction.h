#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameFireEffectParams; }

#define RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_METHOD_3_4C93557B2F8E15D1_OFFSET UNITYSDK_OFFSET(0x18901350)
#define RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_METHOD_3_58254C7A042E779B_OFFSET UNITYSDK_OFFSET(0x188F5A10)
#define RPG_GAMECORE_FIVEDIMFIREEFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x188F59F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFireEffectAction_TypeDefinitionIndex = 17801;

	class FiveDimFireEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IgnoreInitEvent; // 0x10
		::RPG::GameCore::LittleGameFireEffectParams* FireParams; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREEFFECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4C93557B2F8E15D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFireEffectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFireEffectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_METHOD_3_4C93557B2F8E15D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58254C7A042E779B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFireEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_METHOD_3_58254C7A042E779B_OFFSET))(a1, a2);
		}
	};
}
