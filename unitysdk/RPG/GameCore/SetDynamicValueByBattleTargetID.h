#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C404E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_METHOD_4_3A7B6D66754472C0_OFFSET UNITYSDK_OFFSET(0x19C370F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_METHOD_4_4A3B248B0377A00C_OFFSET UNITYSDK_OFFSET(0x19C40460)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID__CTOR_OFFSET UNITYSDK_OFFSET(0x19C370A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBattleTargetID_TypeDefinitionIndex = 21920;

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

		static ::System::Void Method_4_4A3B248B0377A00C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBattleTargetID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBATTLETARGETID_METHOD_4_4A3B248B0377A00C_OFFSET))(a1, a2);
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
