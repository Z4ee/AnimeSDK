#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace SRDebugger { template <typename T> class CircularBuffer_1; }
namespace SRDebugger { template <typename T> class IReadOnlyList_1; }
namespace SRDebugger::Services { class ConsoleEntry; }
namespace SRDebugger::Services { class ConsoleUpdatedEventHandler; }
namespace System { class String; }
namespace UnityEngine { class ILogHandler; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ADD_ERROR_OFFSET UNITYSDK_OFFSET(0x1BDA51E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ADD_UPDATED_OFFSET UNITYSDK_OFFSET(0x1BDAF780)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ADJUSTCOUNTER_OFFSET UNITYSDK_OFFSET(0x1BDAFDE0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BDAF9D0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BDAF650)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_ALLENTRIES_OFFSET UNITYSDK_OFFSET(0x1BDAF9C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x1BDAF9A0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_ERRORCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDAF720)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_INFOCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDAF760)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_LOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x1BDAF880)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_LOGHANDLERISOVERRIDEN_OFFSET UNITYSDK_OFFSET(0x1BDAF940)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_WARNINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDAF740)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ONENTRYADDED_OFFSET UNITYSDK_OFFSET(0x1BDAFBA0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ONENTRYDUPLICATED_OFFSET UNITYSDK_OFFSET(0x1BDAFE40)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ONUPDATED_OFFSET UNITYSDK_OFFSET(0x1BDAFB50)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_REMOVE_ERROR_OFFSET UNITYSDK_OFFSET(0x1BDA5410)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_REMOVE_UPDATED_OFFSET UNITYSDK_OFFSET(0x1BDAF800)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_ERRORCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDAF730)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_INFOCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDAF770)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_LOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x1BDAF8E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_WARNINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDAF750)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_UNITYLOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BDAFF90)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDAF430)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int StandardConsoleService_TypeDefinitionIndex = 37395;

	class StandardConsoleService : public ::System::Object
	{
	public:
		::SRDebugger::CircularBuffer_1<::SRDebugger::Services::ConsoleEntry*>* _allConsoleEntries; // 0x10
		::SRDebugger::Services::ConsoleUpdatedEventHandler* Error; // 0x18
		::System::Object* _threadLock; // 0x20
		::UnityEngine::ILogHandler* _expectedLogHandler; // 0x28
		::SRDebugger::Services::ConsoleUpdatedEventHandler* Updated; // 0x30
		::SRDebugger::CircularBuffer_1<::SRDebugger::Services::ConsoleEntry*>* _consoleEntries; // 0x38
		::System::Int32 _ErrorCount_k__BackingField; // 0x40
		::System::Int32 _WarningCount_k__BackingField; // 0x44
		::System::Boolean _hasCleared; // 0x48
		::System::Boolean _collapseEnabled; // 0x49
		::System::Int32 _InfoCount_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_ErrorCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_ERRORCOUNT_OFFSET))(this);
		}

		::System::Void set_ErrorCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_ERRORCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_WarningCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_WARNINGCOUNT_OFFSET))(this);
		}

		::System::Void set_WarningCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_WARNINGCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_InfoCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_INFOCOUNT_OFFSET))(this);
		}

		::System::Void set_InfoCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_INFOCOUNT_OFFSET))(this, a1);
		}

		::System::Void add_Updated(::SRDebugger::Services::ConsoleUpdatedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleUpdatedEventHandler*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ADD_UPDATED_OFFSET))(this, a1);
		}

		::System::Void remove_Updated(::SRDebugger::Services::ConsoleUpdatedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleUpdatedEventHandler*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_REMOVE_UPDATED_OFFSET))(this, a1);
		}

		::System::Void add_Error(::SRDebugger::Services::ConsoleUpdatedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleUpdatedEventHandler*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ADD_ERROR_OFFSET))(this, a1);
		}

		::System::Void remove_Error(::SRDebugger::Services::ConsoleUpdatedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleUpdatedEventHandler*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_REMOVE_ERROR_OFFSET))(this, a1);
		}

		::System::Boolean get_LoggingEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_LOGGINGENABLED_OFFSET))(this);
		}

		::System::Void set_LoggingEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_LOGGINGENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_LogHandlerIsOverriden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_LOGHANDLERISOVERRIDEN_OFFSET))(this);
		}

		::SRDebugger::IReadOnlyList_1<::SRDebugger::Services::ConsoleEntry*>* get_Entries()
		{
			return ((::SRDebugger::IReadOnlyList_1<::SRDebugger::Services::ConsoleEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_ENTRIES_OFFSET))(this);
		}

		::SRDebugger::IReadOnlyList_1<::SRDebugger::Services::ConsoleEntry*>* get_AllEntries()
		{
			return ((::SRDebugger::IReadOnlyList_1<::SRDebugger::Services::ConsoleEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_ALLENTRIES_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_CLEAR_OFFSET))(this);
		}

		::System::Void OnEntryAdded(::SRDebugger::Services::ConsoleEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleEntry*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ONENTRYADDED_OFFSET))(this, a1);
		}

		::System::Void OnEntryDuplicated(::SRDebugger::Services::ConsoleEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleEntry*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ONENTRYDUPLICATED_OFFSET))(this, a1);
		}

		::System::Void OnUpdated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ONUPDATED_OFFSET))(this);
		}

		::System::Void UnityLogCallback(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_UNITYLOGCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AdjustCounter(::UnityEngine::LogType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ADJUSTCOUNTER_OFFSET))(this, a1, a2);
		}
	};
}
