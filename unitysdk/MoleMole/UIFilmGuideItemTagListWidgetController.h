#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_40B83F449827288B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18053EE0)
#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18053F50)
#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18053FF0)
#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_REFRESHTAGICONLIST_OFFSET UNITYSDK_OFFSET(0x180541B0)
#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18054260)
#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x180542C0)
#define MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18054360)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilmGuideItemTagListWidgetController_TypeDefinitionIndex = 83266;

	class UIFilmGuideItemTagListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_40B83F449827288B* get__viewModel()
		{
			return ((::Class_2_40B83F449827288B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshTagIconList(::System::Collections::Generic::List_1<::System::Int32>* tags, ::System::Boolean isGrey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER_REFRESHTAGICONLIST_OFFSET))(this, tags, isGrey);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMTAGLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
