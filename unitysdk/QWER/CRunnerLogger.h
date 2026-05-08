#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/ELogLevel.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CRunnerLoggerImpl; }
namespace QWER { class ILogPrinter; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Threading::Tasks { class Task; }

#define QWER_CRUNNERLOGGER_ADDLOGPRINTER_OFFSET UNITYSDK_OFFSET(0x1BE897D0)
#define QWER_CRUNNERLOGGER_DISABLEPREFIX_OFFSET UNITYSDK_OFFSET(0x1BE895D0)
#define QWER_CRUNNERLOGGER_ENABLEPREFIX_OFFSET UNITYSDK_OFFSET(0x1BE891D0)
#define QWER_CRUNNERLOGGER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1BE89D20)
#define QWER_CRUNNERLOGGER_PRINT_1_OFFSET UNITYSDK_OFFSET(0x1BE8A170)
#define QWER_CRUNNERLOGGER_PRINT_OFFSET UNITYSDK_OFFSET(0x1BE89FC0)
#define QWER_CRUNNERLOGGER_SETCURDATETIMEFUNC_OFFSET UNITYSDK_OFFSET(0x1BE8A6E0)
#define QWER_CRUNNERLOGGER_SETLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x1BE89B20)
#define QWER_CRUNNERLOGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE8A8D0)

namespace QWER
{
	inline static constexpr unsigned int CRunnerLogger_TypeDefinitionIndex = 85858;

	class CRunnerLogger : public ::System::Object
	{
	public:
		static ::Il2CppArray<::QWER::CRunnerLoggerImpl*>** StaticGet_m_oImpls()
		{
			return (::Il2CppArray<::QWER::CRunnerLoggerImpl*>**)Il2CppClass::FromTypeDefinitionIndex(CRunnerLogger_TypeDefinitionIndex)->GetStaticField(0x4ABE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGER__CCTOR_OFFSET))();
		}

		static ::System::Void EnablePrefix(::System::UInt16 dwLoggerIndex)
		{
			return ((::System::Void(*)(::System::UInt16))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGER_ENABLEPREFIX_OFFSET))(dwLoggerIndex);
		}

		static ::System::Void DisablePrefix(::System::UInt16 dwLoggerIndex)
		{
			return ((::System::Void(*)(::System::UInt16))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGER_DISABLEPREFIX_OFFSET))(dwLoggerIndex);
		}

		static ::System::Void AddLogPrinter(::System::Func_1<::QWER::ILogPrinter*>* cbCreateLogPrinter, ::System::UInt16 dwLoggerIndex)
		{
			return ((::System::Void(*)(::System::Func_1<::QWER::ILogPrinter*>*, ::System::UInt16))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGER_ADDLOGPRINTER_OFFSET))(cbCreateLogPrinter, dwLoggerIndex);
		}

		static ::System::Void SetLogLevel(::QWER::ELogLevel eLogLevel, ::System::UInt16 dwLoggerIndex)
		{
			return ((::System::Void(*)(::QWER::ELogLevel, ::System::UInt16))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGER_SETLOGLEVEL_OFFSET))(eLogLevel, dwLoggerIndex);
		}

		static ::System::Threading::Tasks::Task* Flush(::System::UInt16 dwLoggerIndex)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGER_FLUSH_OFFSET))(dwLoggerIndex);
		}

		static ::System::Void Print(::QWER::ELogLevel eLogLevel, ::System::Func_1<::System::String*>* cbLog, ::System::UInt16 dwLoggerIndex, ::System::String* strCallerFilePath, ::System::String* strCallerMemberName, ::System::Int32 dwCallerLineNumber)
		{
			return ((::System::Void(*)(::QWER::ELogLevel, ::System::Func_1<::System::String*>*, ::System::UInt16, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGER_PRINT_OFFSET))(eLogLevel, cbLog, dwLoggerIndex, strCallerFilePath, strCallerMemberName, dwCallerLineNumber);
		}

		static ::System::Void Print_1(::QWER::ELogLevel eLogLevel, ::System::String* strLog, ::System::UInt16 dwLoggerIndex, ::System::String* strCallerFilePath, ::System::String* strCallerMemberName, ::System::Int32 dwCallerLineNumber)
		{
			return ((::System::Void(*)(::QWER::ELogLevel, ::System::String*, ::System::UInt16, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGER_PRINT_1_OFFSET))(eLogLevel, strLog, dwLoggerIndex, strCallerFilePath, strCallerMemberName, dwCallerLineNumber);
		}

		static ::System::Void SetCurDateTimeFunc(::System::Func_1<::System::DateTimeOffset>* cbGetDateTime, ::System::UInt16 dwLoggerIndex)
		{
			return ((::System::Void(*)(::System::Func_1<::System::DateTimeOffset>*, ::System::UInt16))((::PBYTE)hIl2Cpp + QWER_CRUNNERLOGGER_SETCURDATETIMEFUNC_OFFSET))(cbGetDateTime, dwLoggerIndex);
		}
	};
}
