#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_INTERNAL_INTERNALOPTIONSREGISTRY_ADDOPTIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x19E6DD00)
#define SRDEBUGGER_INTERNAL_INTERNALOPTIONSREGISTRY_SETHANDLER_OFFSET UNITYSDK_OFFSET(0x19E6DD40)
#define SRDEBUGGER_INTERNAL_INTERNALOPTIONSREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19E6DE40)

namespace SRDebugger::Internal
{
	inline static constexpr unsigned int InternalOptionsRegistry_TypeDefinitionIndex = 35468;

	class InternalOptionsRegistry : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* _handler; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _registeredContainers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_INTERNALOPTIONSREGISTRY__CTOR_OFFSET))(this);
		}

		::System::Void AddOptionContainer(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_INTERNALOPTIONSREGISTRY_ADDOPTIONCONTAINER_OFFSET))(this, obj);
		}

		::System::Void SetHandler(::System::Action_1<::System::Object*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SRDEBUGGER_INTERNAL_INTERNALOPTIONSREGISTRY_SETHANDLER_OFFSET))(this, action);
		}
	};
}
