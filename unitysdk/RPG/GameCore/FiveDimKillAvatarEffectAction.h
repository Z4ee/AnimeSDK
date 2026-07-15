#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameKillEffectParams; }

#define RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_METHOD_3_B0AEA76F045F563A_OFFSET UNITYSDK_OFFSET(0x1BA9C5F0)
#define RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_METHOD_3_CEA6649083563C97_OFFSET UNITYSDK_OFFSET(0x1BA9C6A0)
#define RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9C690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimKillAvatarEffectAction_TypeDefinitionIndex = 18009;

	class FiveDimKillAvatarEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::LittleGameKillEffectParams* KillParams; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B0AEA76F045F563A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_METHOD_3_B0AEA76F045F563A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CEA6649083563C97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_METHOD_3_CEA6649083563C97_OFFSET))(a1, a2);
		}
	};
}
