#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_631;
namespace MoleMole { class SummerEventResultRowContext; }
namespace MoleMole { class UISuumerEventResultPopWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SUMMEREVENTRESULTCONTEXT_ADD_OFFSET UNITYSDK_OFFSET(0x15E5BD30)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXT_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E5BDC0)
#define MOLEMOLE_SUMMEREVENTRESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5BC90)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventResultContext_TypeDefinitionIndex = 80231;

	class SummerEventResultContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* _exit; // 0x28
		::Class_0_16E4307DCC419505_631* _title; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::SummerEventResultRowContext*>* _rowContexts; // 0x38

		::System::Void _ctor(::Class_0_16E4307DCC419505_631* title, ::System::Action* exit)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_631*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTRESULTCONTEXT__CTOR_OFFSET))(this, title, exit);
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
