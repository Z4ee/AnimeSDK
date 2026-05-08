#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_9A12E68A23700F38;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_GET_IMAGESIZE_OFFSET UNITYSDK_OFFSET(0x13E30C90)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_GET_STICKERID_OFFSET UNITYSDK_OFFSET(0x13E30DC0)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_GET_STICKERINDEX_OFFSET UNITYSDK_OFFSET(0x13E30F10)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_GET_STICKERRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x13E30D50)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x13E31060)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13E30C20)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x11B5C050)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13E31120)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x11B5BE50)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11B5BC00)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_STARTDRAG_OFFSET UNITYSDK_OFFSET(0x11B5C110)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11B5BF60)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11B5C1D0)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11B5C230)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x11B5C2D0)
#define MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11B5C360)

namespace MoleMole
{
	inline static constexpr unsigned int UIStickerShowWidgetController_TypeDefinitionIndex = 79032;

	class UIStickerShowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_9A12E68A23700F38* get__viewModel()
		{
			return ((::Class_2_9A12E68A23700F38*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_ImageSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_GET_IMAGESIZE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_StickerRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_GET_STICKERRECTTRANSFORM_OFFSET))(this);
		}

		::System::Int32 get_StickerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_GET_STICKERID_OFFSET))(this);
		}

		::System::Int32 get_StickerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_GET_STICKERINDEX_OFFSET))(this);
		}

		::System::Boolean get_Visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean hasFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, hasFocus);
		}

		::System::Void StartDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER_STARTDRAG_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTICKERSHOWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
