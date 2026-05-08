#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_75D3976A6C462D53.h"

class Class_2_31A2E0B8098B4B5B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_GET_HASTITLE_OFFSET UNITYSDK_OFFSET(0x15195CB0)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x151959F0)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15195A60)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15195B00)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_REFRESHPLAYERTITLE_OFFSET UNITYSDK_OFFSET(0x15195E90)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_REFRESHSELFTITLE_OFFSET UNITYSDK_OFFSET(0x15195DF0)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15195F70)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15195FD0)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15196070)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemTitleWidgetController_TypeDefinitionIndex = 77974;

	class UIFriendSystemTitleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_31A2E0B8098B4B5B* get__viewModel()
		{
			return ((::Class_2_31A2E0B8098B4B5B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean get_HasTitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_GET_HASTITLE_OFFSET))(this);
		}

		::System::Void RefreshSelfTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_REFRESHSELFTITLE_OFFSET))(this);
		}

		::System::Void RefreshPlayerTitle(::System::UInt32 playerAvatarId, ::Struct_2_75D3976A6C462D53 title)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Struct_2_75D3976A6C462D53))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_REFRESHPLAYERTITLE_OFFSET))(this, playerAvatarId, title);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
