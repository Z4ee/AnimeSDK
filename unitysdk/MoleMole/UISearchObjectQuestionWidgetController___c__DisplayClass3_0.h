#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISearchObjectQuestionWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152B13D0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONCLICKNEXTOREND_B__0_OFFSET UNITYSDK_OFFSET(0x152B13E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectQuestionWidgetController___c__DisplayClass3_0_TypeDefinitionIndex = 72068;

	class UISearchObjectQuestionWidgetController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* correctList; // 0x10
		::MoleMole::UISearchObjectQuestionWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickNextOrEnd_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONCLICKNEXTOREND_B__0_OFFSET))(this);
		}
	};
}
