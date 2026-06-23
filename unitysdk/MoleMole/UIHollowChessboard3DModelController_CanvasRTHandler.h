#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/System/Object.h"

class Class_1_FA793AB1D49D0132;
class Class_5_A6F8D19602712D95;
namespace MoleMole { class NapCanvasScaler; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_ALLOCATERT_OFFSET UNITYSDK_OFFSET(0x16F846F0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_ASSIGNUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x16F84380)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_BINDPIECE_OFFSET UNITYSDK_OFFSET(0x16F83C40)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CLOSEUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x16F841A0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x16F83CD0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CREATEFULLRECTOFPARENT_OFFSET UNITYSDK_OFFSET(0x16F83630)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_DEALLOCATERT_OFFSET UNITYSDK_OFFSET(0x16F84010)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_DESTROY_OFFSET UNITYSDK_OFFSET(0x16F83D80)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GETCANVASSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x16F84C10)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_CANVAS_OFFSET UNITYSDK_OFFSET(0x16F82A10)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_ISASSIGNEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x16F82A70)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x16F82A90)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_RENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x16F829F0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_UIROOTOBJ_OFFSET UNITYSDK_OFFSET(0x16F82A30)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_UIWINDOWCONTROLLER_OFFSET UNITYSDK_OFFSET(0x16F82A50)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_LAZYINIT_OFFSET UNITYSDK_OFFSET(0x16F82AB0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_POSTOPENUI_OFFSET UNITYSDK_OFFSET(0x16F84440)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_CANVAS_OFFSET UNITYSDK_OFFSET(0x16F82A20)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_ISASSIGNEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x16F82A80)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x16F82AA0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_RENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x16F82A00)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_UIROOTOBJ_OFFSET UNITYSDK_OFFSET(0x16F82A40)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_UIWINDOWCONTROLLER_OFFSET UNITYSDK_OFFSET(0x16F82A60)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F84DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController_CanvasRTHandler_TypeDefinitionIndex = 58373;

	class UIHollowChessboard3DModelController_CanvasRTHandler : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _uiRootObj_k__BackingField; // 0x10
		::UnityEngine::GameObject* _rootGo; // 0x18
		::System::Collections::Generic::List_1<::Class_5_A6F8D19602712D95*>* _pieceList; // 0x20
		::UnityEngine::NAPRenderPipeline0::RTHandle* _renderTexture_k__BackingField; // 0x28
		::UnityEngine::Camera* _rtCamera; // 0x30
		::UnityEngine::GameObject* _rtCameraObj; // 0x38
		::MoleMole::UIWindowController* _uiWindowController_k__BackingField; // 0x40
		::MoleMole::NapCanvasScaler* _canvasScaler; // 0x48
		::UnityEngine::Canvas* _canvas_k__BackingField; // 0x50
		::UnityEngine::GameObject* _canvasObj; // 0x58
		::System::Single _cameraHeight; // 0x60
		::System::Single _cameraWidth; // 0x64
		::System::Boolean _IsDestroyed_k__BackingField; // 0x68
		::System::Boolean _isAssignedController_k__BackingField; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* get_renderTexture()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_RENDERTEXTURE_OFFSET))(this);
		}

		::System::Void set_renderTexture(::UnityEngine::NAPRenderPipeline0::RTHandle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RTHandle*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_RENDERTEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::Canvas* get_canvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_CANVAS_OFFSET))(this);
		}

		::System::Void set_canvas(::UnityEngine::Canvas* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_CANVAS_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_uiRootObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_UIROOTOBJ_OFFSET))(this);
		}

		::System::Void set_uiRootObj(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_UIROOTOBJ_OFFSET))(this, value);
		}

		::MoleMole::UIWindowController* get_uiWindowController()
		{
			return ((::MoleMole::UIWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_UIWINDOWCONTROLLER_OFFSET))(this);
		}

		::System::Void set_uiWindowController(::MoleMole::UIWindowController* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_UIWINDOWCONTROLLER_OFFSET))(this, value);
		}

		::System::Boolean get_isAssignedController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_ISASSIGNEDCONTROLLER_OFFSET))(this);
		}

		::System::Void set_isAssignedController(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_ISASSIGNEDCONTROLLER_OFFSET))(this, value);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_SET_ISDESTROYED_OFFSET))(this, value);
		}

		::System::Void LazyInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_LAZYINIT_OFFSET))(this);
		}

		static ::UnityEngine::RectTransform* CreateFullRectOfParent(::UnityEngine::RectTransform* parent, ::System::String* name)
		{
			return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CREATEFULLRECTOFPARENT_OFFSET))(parent, name);
		}

		::System::Void BindPiece(::Class_5_A6F8D19602712D95* piece)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_BINDPIECE_OFFSET))(this, piece);
		}

		::System::Void Close(::Class_5_A6F8D19602712D95* piece)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CLOSE_OFFSET))(this, piece);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_DESTROY_OFFSET))(this);
		}

		::System::Void AssignUIController(::MoleMole::UIWindowController* controller, ::Class_1_FA793AB1D49D0132* openParams, ::MoleMole::UIControllerContextBase* uiControllerContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::Class_1_FA793AB1D49D0132*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_ASSIGNUICONTROLLER_OFFSET))(this, controller, openParams, uiControllerContext);
		}

		::System::Void PostOpenUI(::MoleMole::UIWindowController* uiCtrl, ::Class_1_FA793AB1D49D0132* openParams, ::MoleMole::UIControllerContextBase* uiControllerContext, ::System::Boolean isAssignedController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::Class_1_FA793AB1D49D0132*, ::MoleMole::UIControllerContextBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_POSTOPENUI_OFFSET))(this, uiCtrl, openParams, uiControllerContext, isAssignedController);
		}

		::System::Void CloseUIController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_CLOSEUICONTROLLER_OFFSET))(this);
		}

		::System::Void AllocateRT(::System::Single rtwidth, ::System::Single rtheight, ::System::Boolean needPhysicPixel, ::System::String* uiName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_ALLOCATERT_OFFSET))(this, rtwidth, rtheight, needPhysicPixel, uiName);
		}

		::System::Single GetCanvasScaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_GETCANVASSCALEFACTOR_OFFSET))(this);
		}

		::System::Boolean DeallocateRT()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHANDLER_DEALLOCATERT_OFFSET))(this);
		}
	};
}
