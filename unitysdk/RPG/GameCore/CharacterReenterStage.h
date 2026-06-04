#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREENTERSTAGE_METHOD_3_22FB3995B9507E01_OFFSET UNITYSDK_OFFSET(0x19614070)
#define RPG_GAMECORE_CHARACTERREENTERSTAGE_METHOD_3_BC59F9378146E1AE_OFFSET UNITYSDK_OFFSET(0x196140F0)
#define RPG_GAMECORE_CHARACTERREENTERSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x196140C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReenterStage_TypeDefinitionIndex = 21508;

	class CharacterReenterStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ReasonKey; // 0x20
		::System::Boolean RefreshFormation; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREENTERSTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22FB3995B9507E01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReenterStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReenterStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREENTERSTAGE_METHOD_3_22FB3995B9507E01_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC59F9378146E1AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReenterStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReenterStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREENTERSTAGE_METHOD_3_BC59F9378146E1AE_OFFSET))(a1, a2);
		}
	};
}
