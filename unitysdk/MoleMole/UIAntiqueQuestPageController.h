#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_F653362AD843854C;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x175963F0)
#define MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17596400)
#define MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17596470)
#define MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17596510)
#define MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17596630)
#define MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17596640)
#define MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x175966E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAntiqueQuestPageController_TypeDefinitionIndex = 45510;

	class UIAntiqueQuestPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_F653362AD843854C* get__viewModel()
		{
			return ((::Class_2_F653362AD843854C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEQUESTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}
	};
}
