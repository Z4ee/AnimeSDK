#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIRidusGotBooSetIconInfoWidgetController.h"

class Class_2_208CC9941471731A_870;
namespace System { class Object; }

#define MOLEMOLE_UIRIDUSGOTBOOANIMINFOWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xEB92B50)
#define MOLEMOLE_UIRIDUSGOTBOOANIMINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEB92B00)
#define MOLEMOLE_UIRIDUSGOTBOOANIMINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEB92C10)
#define MOLEMOLE_UIRIDUSGOTBOOANIMINFOWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xEB92C20)
#define MOLEMOLE_UIRIDUSGOTBOOANIMINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEB92C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooAnimInfoWidgetController_TypeDefinitionIndex = 56216;

	class UIRidusGotBooAnimInfoWidgetController : public ::MoleMole::UIRidusGotBooSetIconInfoWidgetController
	{
	public:
		::Class_2_208CC9941471731A_870* _config; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOANIMINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOANIMINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOANIMINFOWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOANIMINFOWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOANIMINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
