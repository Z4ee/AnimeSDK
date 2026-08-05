#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_FCF6F00E4C1DE83B;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1897BD70)
#define MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1897BDE0)
#define MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER_SETNUM_OFFSET UNITYSDK_OFFSET(0x1897BEA0)
#define MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1897C140)
#define MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1897C1A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZoneHistoryTagWidgetController_TypeDefinitionIndex = 68929;

	class UIHadalZoneHistoryTagWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_FCF6F00E4C1DE83B* get__viewModel()
		{
			return ((::Class_2_FCF6F00E4C1DE83B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetNum(::System::Int32 num, ::System::Int32 totalNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER_SETNUM_OFFSET))(this, num, totalNum);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONEHISTORYTAGWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
