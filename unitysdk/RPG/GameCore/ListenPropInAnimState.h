#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LISTENPROPINANIMSTATE_METHOD_3_6E6BE4B756A8F8FC_OFFSET UNITYSDK_OFFSET(0x17353520)
#define RPG_GAMECORE_LISTENPROPINANIMSTATE_METHOD_3_D5D0D62B5C353A41_OFFSET UNITYSDK_OFFSET(0x173534A0)
#define RPG_GAMECORE_LISTENPROPINANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x173534F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ListenPropInAnimState_TypeDefinitionIndex = 19002;

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

		static ::System::Void Method_3_D5D0D62B5C353A41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ListenPropInAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ListenPropInAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENPROPINANIMSTATE_METHOD_3_D5D0D62B5C353A41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E6BE4B756A8F8FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ListenPropInAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ListenPropInAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENPROPINANIMSTATE_METHOD_3_6E6BE4B756A8F8FC_OFFSET))(a1, a2);
		}
	};
}
