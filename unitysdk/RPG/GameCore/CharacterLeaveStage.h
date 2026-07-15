#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERLEAVESTAGE_METHOD_3_7252727F89E7D08C_OFFSET UNITYSDK_OFFSET(0x1B724910)
#define RPG_GAMECORE_CHARACTERLEAVESTAGE_METHOD_3_EC0EEFC6B187FF01_OFFSET UNITYSDK_OFFSET(0x1B7248C0)
#define RPG_GAMECORE_CHARACTERLEAVESTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B724900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterLeaveStage_TypeDefinitionIndex = 21928;

	class CharacterLeaveStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean AliveOnly; // 0x20
		::System::String* ReasonKey; // 0x28
		::System::Boolean RefreshFormation; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLEAVESTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EC0EEFC6B187FF01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterLeaveStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterLeaveStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLEAVESTAGE_METHOD_3_EC0EEFC6B187FF01_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7252727F89E7D08C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterLeaveStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterLeaveStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERLEAVESTAGE_METHOD_3_7252727F89E7D08C_OFFSET))(a1, a2);
		}
	};
}
