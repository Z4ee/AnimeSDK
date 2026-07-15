#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropInteractMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropInteractOverrideData01; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STARTPROPINTERACTMODE_METHOD_3_2887BFAFA512FE24_OFFSET UNITYSDK_OFFSET(0x1B0BE5F0)
#define RPG_GAMECORE_STARTPROPINTERACTMODE_METHOD_3_C36B2CD695C5F1FA_OFFSET UNITYSDK_OFFSET(0x1B0BE570)
#define RPG_GAMECORE_STARTPROPINTERACTMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0BE5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartPropInteractMode_TypeDefinitionIndex = 19604;

	class StartPropInteractMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropInteractMode Mode; // 0x20
		::System::Boolean UseOverrideData; // 0x24
		::RPG::GameCore::PropInteractOverrideData01* OverrideData01; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTPROPINTERACTMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C36B2CD695C5F1FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartPropInteractMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartPropInteractMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTPROPINTERACTMODE_METHOD_3_C36B2CD695C5F1FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2887BFAFA512FE24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartPropInteractMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartPropInteractMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTPROPINTERACTMODE_METHOD_3_2887BFAFA512FE24_OFFSET))(a1, a2);
		}
	};
}
