#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIQuestionsAnswerPageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS27_0__BACKTOSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x1885E0E0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS27_0__BACKTOSELECT_B__1_OFFSET UNITYSDK_OFFSET(0x1885EF00)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1885E0D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerPageController___c__DisplayClass27_0_TypeDefinitionIndex = 89536;

	class UIQuestionsAnswerPageController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UIQuestionsAnswerPageController* __4__this; // 0x10
		::System::Action_1<::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF>* __9__1; // 0x18
		::System::Boolean isFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _BackToSelect_b__0(::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS27_0__BACKTOSELECT_B__0_OFFSET))(this, reason);
		}

		::System::Void _BackToSelect_b__1(::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF hidereason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS27_0__BACKTOSELECT_B__1_OFFSET))(this, hidereason);
		}
	};
}
