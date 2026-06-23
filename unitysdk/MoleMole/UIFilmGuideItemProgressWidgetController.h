#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_38D525ECF7D5C15E_Struct_2_B3931940C76432D7.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_5927361AA092FB7B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16F49AA0)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16F49B10)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16F49BB0)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETGREY_OFFSET UNITYSDK_OFFSET(0x16F49EE0)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETPROGRESSDATA_1_OFFSET UNITYSDK_OFFSET(0x16F4A410)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0x16F4A060)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETSHOWFINISHONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x16F49D60)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4A480)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16F4A4E0)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16F4A580)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilmGuideItemProgressWidgetController_TypeDefinitionIndex = 79755;

	class UIFilmGuideItemProgressWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_5927361AA092FB7B* get__viewModel()
		{
			return ((::Class_2_5927361AA092FB7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetShowFinishOnComplete(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETSHOWFINISHONCOMPLETE_OFFSET))(this, show);
		}

		::System::Void SetGrey(::System::Boolean isGrey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETGREY_OFFSET))(this, isGrey);
		}

		::System::Void SetProgressData(::System::Int32 itemID, ::System::Int32 total, ::System::Int32 obtained)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETPROGRESSDATA_OFFSET))(this, itemID, total, obtained);
		}

		::System::Void SetProgressData_1(::Class_2_38D525ECF7D5C15E_Struct_2_B3931940C76432D7 progressData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_38D525ECF7D5C15E_Struct_2_B3931940C76432D7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETPROGRESSDATA_1_OFFSET))(this, progressData);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
