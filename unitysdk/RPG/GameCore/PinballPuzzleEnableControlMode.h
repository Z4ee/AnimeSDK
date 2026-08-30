#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PINBALLPUZZLEENABLECONTROLMODE_METHOD_3_0AF29308CE27F19B_OFFSET UNITYSDK_OFFSET(0x1D4384F0)
#define RPG_GAMECORE_PINBALLPUZZLEENABLECONTROLMODE_METHOD_3_F30F36662BE0BA94_OFFSET UNITYSDK_OFFSET(0x1D4384B0)
#define RPG_GAMECORE_PINBALLPUZZLEENABLECONTROLMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4384E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PinballPuzzleEnableControlMode_TypeDefinitionIndex = 21758;

	class PinballPuzzleEnableControlMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINBALLPUZZLEENABLECONTROLMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F30F36662BE0BA94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PinballPuzzleEnableControlMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PinballPuzzleEnableControlMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINBALLPUZZLEENABLECONTROLMODE_METHOD_3_F30F36662BE0BA94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0AF29308CE27F19B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PinballPuzzleEnableControlMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PinballPuzzleEnableControlMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINBALLPUZZLEENABLECONTROLMODE_METHOD_3_0AF29308CE27F19B_OFFSET))(a1, a2);
		}
	};
}
