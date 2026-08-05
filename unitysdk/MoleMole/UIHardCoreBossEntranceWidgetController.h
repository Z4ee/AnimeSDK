#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_4C04FA90C66EB9E4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x190E6FA0)
#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x190E7010)
#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x190E70B0)
#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_SETENTRANCEVIDEOFOCUS_OFFSET UNITYSDK_OFFSET(0x190E7310)
#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x190E73C0)
#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x190E7420)
#define MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x190E74C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossEntranceWidgetController_TypeDefinitionIndex = 83463;

	class UIHardCoreBossEntranceWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Int32 PrepEntranceSlotIndex; // 0x2C0
		::System::Action_1<::System::Int32>* OnClickEntranceCallback; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_4C04FA90C66EB9E4* get__viewModel()
		{
			return ((::Class_2_4C04FA90C66EB9E4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetEntranceVideoFocus(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER_SETENTRANCEVIDEOFOCUS_OFFSET))(this, focus);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSENTRANCEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
