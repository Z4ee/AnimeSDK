#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_48D56DACBE4271BC;
class Class_2_EC28E1D3A39EE7DE_15;
class Class_3_2CBAA1B7A86535B9;
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x122AEBD0)
#define MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x122AEC40)
#define MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x122AECE0)
#define MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x122AF000)
#define MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER__ONUIINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x122AF060)
#define MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x122AF7C0)
#define MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x122AF860)

namespace MoleMole
{
	inline static constexpr unsigned int UISimpleParkourNodeWidgetController_TypeDefinitionIndex = 50269;

	class UISimpleParkourNodeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2C0
		::Class_3_2CBAA1B7A86535B9* _model; // 0x2C8
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_EC28E1D3A39EE7DE_15* get__viewModel()
		{
			return ((::Class_2_EC28E1D3A39EE7DE_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER__ONUIINIT_B__6_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURNODEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
