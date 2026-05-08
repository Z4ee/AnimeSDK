#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_2A0117F72708B5DF;
class Class_2_A06BDAA8775F93B0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_GET_HASMEDAL_OFFSET UNITYSDK_OFFSET(0x162BC5C0)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162BC2F0)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162BC360)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x162BC400)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_REFRESHPLAYERMEDAL_OFFSET UNITYSDK_OFFSET(0x162BC700)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_REFRESHSELFMEDAL_OFFSET UNITYSDK_OFFSET(0x162BC7B0)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162BC860)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x162BC8C0)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x162BC960)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemMedalWidgetController_TypeDefinitionIndex = 81064;

	class UIFriendSystemMedalWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_A06BDAA8775F93B0* get__viewModel()
		{
			return ((::Class_2_A06BDAA8775F93B0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean get_HasMedal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_GET_HASMEDAL_OFFSET))(this);
		}

		::System::Void RefreshPlayerMedal(::System::Collections::Generic::List_1<::Class_1_2A0117F72708B5DF*>* medalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2A0117F72708B5DF*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_REFRESHPLAYERMEDAL_OFFSET))(this, medalData);
		}

		::System::Void RefreshSelfMedal(::System::Collections::Generic::List_1<::Class_1_2A0117F72708B5DF*>* medalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2A0117F72708B5DF*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_REFRESHSELFMEDAL_OFFSET))(this, medalData);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
