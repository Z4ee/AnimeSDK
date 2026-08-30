#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameFireEffectParams; }

#define RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_METHOD_3_58254C7A042E779B_OFFSET UNITYSDK_OFFSET(0x1D0E57E0)
#define RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_METHOD_3_76728577DFFDF03D_OFFSET UNITYSDK_OFFSET(0x1D0E5670)
#define RPG_GAMECORE_FIVEDIMFIREEFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E57D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFireEffectAction_TypeDefinitionIndex = 18528;

	class FiveDimFireEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IgnoreInitEvent; // 0x10
		::RPG::GameCore::LittleGameFireEffectParams* FireParams; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREEFFECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_76728577DFFDF03D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFireEffectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFireEffectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_METHOD_3_76728577DFFDF03D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58254C7A042E779B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFireEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREEFFECTACTION_METHOD_3_58254C7A042E779B_OFFSET))(a1, a2);
		}
	};
}
