#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPARAM_METHOD_3_1D129634DC4D9508_OFFSET UNITYSDK_OFFSET(0x19C404F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPARAM_METHOD_3_5A5290899E5D0C1B_OFFSET UNITYSDK_OFFSET(0x19C40570)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19C40540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBattleTargetParam_TypeDefinitionIndex = 22530;

	class SetDynamicValueByBattleTargetParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 BattleTargetID; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D129634DC4D9508(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBattleTargetParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPARAM_METHOD_3_1D129634DC4D9508_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A5290899E5D0C1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBattleTargetParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETPARAM_METHOD_3_5A5290899E5D0C1B_OFFSET))(a1, a2);
		}
	};
}
