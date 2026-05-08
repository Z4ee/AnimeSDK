#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/ELogLevel.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CThreadGroup; }
namespace System { class String; }
namespace System::Threading::Tasks { class Task; }

#define QWER_CDEFAULTLOGPRINTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BE861D0)
#define QWER_CDEFAULTLOGPRINTER_QWER_ILOGPRINTER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1BE869C0)
#define QWER_CDEFAULTLOGPRINTER_QWER_ILOGPRINTER_PRINT_OFFSET UNITYSDK_OFFSET(0x1BE86D70)
#define QWER_CDEFAULTLOGPRINTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE863D0)
#define QWER_CDEFAULTLOGPRINTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE863C0)

namespace QWER
{
	inline static constexpr unsigned int CDefaultLogPrinter_TypeDefinitionIndex = 85842;

	class CDefaultLogPrinter : public ::System::Object
	{
	public:
		static ::QWER::CDefaultLogPrinter** StaticGet_m_oInstance()
		{
			return (::QWER::CDefaultLogPrinter**)Il2CppClass::FromTypeDefinitionIndex(CDefaultLogPrinter_TypeDefinitionIndex)->GetStaticField(0x4ABB0);
		}
		static ::System::Object** StaticGet_m_oMutex()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CDefaultLogPrinter_TypeDefinitionIndex)->GetStaticField(0x4ABB8);
		}
		static ::QWER::CThreadGroup** StaticGet_m_oThreadGroup()
		{
			return (::QWER::CThreadGroup**)Il2CppClass::FromTypeDefinitionIndex(CDefaultLogPrinter_TypeDefinitionIndex)->GetStaticField(0x4ABC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + QWER_CDEFAULTLOGPRINTER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CDEFAULTLOGPRINTER__CTOR_OFFSET))(this);
		}

		static ::QWER::CDefaultLogPrinter* get_Instance()
		{
			return ((::QWER::CDefaultLogPrinter*(*)())((::PBYTE)hIl2Cpp + QWER_CDEFAULTLOGPRINTER_GET_INSTANCE_OFFSET))();
		}

		::System::Threading::Tasks::Task* QWER_ILogPrinter_Flush()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CDEFAULTLOGPRINTER_QWER_ILOGPRINTER_FLUSH_OFFSET))(this);
		}

		::System::Void QWER_ILogPrinter_Print(::QWER::ELogLevel eLogLevel, ::System::String* strLog)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::ELogLevel, ::System::String*))((::PBYTE)hIl2Cpp + QWER_CDEFAULTLOGPRINTER_QWER_ILOGPRINTER_PRINT_OFFSET))(this, eLogLevel, strLog);
		}
	};
}
