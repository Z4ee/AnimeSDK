#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineEntityAction.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_43BD383C98B4C0C5_20;
class Class_2_5DF25B7A40A1031E;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class TextureSheetData; }
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x124047B0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION_FINDBLENDTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x124046A0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION_FINDTEXTURESHEETDATABYKEY_OFFSET UNITYSDK_OFFSET(0x12404740)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION_RANDOMTEXTURESHEETKEY_OFFSET UNITYSDK_OFFSET(0x12404600)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION_RUN_OFFSET UNITYSDK_OFFSET(0x12403AF0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x124048F0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x12404900)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridEventEntityAction_TypeDefinitionIndex = 40556;

	class GridEventEntityAction : public ::MoleMole::ChessStateMachine::StateMachineEntityAction
	{
	public:
		::MoleMole::HollowChessboard::RenderDataHandle _renderHandle; // 0x28
		::Class_2_5DF25B7A40A1031E* _actionContext; // 0x38
		::System::Boolean PlayInSubState; // 0x40
		::System::Boolean IsLoop; // 0x41
		::System::Int32 ConfigID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION_ACTIONOVER_OFFSET))(this);
		}

		::MoleMole::TextureSheetData* FindTextureSheetDataByKey(::System::String* key, ::System::Boolean enableLog)
		{
			return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION_FINDTEXTURESHEETDATABYKEY_OFFSET))(this, key, enableLog);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::String*> RandomTextureSheetKey(::System::String* configKey)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION_RANDOMTEXTURESHEETKEY_OFFSET))(this, configKey);
		}

		::MoleMole::BlendTextureSheetData* FindBlendTextureSheetData(::System::String* key)
		{
			return ((::MoleMole::BlendTextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION_FINDBLENDTEXTURESHEETDATA_OFFSET))(this, key);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDEVENTENTITYACTION___BASE_ACTIONOVER_OFFSET))(this);
		}
	};
}
