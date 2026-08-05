#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_374;
namespace MoleMole { class SummerEventResultRowContext; }
namespace MoleMole { class UISuumerEventResultPopWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMEREVENTRESULTCONTEXT_ADD_OFFSET UNITYSDK_OFFSET(0x191BA570)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXT_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x191BA600)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x191BA4C0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventResultContext_TypeDefinitionIndex = 91481;

	class SummerEventResultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::SummerEventResultRowContext*>* _rowContexts; // 0x28
		::System::Action* _exit; // 0x30
		::Class_0_16E4307DCC419505_374* _title; // 0x38

		::System::Void _ctor(::Class_0_16E4307DCC419505_374* title, ::System::Action* exit)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_374*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXT__CTOR_OFFSET))(this, title, exit);
		}

		::System::Void Add(::MoleMole::SummerEventResultRowContext* rowContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SummerEventResultRowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXT_ADD_OFFSET))(this, rowContext);
		}

		::System::Void OnUIOpen(::MoleMole::UISuumerEventResultPopWindowController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISuumerEventResultPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXT_ONUIOPEN_OFFSET))(this, controller);
		}
	};
}
