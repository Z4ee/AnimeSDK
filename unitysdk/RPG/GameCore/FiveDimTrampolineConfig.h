#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_METHOD_3_420B248E8F3C789A_OFFSET UNITYSDK_OFFSET(0x17210810)
#define RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_METHOD_3_72704E4310E0CF38_OFFSET UNITYSDK_OFFSET(0x171FB600)
#define RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172107F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTrampolineConfig_TypeDefinitionIndex = 17016;

	class FiveDimTrampolineConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsTrampoline; // 0x10
		::RPG::GameCore::FiveDimTriggerShape* TrampolineTrigger; // 0x18
		::System::Boolean OverrideJumpParams; // 0x20
		::System::Single TrampolineJumpHeight; // 0x24
		::System::Single TrampolineMusicJumpHeight; // 0x28
		::RPG::GameCore::LittleGameEvent* OnTrampolineJump; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_72704E4310E0CF38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTrampolineConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTrampolineConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_METHOD_3_72704E4310E0CF38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_420B248E8F3C789A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTrampolineConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_METHOD_3_420B248E8F3C789A_OFFSET))(a1, a2);
		}
	};
}
