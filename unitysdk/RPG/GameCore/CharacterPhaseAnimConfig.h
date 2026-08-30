#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterReactionAnimConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ModifierBehaviorVisual; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERPHASEANIMCONFIG_METHOD_3_92F5A7CD50844694_OFFSET UNITYSDK_OFFSET(0x1D11BEE0)
#define RPG_GAMECORE_CHARACTERPHASEANIMCONFIG_METHOD_3_9E7E826336CD6D31_OFFSET UNITYSDK_OFFSET(0x1D1264D0)
#define RPG_GAMECORE_CHARACTERPHASEANIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1264C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPhaseAnimConfig_TypeDefinitionIndex = 17987;

	class CharacterPhaseAnimConfig : public ::RPG::GameCore::CharacterReactionAnimConfig
	{
	public:
		::System::String* StandBy; // 0x60
		::System::String* Revive; // 0x68
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorVisual*>* ModifierBehaviorVisuals; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEANIMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_92F5A7CD50844694(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPhaseAnimConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPhaseAnimConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEANIMCONFIG_METHOD_3_92F5A7CD50844694_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E7E826336CD6D31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPhaseAnimConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPhaseAnimConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEANIMCONFIG_METHOD_3_9E7E826336CD6D31_OFFSET))(a1, a2);
		}
	};
}
