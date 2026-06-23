#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_C3735B7FBAD6404D;
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CONTENTTITLE_OFFSET UNITYSDK_OFFSET(0x1467CC40)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1467CC50)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_DIALOGTITLE_OFFSET UNITYSDK_OFFSET(0x1467CC30)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_VIDEOPATH_OFFSET UNITYSDK_OFFSET(0x1467CC20)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1467CFC0)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1467CC60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralVideoInfoDialogPopWindowController_Context_TypeDefinitionIndex = 69512;

	class UIGeneralVideoInfoDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::String*>* _Content_k__BackingField; // 0x28
		::Class_0_16E4307DCC419505_165<::System::String*>* _VideoPath_k__BackingField; // 0x30
		::Class_0_16E4307DCC419505_165<::System::String*>* _ContentTitle_k__BackingField; // 0x38
		::Class_0_16E4307DCC419505_165<::System::String*>* _DialogTitle_k__BackingField; // 0x40
		::Class_1_C3735B7FBAD6404D* _propertyAllocateHelper; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* dialogTitle, ::System::String* contentTitle, ::System::String* content, ::System::String* videoPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_1_OFFSET))(this, dialogTitle, contentTitle, content, videoPath);
		}

		::Class_0_16E4307DCC419505_165<::System::String*>* get_VideoPath()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_VIDEOPATH_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_165<::System::String*>* get_DialogTitle()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_DIALOGTITLE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_165<::System::String*>* get_ContentTitle()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CONTENTTITLE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_165<::System::String*>* get_Content()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CONTENT_OFFSET))(this);
		}
	};
}
