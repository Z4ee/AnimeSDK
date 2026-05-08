#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_38D525ECF7D5C15E_Struct_2_B3931940C76432D7_2.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_5927361AA092FB7B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F69FE0)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F6A050)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15F6A0F0)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETGREY_OFFSET UNITYSDK_OFFSET(0x15F6A420)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETPROGRESSDATA_1_OFFSET UNITYSDK_OFFSET(0x15F6A950)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0x15F6A5A0)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETSHOWFINISHONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x15F6A2A0)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F6A9C0)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F6AA20)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15F6AAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilmGuideItemProgressWidgetController_TypeDefinitionIndex = 60065;

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

		::System::Void SetProgressData_1(::Class_2_38D525ECF7D5C15E_Struct_2_B3931940C76432D7_2 progressData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_38D525ECF7D5C15E_Struct_2_B3931940C76432D7_2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETPROGRESSDATA_1_OFFSET))(this, progressData);
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
