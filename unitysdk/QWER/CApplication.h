#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CFutex; }
namespace QWER { class CRunner; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Threading { class Thread; }
namespace System::Threading::Tasks { class Task; }

#define QWER_CAPPLICATION_EXIT_OFFSET UNITYSDK_OFFSET(0x1BE84EC0)
#define QWER_CAPPLICATION_GET_EXITCODE_OFFSET UNITYSDK_OFFSET(0x1BE84EB0)
#define QWER_CAPPLICATION_RUNINNEWTHREAD_OFFSET UNITYSDK_OFFSET(0x1BE85830)
#define QWER_CAPPLICATION_RUN_OFFSET UNITYSDK_OFFSET(0x1BE84FD0)
#define QWER_CAPPLICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE85E40)
#define QWER_CAPPLICATION__EXIT_OFFSET UNITYSDK_OFFSET(0x1BE85D80)
#define QWER_CAPPLICATION__RUN_OFFSET UNITYSDK_OFFSET(0x1BE85150)

namespace QWER
{
	inline static constexpr unsigned int CApplication_TypeDefinitionIndex = 85839;

	class CApplication : public ::System::Object
	{
	public:
		::QWER::CRunner* m_oRunner; // 0x10
		::System::Threading::Tasks::Task* m_oExitTask; // 0x18
		::QWER::CFutex* m_oFutex; // 0x20
		::System::Action* m_cbOnExit; // 0x28
		::System::Int32 m_dwExitCode; // 0x30
		::System::Boolean m_bToExist; // 0x34
		::System::Boolean m_bExited; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CAPPLICATION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ExitCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CAPPLICATION_GET_EXITCODE_OFFSET))(this);
		}

		::System::Void Exit(::System::Int32 dwExitCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CAPPLICATION_EXIT_OFFSET))(this, dwExitCode);
		}

		::System::Void Run(::System::String* strName, ::System::Action* cbOnExit)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + QWER_CAPPLICATION_RUN_OFFSET))(this, strName, cbOnExit);
		}

		::System::Threading::Thread* RunInNewThread(::System::String* strName, ::System::Action* cbOnExit)
		{
			return ((::System::Threading::Thread*(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + QWER_CAPPLICATION_RUNINNEWTHREAD_OFFSET))(this, strName, cbOnExit);
		}

		::System::Void _Run()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CAPPLICATION__RUN_OFFSET))(this);
		}

		::System::Void _Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CAPPLICATION__EXIT_OFFSET))(this);
		}
	};
}
