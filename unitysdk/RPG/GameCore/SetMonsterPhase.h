#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NumberSetMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMONSTERPHASE_METHOD_3_AE57E02848FBACA9_OFFSET UNITYSDK_OFFSET(0x1E0881D0)
#define RPG_GAMECORE_SETMONSTERPHASE_METHOD_3_B750F9A61D439704_OFFSET UNITYSDK_OFFSET(0x1E088290)
#define RPG_GAMECORE_SETMONSTERPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E088240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMonsterPhase_TypeDefinitionIndex = 22475;

	class SetMonsterPhase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::NumberSetMode SetMode; // 0x20
		::System::UInt32 PhaseNum; // 0x24
		::System::Boolean ApplyOverrideConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE57E02848FBACA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterPhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterPhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASE_METHOD_3_AE57E02848FBACA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B750F9A61D439704(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMonsterPhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMonsterPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMONSTERPHASE_METHOD_3_B750F9A61D439704_OFFSET))(a1, a2);
		}
	};
}
