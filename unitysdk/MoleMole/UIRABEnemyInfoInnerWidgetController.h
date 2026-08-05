#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_9A4D825B1E3761F9;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABEnemyInfoInnerWidgetController_Context; }

#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17489EF0)
#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17489F60)
#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1748A000)
#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1748A0B0)
#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1748A2A0)
#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1748A300)
#define MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1748A3A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABEnemyInfoInnerWidgetController_TypeDefinitionIndex = 63581;

	class UIRABEnemyInfoInnerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_9A4D825B1E3761F9* get__viewModel()
		{
			return ((::Class_2_9A4D825B1E3761F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetContext(::MoleMole::UIRABEnemyInfoInnerWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABEnemyInfoInnerWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER_SETCONTEXT_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABENEMYINFOINNERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
