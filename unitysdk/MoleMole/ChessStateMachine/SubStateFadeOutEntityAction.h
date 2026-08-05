#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineEntityAction.h"

class Class_1_43BD383C98B4C0C5_31;
class Class_2_5DF25B7A40A1031E;
namespace MoleMole { class BlendTextureSheetData; }
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x11457680)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION_FINDBLENDTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x114575F0)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION_RUN_OFFSET UNITYSDK_OFFSET(0x11456D10)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x114578F0)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x11457900)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SubStateFadeOutEntityAction_TypeDefinitionIndex = 58249;

	class SubStateFadeOutEntityAction : public ::MoleMole::ChessStateMachine::StateMachineEntityAction
	{
	public:
		::Class_2_5DF25B7A40A1031E* _actionContext; // 0x28
		::System::Boolean UseTextureSheetFade; // 0x30
		::System::Int32 FadeOutConfigID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_31* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION_RUN_OFFSET))(this, context);
		}

		::MoleMole::BlendTextureSheetData* FindBlendTextureSheetData(::System::String* key)
		{
			return ((::MoleMole::BlendTextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION_FINDBLENDTEXTURESHEETDATA_OFFSET))(this, key);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___BASE_ACTIONOVER_OFFSET))(this);
		}
	};
}
