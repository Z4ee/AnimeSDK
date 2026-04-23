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

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ADD_ERROR_OFFSET UNITYSDK_OFFSET(0x19E776E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ADD_UPDATED_OFFSET UNITYSDK_OFFSET(0x19E80F50)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ADJUSTCOUNTER_OFFSET UNITYSDK_OFFSET(0x19E81760)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_CLEAR_OFFSET UNITYSDK_OFFSET(0x19E811A0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19E80E20)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_ALLENTRIES_OFFSET UNITYSDK_OFFSET(0x19E81190)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x19E81170)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_ERRORCOUNT_OFFSET UNITYSDK_OFFSET(0x19E80EF0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_INFOCOUNT_OFFSET UNITYSDK_OFFSET(0x19E80F30)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_LOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x19E81050)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_LOGHANDLERISOVERRIDEN_OFFSET UNITYSDK_OFFSET(0x19E81110)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_WARNINGCOUNT_OFFSET UNITYSDK_OFFSET(0x19E80F10)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ONENTRYADDED_OFFSET UNITYSDK_OFFSET(0x19E81390)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ONENTRYDUPLICATED_OFFSET UNITYSDK_OFFSET(0x19E817B0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ONUPDATED_OFFSET UNITYSDK_OFFSET(0x19E81340)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_REMOVE_ERROR_OFFSET UNITYSDK_OFFSET(0x19E778E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_REMOVE_UPDATED_OFFSET UNITYSDK_OFFSET(0x19E80FD0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_ERRORCOUNT_OFFSET UNITYSDK_OFFSET(0x19E80F00)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_INFOCOUNT_OFFSET UNITYSDK_OFFSET(0x19E80F40)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_LOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x19E810B0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_WARNINGCOUNT_OFFSET UNITYSDK_OFFSET(0x19E80F20)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_UNITYLOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x19E81900)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E80BA0)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int StandardConsoleService_TypeDefinitionIndex = 35454;

	class StandardConsoleService : public ::System::Object
	{
	public:
		::UnityEngine::ILogHandler* _expectedLogHandler; // 0x10
		::SRDebugger::Services::ConsoleUpdatedEventHandler* Updated; // 0x18
		::SRDebugger::CircularBuffer_1<::SRDebugger::Services::ConsoleEntry*>* _consoleEntries; // 0x20
		::System::Object* _threadLock; // 0x28
		::SRDebugger::CircularBuffer_1<::SRDebugger::Services::ConsoleEntry*>* _allConsoleEntries; // 0x30
		::SRDebugger::Services::ConsoleUpdatedEventHandler* Error; // 0x38
		::System::Int32 _InfoCount_k__BackingField; // 0x40
		::System::Boolean _hasCleared; // 0x44
		::System::Boolean _collapseEnabled; // 0x45
		::System::Int32 _WarningCount_k__BackingField; // 0x48
		::System::Int32 _ErrorCount_k__BackingField; // 0x4C

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

		::System::Void set_ErrorCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_ERRORCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_WarningCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_WARNINGCOUNT_OFFSET))(this);
		}

		::System::Void set_WarningCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_WARNINGCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_InfoCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_INFOCOUNT_OFFSET))(this);
		}

		::System::Void set_InfoCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_INFOCOUNT_OFFSET))(this, value);
		}

		::System::Void add_Updated(::SRDebugger::Services::ConsoleUpdatedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleUpdatedEventHandler*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ADD_UPDATED_OFFSET))(this, value);
		}

		::System::Void remove_Updated(::SRDebugger::Services::ConsoleUpdatedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleUpdatedEventHandler*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_REMOVE_UPDATED_OFFSET))(this, value);
		}

		::System::Void add_Error(::SRDebugger::Services::ConsoleUpdatedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleUpdatedEventHandler*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ADD_ERROR_OFFSET))(this, value);
		}

		::System::Void remove_Error(::SRDebugger::Services::ConsoleUpdatedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleUpdatedEventHandler*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_REMOVE_ERROR_OFFSET))(this, value);
		}

		::System::Boolean get_LoggingEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_GET_LOGGINGENABLED_OFFSET))(this);
		}

		::System::Void set_LoggingEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_SET_LOGGINGENABLED_OFFSET))(this, value);
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

		::System::Void OnEntryAdded(::SRDebugger::Services::ConsoleEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleEntry*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ONENTRYADDED_OFFSET))(this, entry);
		}

		::System::Void OnEntryDuplicated(::SRDebugger::Services::ConsoleEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleEntry*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ONENTRYDUPLICATED_OFFSET))(this, entry);
		}

		::System::Void OnUpdated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ONUPDATED_OFFSET))(this);
		}

		::System::Void UnityLogCallback(::System::String* condition, ::System::String* stackTrace, ::UnityEngine::LogType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_UNITYLOGCALLBACK_OFFSET))(this, condition, stackTrace, type);
		}

		::System::Void AdjustCounter(::UnityEngine::LogType type, ::System::Int32 amount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LogType, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_STANDARDCONSOLESERVICE_ADJUSTCOUNTER_OFFSET))(this, type, amount);
		}
	};
}
