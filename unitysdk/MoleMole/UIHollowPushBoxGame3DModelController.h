#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"

class Class_1_0C791B68CB2A5BF5;
class Class_2_23D9BB4D5379D91C_4;
class Class_2_C03EC65F99EF4B16;
class Class_2_F5737224A0253470;
class PushBoxGameView;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_GETREFRT_OFFSET UNITYSDK_OFFSET(0x14689820)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_GET_ATMASTERPOS_OFFSET UNITYSDK_OFFSET(0x14689260)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_GET_CHESSBOARDINDEX_OFFSET UNITYSDK_OFFSET(0x14689280)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_GET_CHESSBOARD_OFFSET UNITYSDK_OFFSET(0x146892A0)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_GET_ISMOVEACTION_OFFSET UNITYSDK_OFFSET(0x1468A610)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_GET_SECTIONUID_OFFSET UNITYSDK_OFFSET(0x14689240)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_INITCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x14688840)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1468AB70)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONFINISHGRAPH_OFFSET UNITYSDK_OFFSET(0x1468A5B0)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONHOLLOWGRIDUPDATE_OFFSET UNITYSDK_OFFSET(0x14689900)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONHOLLOWPUSHBACK_OFFSET UNITYSDK_OFFSET(0x146893E0)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONNPCUPDATE_OFFSET UNITYSDK_OFFSET(0x146899D0)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1468AC00)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1468A620)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1468A980)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_PLAYFULLSCREENTEXTURE_OFFSET UNITYSDK_OFFSET(0x1468AB00)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_REFRESHPLAYERAPPEARANCE_OFFSET UNITYSDK_OFFSET(0x14689870)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_REFRESHPLAYERPOS_OFFSET UNITYSDK_OFFSET(0x14689740)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_SETGAMERT_OFFSET UNITYSDK_OFFSET(0x146897A0)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_SETLASTMOVE_OFFSET UNITYSDK_OFFSET(0x1468A550)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_SET_ATMASTERPOS_OFFSET UNITYSDK_OFFSET(0x14689270)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_SET_CHESSBOARDINDEX_OFFSET UNITYSDK_OFFSET(0x14689290)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_SET_ISMOVEACTION_OFFSET UNITYSDK_OFFSET(0x1468A600)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_SET_SECTIONUID_OFFSET UNITYSDK_OFFSET(0x14689250)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x146892B0)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1468AE90)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1468AE20)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER__ONNPCUPDATE_G____ISBALLNPC_27_0_OFFSET UNITYSDK_OFFSET(0x1468A4B0)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1468AF10)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1468AFA0)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1468AFB0)
#define MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1468AFC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowPushBoxGame3DModelController_TypeDefinitionIndex = 49990;

	class UIHollowPushBoxGame3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_BALL_LIST()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowPushBoxGame3DModelController_TypeDefinitionIndex)->GetStaticField(0x37E50);
		}
		::Class_2_23D9BB4D5379D91C_4* _view; // 0x358
		::Struct_2_90E529DB4DCB014F _SectionUID_k__BackingField; // 0x360
		::System::Int32 _AtMasterPos_k__BackingField; // 0x368
		::System::Int32 _ChessboardIndex_k__BackingField; // 0x36C
		::Class_1_0C791B68CB2A5BF5* spriteResourceProxy; // 0x370
		::Class_2_C03EC65F99EF4B16* _eventModel; // 0x378
		::Class_2_F5737224A0253470* _hollowModel; // 0x380
		::UnityEngine::RenderTexture* _rtRef; // 0x388
		::System::Boolean _npcMoveFinishHitWall; // 0x390
		::System::Boolean _npcMoveFinishHitWallCalculated; // 0x391
		::System::Boolean _IsMoveAction_k__BackingField; // 0x392
		::PushBoxGameView* _viewPushBoxGame; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::Struct_2_90E529DB4DCB014F get_SectionUID()
		{
			return ((::Struct_2_90E529DB4DCB014F(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_GET_SECTIONUID_OFFSET))(this);
		}

		::System::Void set_SectionUID(::Struct_2_90E529DB4DCB014F value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_90E529DB4DCB014F))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_SET_SECTIONUID_OFFSET))(this, value);
		}

		::System::Int32 get_AtMasterPos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_GET_ATMASTERPOS_OFFSET))(this);
		}

		::System::Void set_AtMasterPos(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_SET_ATMASTERPOS_OFFSET))(this, value);
		}

		::System::Int32 get_ChessboardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_GET_CHESSBOARDINDEX_OFFSET))(this);
		}

		::System::Void set_ChessboardIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_SET_CHESSBOARDINDEX_OFFSET))(this, value);
		}

		::PushBoxGameView* get_Chessboard()
		{
			return ((::PushBoxGameView*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_GET_CHESSBOARD_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnHollowPushBack(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONHOLLOWPUSHBACK_OFFSET))(this, args);
		}

		::System::Void SetGameRT(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_SETGAMERT_OFFSET))(this, rt);
		}

		::UnityEngine::RenderTexture* GetRefRT()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_GETREFRT_OFFSET))(this);
		}

		::System::Void RefreshPlayerPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_REFRESHPLAYERPOS_OFFSET))(this);
		}

		::System::Void RefreshPlayerAppearance(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_REFRESHPLAYERAPPEARANCE_OFFSET))(this, key);
		}

		::System::Void OnHollowGridUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONHOLLOWGRIDUPDATE_OFFSET))(this, args);
		}

		::System::Void OnNpcUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONNPCUPDATE_OFFSET))(this, args);
		}

		::System::Void SetLastMove(::System::Boolean isMove)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_SETLASTMOVE_OFFSET))(this, isMove);
		}

		::System::Void OnFinishGraph(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONFINISHGRAPH_OFFSET))(this, args);
		}

		::System::Void set_IsMoveAction(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_SET_ISMOVEACTION_OFFSET))(this, value);
		}

		::System::Boolean get_IsMoveAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_GET_ISMOVEACTION_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitChessboard(::Struct_2_90E529DB4DCB014F sectionId, ::MoleMole::HollowChessboard::HollowChessboardUID chessboardUid)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_90E529DB4DCB014F, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_INITCHESSBOARD_OFFSET))(this, sectionId, chessboardUid);
		}

		::System::Void PlayFullScreenTexture(::System::String* textureSheetKey, ::UnityEngine::Events::UnityAction* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_PLAYFULLSCREENTEXTURE_OFFSET))(this, textureSheetKey, onEnd);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		static ::System::Boolean _OnNpcUpdate_g____isBallNPC_27_0(::System::Int32 npcId)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER__ONNPCUPDATE_G____ISBALLNPC_27_0_OFFSET))(npcId);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWPUSHBOXGAME3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
