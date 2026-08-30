#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define MONO_RUNTIME_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x16DF54E0)
#define MONO_RUNTIME_GETNATIVESTACKTRACE_OFFSET UNITYSDK_OFFSET(0x16DF5500)
#define MONO_RUNTIME_INSTALLSIGNALHANDLERS_OFFSET UNITYSDK_OFFSET(0x16DF54B0)
#define MONO_RUNTIME_MONO_RUNTIME_CLEANUP_HANDLERS_OFFSET UNITYSDK_OFFSET(0x16DF54C0)
#define MONO_RUNTIME_MONO_RUNTIME_INSTALL_HANDLERS_OFFSET UNITYSDK_OFFSET(0x16DF54A0)
#define MONO_RUNTIME_REMOVESIGNALHANDLERS_OFFSET UNITYSDK_OFFSET(0x16DF54D0)
#define MONO_RUNTIME_SETGCALLOWSYNCHRONOUSMAJOR_OFFSET UNITYSDK_OFFSET(0x16DF5510)

namespace Mono
{
	inline static constexpr unsigned int Runtime_TypeDefinitionIndex = 4;

	class Runtime : public ::System::Object
	{
	public:
		static ::System::Void mono_runtime_install_handlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_RUNTIME_MONO_RUNTIME_INSTALL_HANDLERS_OFFSET))();
		}

		static ::System::Void InstallSignalHandlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_RUNTIME_INSTALLSIGNALHANDLERS_OFFSET))();
		}

		static ::System::Void mono_runtime_cleanup_handlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_RUNTIME_MONO_RUNTIME_CLEANUP_HANDLERS_OFFSET))();
		}

		static ::System::Void RemoveSignalHandlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_RUNTIME_REMOVESIGNALHANDLERS_OFFSET))();
		}

		static ::System::String* GetDisplayName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MONO_RUNTIME_GETDISPLAYNAME_OFFSET))();
		}

		static ::System::String* GetNativeStackTrace(::System::Exception* a1)
		{
			return ((::System::String*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + MONO_RUNTIME_GETNATIVESTACKTRACE_OFFSET))(a1);
		}

		static ::System::Boolean SetGCAllowSynchronousMajor(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MONO_RUNTIME_SETGCALLOWSYNCHRONOUSMAJOR_OFFSET))(a1);
		}
	};
}
