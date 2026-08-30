#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAPOSTSOUNDEVENT_METHOD_3_AA8A67339D6E1C38_OFFSET UNITYSDK_OFFSET(0x1E340040)
#define RPG_GAMECORE_CHIMERAPOSTSOUNDEVENT_METHOD_3_F48DA061EB0119F8_OFFSET UNITYSDK_OFFSET(0x1E33FFE0)
#define RPG_GAMECORE_CHIMERAPOSTSOUNDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E340030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraPostSoundEvent_TypeDefinitionIndex = 15691;

	class ChimeraPostSoundEvent : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* AnchorName; // 0x18
		::System::String* SoundEvent; // 0x20
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPOSTSOUNDEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F48DA061EB0119F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraPostSoundEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraPostSoundEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPOSTSOUNDEVENT_METHOD_3_F48DA061EB0119F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA8A67339D6E1C38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraPostSoundEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraPostSoundEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPOSTSOUNDEVENT_METHOD_3_AA8A67339D6E1C38_OFFSET))(a1, a2);
		}
	};
}
