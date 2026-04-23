#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_EXITBREAKSTATE_METHOD_3_9DEC090457E6E2CE_OFFSET UNITYSDK_OFFSET(0x188C2B70)
#define RPG_GAMECORE_EXITBREAKSTATE_METHOD_3_D48CA927825F5084_OFFSET UNITYSDK_OFFSET(0x188C2AF0)
#define RPG_GAMECORE_EXITBREAKSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x188C2B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExitBreakState_TypeDefinitionIndex = 22620;

	class ExitBreakState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean CancelRecoverAnim; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITBREAKSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D48CA927825F5084(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExitBreakState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExitBreakState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITBREAKSTATE_METHOD_3_D48CA927825F5084_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9DEC090457E6E2CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExitBreakState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExitBreakState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXITBREAKSTATE_METHOD_3_9DEC090457E6E2CE_OFFSET))(a1, a2);
		}
	};
}
