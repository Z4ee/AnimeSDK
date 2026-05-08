#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_480;
class Class_2_4E304963EFC1C1E1_Class_2_385A368C07384AA3;
namespace MoleMole { class UIDisplayCaseManualPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157DF4E0)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS17_0__REFRESHLEFT_B__0_OFFSET UNITYSDK_OFFSET(0x157DF4F0)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS17_0__REFRESHLEFT_B__1_OFFSET UNITYSDK_OFFSET(0x157DF820)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseManualPageController___c__DisplayClass17_0_TypeDefinitionIndex = 52826;

	class UIDisplayCaseManualPageController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::Class_2_4E304963EFC1C1E1_Class_2_385A368C07384AA3* view; // 0x10
		::MoleMole::UIDisplayCaseManualPageController* __4__this; // 0x18
		::Foundation::AssetPath prefab; // 0x20
		::System::Action* __9__1; // 0x30
		::Class_2_208CC9941471731A_480* cfg; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLeft_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS17_0__REFRESHLEFT_B__0_OFFSET))(this);
		}

		::System::Void _RefreshLeft_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS17_0__REFRESHLEFT_B__1_OFFSET))(this);
		}
	};
}
