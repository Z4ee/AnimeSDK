#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LISTENPROPINANIMSTATE_METHOD_3_78538F349EAC7056_OFFSET UNITYSDK_OFFSET(0x1B091980)
#define RPG_GAMECORE_LISTENPROPINANIMSTATE_METHOD_3_9193073A0A091483_OFFSET UNITYSDK_OFFSET(0x1B0919C0)
#define RPG_GAMECORE_LISTENPROPINANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0919B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ListenPropInAnimState_TypeDefinitionIndex = 19900;

	class ListenPropInAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* AnimStates; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENPROPINANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_78538F349EAC7056(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ListenPropInAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ListenPropInAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENPROPINANIMSTATE_METHOD_3_78538F349EAC7056_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9193073A0A091483(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ListenPropInAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ListenPropInAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENPROPINANIMSTATE_METHOD_3_9193073A0A091483_OFFSET))(a1, a2);
		}
	};
}
