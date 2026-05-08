#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1B85226610A5D17C;
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CONTENTTITLE_OFFSET UNITYSDK_OFFSET(0x1466B7A0)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1466B7B0)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_DIALOGTITLE_OFFSET UNITYSDK_OFFSET(0x1466B790)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_VIDEOPATH_OFFSET UNITYSDK_OFFSET(0x1466B780)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1466BA80)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1466B7C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralVideoInfoDialogPopWindowController_Context_TypeDefinitionIndex = 67816;

	class UIGeneralVideoInfoDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC41950C_13<::System::String*>* _DialogTitle_k__BackingField; // 0x28
		::Class_1_1B85226610A5D17C* _propertyAllocateHelper; // 0x30
		::Class_0_16E4307DCC41950C_13<::System::String*>* _Content_k__BackingField; // 0x38
		::Class_0_16E4307DCC41950C_13<::System::String*>* _VideoPath_k__BackingField; // 0x40
		::Class_0_16E4307DCC41950C_13<::System::String*>* _ContentTitle_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* dialogTitle, ::System::String* contentTitle, ::System::String* content, ::System::String* videoPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_1_OFFSET))(this, dialogTitle, contentTitle, content, videoPath);
		}

		::Class_0_16E4307DCC41950C_13<::System::String*>* get_VideoPath()
		{
			return ((::Class_0_16E4307DCC41950C_13<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_VIDEOPATH_OFFSET))(this);
		}

		::Class_0_16E4307DCC41950C_13<::System::String*>* get_DialogTitle()
		{
			return ((::Class_0_16E4307DCC41950C_13<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_DIALOGTITLE_OFFSET))(this);
		}

		::Class_0_16E4307DCC41950C_13<::System::String*>* get_ContentTitle()
		{
			return ((::Class_0_16E4307DCC41950C_13<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CONTENTTITLE_OFFSET))(this);
		}

		::Class_0_16E4307DCC41950C_13<::System::String*>* get_Content()
		{
			return ((::Class_0_16E4307DCC41950C_13<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CONTENT_OFFSET))(this);
		}
	};
}
