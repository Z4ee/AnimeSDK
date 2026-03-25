#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessAnimStateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHESSTRIGGERANIMSTATE_METHOD_3_5E0711AD217FB085_OFFSET UNITYSDK_OFFSET(0x1708ED60)
#define RPG_GAMECORE_CHESSTRIGGERANIMSTATE_METHOD_3_C3D0F1C9186A4EE7_OFFSET UNITYSDK_OFFSET(0x1708EC80)
#define RPG_GAMECORE_CHESSTRIGGERANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1708ECC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessTriggerAnimState_TypeDefinitionIndex = 21983;

	class ChessTriggerAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ChessAnimStateType AnimLogicState; // 0x20
		::System::String* AnimStateName; // 0x28
		::RPG::GameCore::DynamicFloat* Speed; // 0x30
		::System::Boolean AffectByTimeScale; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSTRIGGERANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C3D0F1C9186A4EE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessTriggerAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessTriggerAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSTRIGGERANIMSTATE_METHOD_3_C3D0F1C9186A4EE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5E0711AD217FB085(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessTriggerAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessTriggerAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSTRIGGERANIMSTATE_METHOD_3_5E0711AD217FB085_OFFSET))(a1, a2);
		}
	};
}
