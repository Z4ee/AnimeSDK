#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoInputAnimBlocker.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOINPUTCHILDANIMBLOCKER_ISINPUTHANDLED_OFFSET UNITYSDK_OFFSET(0x178277D0)
#define MOLEMOLE_MONOINPUTCHILDANIMBLOCKER__CTOR_OFFSET UNITYSDK_OFFSET(0x17827890)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInputChildAnimBlocker_TypeDefinitionIndex = 43924;

	class MonoInputChildAnimBlocker : public ::MoleMole::MonoInputAnimBlocker
	{
	public:
		::System::Boolean IsInputHandledByBlocker; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::InputLogicEventType>* ExceptionLogicEventList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTCHILDANIMBLOCKER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsInputHandled(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTCHILDANIMBLOCKER_ISINPUTHANDLED_OFFSET))(this, inputAction);
		}
	};
}
