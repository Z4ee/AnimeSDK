#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCURRENTTURNSTATE_METHOD_4_033512C3B8CB9C78_OFFSET UNITYSDK_OFFSET(0x1701FCD0)
#define RPG_GAMECORE_BYCURRENTTURNSTATE_METHOD_4_A95F28C65DA98926_OFFSET UNITYSDK_OFFSET(0x1701FDA0)
#define RPG_GAMECORE_BYCURRENTTURNSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1701FD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentTurnState_TypeDefinitionIndex = 21772;

	class ByCurrentTurnState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TurnState>* TurnStates; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTURNSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_033512C3B8CB9C78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentTurnState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentTurnState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTURNSTATE_METHOD_4_033512C3B8CB9C78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A95F28C65DA98926(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentTurnState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentTurnState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTTURNSTATE_METHOD_4_A95F28C65DA98926_OFFSET))(a1, a2);
		}
	};
}
