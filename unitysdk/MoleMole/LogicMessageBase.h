#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MessageTaskBase.h"

#define MOLEMOLE_LOGICMESSAGEBASE_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x129AC050)
#define MOLEMOLE_LOGICMESSAGEBASE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x129AC040)
#define MOLEMOLE_LOGICMESSAGEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x129AC060)

namespace MoleMole
{
	inline static constexpr unsigned int LogicMessageBase_TypeDefinitionIndex = 50721;

	class LogicMessageBase : public ::MoleMole::MessageTaskBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGICMESSAGEBASE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGICMESSAGEBASE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGICMESSAGEBASE_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}
	};
}
