#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYADVENTURECHARACTERRUNSPEEDRATIO_METHOD_3_3D85CE0BBD2FB8DA_OFFSET UNITYSDK_OFFSET(0x1AF73E80)
#define RPG_GAMECORE_MODIFYADVENTURECHARACTERRUNSPEEDRATIO_METHOD_3_4BBA5E5ADD13C482_OFFSET UNITYSDK_OFFSET(0x1AF73ED0)
#define RPG_GAMECORE_MODIFYADVENTURECHARACTERRUNSPEEDRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF73EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyAdventureCharacterRunSpeedRatio_TypeDefinitionIndex = 19736;

	class ModifyAdventureCharacterRunSpeedRatio : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* UniqueKey; // 0x20
		::System::Boolean ModifyEnabled; // 0x28
		::RPG::GameCore::CharacterMotionFlag ModifyMotionFlag; // 0x2C
		::System::Single TransitionDuration; // 0x30
		::RPG::GameCore::DynamicFloat* SpeedRatioMultiplier; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADVENTURECHARACTERRUNSPEEDRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3D85CE0BBD2FB8DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADVENTURECHARACTERRUNSPEEDRATIO_METHOD_3_3D85CE0BBD2FB8DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4BBA5E5ADD13C482(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADVENTURECHARACTERRUNSPEEDRATIO_METHOD_3_4BBA5E5ADD13C482_OFFSET))(a1, a2);
		}
	};
}
