#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UILevelResultDialogPopWindowController.h"

class Class_1_2A09C8C0CD4D6ED4;
namespace MoleMole { class UIBigSceneResultDialogPopWindowControllerContext; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_CREATEDATA_OFFSET UNITYSDK_OFFSET(0x1852DC40)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1852D1C0)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1852CFA0)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1852D0D0)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1852D340)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1852F500)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_CREATEDATA_OFFSET UNITYSDK_OFFSET(0x1852F510)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1852F520)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1852F5D0)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1852F5E0)
#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1852F5F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBigSceneResultDialogPopWindowController_TypeDefinitionIndex = 66804;

	class UIBigSceneResultDialogPopWindowController : public ::MoleMole::UILevelResultDialogPopWindowController
	{
	public:
		::MoleMole::UIBigSceneResultDialogPopWindowControllerContext* _context; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PrepareData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_PREPAREDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_2A09C8C0CD4D6ED4*>* CreateData(::System::UInt32 avatarid)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_2A09C8C0CD4D6ED4*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER_CREATEDATA_OFFSET))(this, avatarid);
		}

		::System::Collections::Generic::List_1<::Class_1_2A09C8C0CD4D6ED4*>* __base_CreateData(::System::UInt32 P0)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_2A09C8C0CD4D6ED4*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_CREATEDATA_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_PrepareData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLER___BASE_PREPAREDATA_OFFSET))(this);
		}
	};
}
