#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERALWAYSIDLESTATE_METHOD_3_A08277AA12FC02C5_OFFSET UNITYSDK_OFFSET(0x1E811F60)
#define RPG_GAMECORE_SETCHARACTERALWAYSIDLESTATE_METHOD_3_D90071AFC373E130_OFFSET UNITYSDK_OFFSET(0x1E811FA0)
#define RPG_GAMECORE_SETCHARACTERALWAYSIDLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E811F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterAlwaysIdleState_TypeDefinitionIndex = 22509;

	class SetCharacterAlwaysIdleState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean On; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERALWAYSIDLESTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A08277AA12FC02C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterAlwaysIdleState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterAlwaysIdleState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERALWAYSIDLESTATE_METHOD_3_A08277AA12FC02C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D90071AFC373E130(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterAlwaysIdleState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterAlwaysIdleState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERALWAYSIDLESTATE_METHOD_3_D90071AFC373E130_OFFSET))(a1, a2);
		}
	};
}
