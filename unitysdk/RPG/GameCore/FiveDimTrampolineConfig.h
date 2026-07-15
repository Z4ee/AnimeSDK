#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_METHOD_3_40A3E63E798DABE3_OFFSET UNITYSDK_OFFSET(0x1BEB78A0)
#define RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_METHOD_3_F8463761901A030E_OFFSET UNITYSDK_OFFSET(0x1BEA1D70)
#define RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB7890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTrampolineConfig_TypeDefinitionIndex = 17810;

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

		static ::System::Void Method_3_F8463761901A030E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTrampolineConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTrampolineConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_METHOD_3_F8463761901A030E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_40A3E63E798DABE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTrampolineConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAMPOLINECONFIG_METHOD_3_40A3E63E798DABE3_OFFSET))(a1, a2);
		}
	};
}
