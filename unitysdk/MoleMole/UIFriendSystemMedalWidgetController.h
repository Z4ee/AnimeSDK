#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_6B9BA8441E94A95A;
class Class_2_DA65C0ABCFBB06E5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_GET_HASMEDAL_OFFSET UNITYSDK_OFFSET(0x16DBAAC0)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16DBA7F0)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16DBA860)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16DBA900)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_REFRESHPLAYERMEDAL_OFFSET UNITYSDK_OFFSET(0x16DBAC00)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_REFRESHSELFMEDAL_OFFSET UNITYSDK_OFFSET(0x16DBACB0)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBAD60)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16DBADC0)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16DBAE60)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemMedalWidgetController_TypeDefinitionIndex = 61354;

	class UIFriendSystemMedalWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_DA65C0ABCFBB06E5* get__viewModel()
		{
			return ((::Class_2_DA65C0ABCFBB06E5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
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

		::System::Void RefreshPlayerMedal(::System::Collections::Generic::List_1<::Class_1_6B9BA8441E94A95A*>* medalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_6B9BA8441E94A95A*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_REFRESHPLAYERMEDAL_OFFSET))(this, medalData);
		}

		::System::Void RefreshSelfMedal(::System::Collections::Generic::List_1<::Class_1_6B9BA8441E94A95A*>* medalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_6B9BA8441E94A95A*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_REFRESHSELFMEDAL_OFFSET))(this, medalData);
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
