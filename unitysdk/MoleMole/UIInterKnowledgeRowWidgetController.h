#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_1685EC66FBD28897;
class Class_2_1A3197598F874EB7;
class Class_2_79F6D62CE30E3F8E_154;
class KnowledgeData;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_DOGOTRRWARD_OFFSET UNITYSDK_OFFSET(0x184B9D40)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_GETID_OFFSET UNITYSDK_OFFSET(0x184BA910)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_GETSHOWREWARDLIST_OFFSET UNITYSDK_OFFSET(0x184BAA10)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x184BA9C0)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184B9A70)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x184B9D80)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x184B9B00)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184B9CC0)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184B97B0)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x184B9C60)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_SHOWQUESTDETAIL_OFFSET UNITYSDK_OFFSET(0x184BA8D0)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_SHOWUI_OFFSET UNITYSDK_OFFSET(0x184B9F20)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184BAC70)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184BAD00)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x184BAD90)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x184BAE20)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184BAEC0)
#define MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184BAF50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnowledgeRowWidgetController_TypeDefinitionIndex = 85507;

	class UIInterKnowledgeRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_154* _view; // 0x2F0
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* showList; // 0x2F8
		::KnowledgeData* _data; // 0x300
		::Class_2_1A3197598F874EB7* _questModel; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DoGotRrward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_DOGOTRRWARD_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void SetData(::KnowledgeData* data)
		{
			return ((::System::Void(*)(::PVOID, ::KnowledgeData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, data);
		}

		::System::Void ShowQuestDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_SHOWQUESTDETAIL_OFFSET))(this);
		}

		::System::Int32 GetID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_GETID_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_ISEMPTY_OFFSET))(this);
		}

		::System::Void ShowUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_SHOWUI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* GetShowRewardList(::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* dataList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER_GETSHOWREWARDLIST_OFFSET))(this, dataList);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWLEDGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
