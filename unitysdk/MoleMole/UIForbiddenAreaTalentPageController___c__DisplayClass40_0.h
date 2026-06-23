#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIForbiddenAreaTalentPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16790E70)
#define MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTROLLER___C__DISPLAYCLASS40_0__ONCLICKRESETBTN_B__1_OFFSET UNITYSDK_OFFSET(0x16790E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaTalentPageController___c__DisplayClass40_0_TypeDefinitionIndex = 68755;

	class UIForbiddenAreaTalentPageController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::MoleMole::UIForbiddenAreaTalentPageController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* prevTalentList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickResetBtn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREATALENTPAGECONTROLLER___C__DISPLAYCLASS40_0__ONCLICKRESETBTN_B__1_OFFSET))(this);
		}
	};
}
