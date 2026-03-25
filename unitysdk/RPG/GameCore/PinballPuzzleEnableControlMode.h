#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PINBALLPUZZLEENABLECONTROLMODE_METHOD_3_0AF29308CE27F19B_OFFSET UNITYSDK_OFFSET(0x174AE230)
#define RPG_GAMECORE_PINBALLPUZZLEENABLECONTROLMODE_METHOD_3_56ACA4D59591EF8F_OFFSET UNITYSDK_OFFSET(0x174AE1B0)
#define RPG_GAMECORE_PINBALLPUZZLEENABLECONTROLMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x174AE200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PinballPuzzleEnableControlMode_TypeDefinitionIndex = 20182;

	class PinballPuzzleEnableControlMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINBALLPUZZLEENABLECONTROLMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_56ACA4D59591EF8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PinballPuzzleEnableControlMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PinballPuzzleEnableControlMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINBALLPUZZLEENABLECONTROLMODE_METHOD_3_56ACA4D59591EF8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0AF29308CE27F19B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PinballPuzzleEnableControlMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PinballPuzzleEnableControlMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINBALLPUZZLEENABLECONTROLMODE_METHOD_3_0AF29308CE27F19B_OFFSET))(a1, a2);
		}
	};
}
