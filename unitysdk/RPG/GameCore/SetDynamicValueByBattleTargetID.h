#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C2DF430)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_METHOD_4_3A7B6D66754472C0_OFFSET UNITYSDK_OFFSET(0x1C2DF280)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_METHOD_4_7E0599AC1E3611DD_OFFSET UNITYSDK_OFFSET(0x1C2DF240)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DF270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBattleTargetID_TypeDefinitionIndex = 22349;

	class SetDynamicValueByBattleTargetID : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* AbilityName; // 0x18
		::System::String* BattleTargetIDKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7E0599AC1E3611DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBattleTargetID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_METHOD_4_7E0599AC1E3611DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3A7B6D66754472C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBattleTargetID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_METHOD_4_3A7B6D66754472C0_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
