#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_3B7B61C15BD82C04;
class Class_1_8D9EF9CF8AE2FD40;
class Class_2_4ADD0419C7E71A92_1;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1855D6B0)
#define MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_ONDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x1855DE00)
#define MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1855D7D0)
#define MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1855D740)
#define MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1855D4B0)
#define MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_REFRESHLIMITICON_OFFSET UNITYSDK_OFFSET(0x1855DE50)
#define MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x1855DA30)
#define MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_SETICONINFO_OFFSET UNITYSDK_OFFSET(0x1855DB20)
#define MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1855DFF0)
#define MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1855E000)
#define MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1855E090)
#define MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1855E130)
#define MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1855E1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBusinessCardRowWidgetController_TypeDefinitionIndex = 79016;

	class UIBusinessCardRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_4ADD0419C7E71A92_1* _view; // 0x2F0
		::Class_1_3B7B61C15BD82C04* rowData; // 0x2F8
		::System::Boolean preNew; // 0x300
		::Class_1_8D9EF9CF8AE2FD40* cardImgHandler; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnDataUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_ONDATAUPDATE_OFFSET))(this);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void SetIconInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_SETICONINFO_OFFSET))(this);
		}

		::System::Void RefreshLimitIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER_REFRESHLIMITICON_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
