#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C9269CF301C32EEF.h"
#include "unitysdk/MoleMole/ChessStateMachine/ShowNpcBodyNewAction_RuntimeData.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineEntityAction_1.h"

class Class_1_43BD383C98B4C0C5_31;
class Class_1_9876AE41D0DC17C7;
class Class_3_7C37C76226C8F3C4;
namespace MoleMole { class BlendTextureSheetData; }
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x162468E0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_FINDBLENDTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x16246850)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_GETTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x16245640)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_HANDLENORMALVIEW_OFFSET UNITYSDK_OFFSET(0x16245C70)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUN_OFFSET UNITYSDK_OFFSET(0x16245680)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x16246A50)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16246D60)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x16246D70)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x16246E00)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x16246E10)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcBodyNewAction_TypeDefinitionIndex = 86086;

	class ShowNpcBodyNewAction : public ::MoleMole::ChessStateMachine::StateMachineEntityAction_1<::MoleMole::ChessStateMachine::ShowNpcBodyNewAction_RuntimeData>
	{
	public:
		::System::String* RefTextureSheet; // 0x48
		::Class_3_7C37C76226C8F3C4* _actionContext; // 0x50
		::System::String* TextureSheet; // 0x58
		::System::Boolean NeedUseOffset; // 0x60
		::System::Boolean useBehavior; // 0x61
		::System::Boolean ClearSwitchEffectIfAnim; // 0x62
		::System::Boolean UseAsset; // 0x63
		::System::Int32 ScreenIndex; // 0x64
		::Enum_3_C9269CF301C32EEF entityType; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION__CTOR_OFFSET))(this);
		}

		::System::String* GetTextureSheet()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_GETTEXTURESHEET_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_31* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_RUN_OFFSET))(this, context);
		}

		::System::Void HandleNormalView(::Class_1_9876AE41D0DC17C7* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9876AE41D0DC17C7*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_HANDLENORMALVIEW_OFFSET))(this, info);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_UPDATE_OFFSET))(this);
		}

		::MoleMole::BlendTextureSheetData* FindBlendTextureSheetData(::System::String* key)
		{
			return ((::MoleMole::BlendTextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION_FINDBLENDTEXTURESHEETDATA_OFFSET))(this, key);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_31* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_RUN_OFFSET))(this, P0);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYNEWACTION___BASE_UPDATE_OFFSET))(this);
		}
	};
}
