#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineBaseAction.h"

class Class_1_43BD383C98B4C0C5_31;
class Class_1_C9DFE5EE7107C629;
class Class_2_D54D1CE8FFE08E19;
namespace MoleMole { class TextureSheetData; }
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_CHECK_OFFSET UNITYSDK_OFFSET(0x12A30F90)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_FINDTEXTURESHEETDATABYKEY_OFFSET UNITYSDK_OFFSET(0x12A31250)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_FINISH_OFFSET UNITYSDK_OFFSET(0x12A312C0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x12A30FE0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x12A30F80)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_RUN_OFFSET UNITYSDK_OFFSET(0x12A31200)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_STOP_OFFSET UNITYSDK_OFFSET(0x12A31310)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12A31350)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcStateAction_TypeDefinitionIndex = 50956;

	class ShowNpcStateAction : public ::MoleMole::ChessStateMachine::StateMachineBaseAction
	{
	public:
		::System::String* Tag; // 0x20
		::System::String* TextureSheet; // 0x28
		::Class_2_D54D1CE8FFE08E19* _context; // 0x30
		::System::Int32 Priority; // 0x38
		::System::Boolean NeedUseOffset; // 0x3C
		::System::Int32 ScreenIndex; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Check(::Class_1_C9DFE5EE7107C629* npc)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_CHECK_OFFSET))(this, npc);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_31* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_RUN_OFFSET))(this, context);
		}

		::MoleMole::TextureSheetData* FindTextureSheetDataByKey(::System::String* key, ::System::Boolean enableLog)
		{
			return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_FINDTEXTURESHEETDATABYKEY_OFFSET))(this, key, enableLog);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_FINISH_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCSTATEACTION_STOP_OFFSET))(this);
		}
	};
}
