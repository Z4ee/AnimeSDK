#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/TextureSheetVEBase.h"

class Class_1_43BD383C98B4C0C5_31;
class Class_1_9876AE41D0DC17C7;
class Class_2_88153825858EC9D2;
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x134E6E70)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_GET_GETSCREENINDEX_OFFSET UNITYSDK_OFFSET(0x134E6D60)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_HANDLENORMALVIEW_OFFSET UNITYSDK_OFFSET(0x134E6D10)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_RUN_OFFSET UNITYSDK_OFFSET(0x134E6CA0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_TEXTURECALLBACK_OFFSET UNITYSDK_OFFSET(0x134E6DB0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x134E70C0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION___BASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x134E70D0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION___BASE_RUN_OFFSET UNITYSDK_OFFSET(0x134E7160)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowNpcBodyAnimAction_TypeDefinitionIndex = 73283;

	class ShowNpcBodyAnimAction : public ::MoleMole::ChessStateMachine::TextureSheetVEBase
	{
	public:
		::Class_2_88153825858EC9D2* _actionContext; // 0x28
		::System::String* RefTextureSheet; // 0x30
		::System::String* TextureSheet; // 0x38
		::System::Int32 npcid; // 0x40
		::System::Int32 ScreenIndex; // 0x44
		::System::Boolean NeedUseOffset; // 0x48
		::System::Boolean UseAsset; // 0x49
		::System::Boolean ClearSwitchEffectIfAnim; // 0x4A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_31* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_RUN_OFFSET))(this, context);
		}

		::System::Void HandleNormalView(::Class_1_9876AE41D0DC17C7* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9876AE41D0DC17C7*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_HANDLENORMALVIEW_OFFSET))(this, info);
		}

		::System::Int32 get_GetScreenIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_GET_GETSCREENINDEX_OFFSET))(this);
		}

		::System::Void TextureCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_TEXTURECALLBACK_OFFSET))(this);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION___BASE_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_Run(::Class_1_43BD383C98B4C0C5_31* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_31*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWNPCBODYANIMACTION___BASE_RUN_OFFSET))(this, P0);
		}
	};
}
