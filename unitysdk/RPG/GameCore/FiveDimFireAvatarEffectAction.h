#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameFireEffectParams; }

#define RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_METHOD_3_7FB56762C9B7ACFB_OFFSET UNITYSDK_OFFSET(0x1973CE00)
#define RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_METHOD_3_D754605D3F484D52_OFFSET UNITYSDK_OFFSET(0x1972EF40)
#define RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1972EF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFireAvatarEffectAction_TypeDefinitionIndex = 17831;

	class FiveDimFireAvatarEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IgnoreInitEvent; // 0x10
		::RPG::GameCore::LittleGameFireEffectParams* FireParams; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7FB56762C9B7ACFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_METHOD_3_7FB56762C9B7ACFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D754605D3F484D52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_METHOD_3_D754605D3F484D52_OFFSET))(a1, a2);
		}
	};
}
