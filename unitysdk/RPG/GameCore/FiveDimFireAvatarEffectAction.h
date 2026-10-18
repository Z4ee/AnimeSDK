#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameFireEffectParams; }

#define RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_METHOD_4_0D19CA3DCB2D64B4_OFFSET UNITYSDK_OFFSET(0x1D6BDB10)
#define RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_METHOD_4_C7D8A81CD607DACF_OFFSET UNITYSDK_OFFSET(0x1D6BDB50)
#define RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BDB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFireAvatarEffectAction_TypeDefinitionIndex = 18741;

	class FiveDimFireAvatarEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IgnoreInitEvent; // 0x10
		::RPG::GameCore::LittleGameFireEffectParams* FireParams; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0D19CA3DCB2D64B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_METHOD_4_0D19CA3DCB2D64B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C7D8A81CD607DACF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_METHOD_4_C7D8A81CD607DACF_OFFSET))(a1, a2);
		}
	};
}
