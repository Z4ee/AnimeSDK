#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/ShowNpcMultiBodyNewAction_RuntimeData.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineEntityAction_1.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_43BD383C98B4C0C5_31;
class Class_1_884860A2FAB24301;
class Class_1_9876AE41D0DC17C7;
class Class_3_7C37C76226C8F3C4;
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole::Config { class ShowNpcMultiBodyParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x12A2F800)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_FINDBLENDTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x12A30DA0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_GETTEXTURESHEETID_OFFSET UNITYSDK_OFFSET(0x12A2F9F0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_HANDLENORMALVIEW_OFFSET UNITYSDK_OFFSET(0x12A2FFF0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_PLAYADDITIVETEXTURE_OFFSET UNITYSDK_OFFSET(0x12A2EE70)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNINTERNAL_OFFSET UNITYSDK_OFFSET(0x12A2E9B0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUN_OFFSET UNITYSDK_OFFSET(0x12A2F240)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_UPDATECACHEDATA_OFFSET UNITYSDK_OFFSET(0x12A2F4C0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x12A2F300)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12A30E30)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION__RUN_OFFSET UNITYSDK_OFFSET(0x12A2EDE0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x12A30E50)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x12A30EE0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x12A30EF0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcMultiBodyNewAction_TypeDefinitionIndex = 70215;

	class ShowNpcMultiBodyNewAction : public ::MoleMole::ChessStateMachine::StateMachineEntityAction_1<::MoleMole::ChessStateMachine::ShowNpcMultiBodyNewAction_RuntimeData>
	{
	public:
		::Class_3_7C37C76226C8F3C4* _actionContext; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ShowNpcMultiBodyParam*>* param; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION__CTOR_OFFSET))(this);
		}

		::System::Void RunInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUNINTERNAL_OFFSET))(this);
		}

		::System::Void PlayAdditiveTexture(::Class_1_9876AE41D0DC17C7* info, ::MoleMole::HollowChessboard::HollowCell index, ::Class_1_884860A2FAB24301* additiveTextureConfig, ::System::Int32 targetRenderPriority)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9876AE41D0DC17C7*, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_884860A2FAB24301*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_PLAYADDITIVETEXTURE_OFFSET))(this, info, index, additiveTextureConfig, targetRenderPriority);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_31* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_RUN_OFFSET))(this, context);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateCacheData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_UPDATECACHEDATA_OFFSET))(this);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Void _Run(::MoleMole::HollowChessboard::HollowCell index, ::MoleMole::Config::ShowNpcMultiBodyParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::Config::ShowNpcMultiBodyParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION__RUN_OFFSET))(this, index, param);
		}

		::Class_1_9876AE41D0DC17C7* GetTextureSheetID(::Class_3_7C37C76226C8F3C4* context, ::MoleMole::Config::ShowNpcMultiBodyParam* param)
		{
			return ((::Class_1_9876AE41D0DC17C7*(*)(::PVOID, ::Class_3_7C37C76226C8F3C4*, ::MoleMole::Config::ShowNpcMultiBodyParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_GETTEXTURESHEETID_OFFSET))(this, context, param);
		}

		::System::Void HandleNormalView(::Class_1_9876AE41D0DC17C7* info, ::MoleMole::HollowChessboard::HollowCell index, ::MoleMole::Config::ShowNpcMultiBodyParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9876AE41D0DC17C7*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::Config::ShowNpcMultiBodyParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_HANDLENORMALVIEW_OFFSET))(this, info, index, param);
		}

		::MoleMole::BlendTextureSheetData* FindBlendTextureSheetData(::System::String* key)
		{
			return ((::MoleMole::BlendTextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION_FINDBLENDTEXTURESHEETDATA_OFFSET))(this, key);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION___BASE_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_31* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION___BASE_RUN_OFFSET))(this, P0);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCMULTIBODYNEWACTION___BASE_UPDATE_OFFSET))(this);
		}
	};
}
