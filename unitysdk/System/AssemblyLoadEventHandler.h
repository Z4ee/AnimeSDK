#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AssemblyLoadEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_ASSEMBLYLOADEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D8AFB00)
#define SYSTEM_ASSEMBLYLOADEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D8AFB40)
#define SYSTEM_ASSEMBLYLOADEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D8AF570)
#define SYSTEM_ASSEMBLYLOADEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AF550)

namespace System
{
	inline static constexpr unsigned int AssemblyLoadEventHandler_TypeDefinitionIndex = 367;

	class AssemblyLoadEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::AssemblyLoadEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::AssemblyLoadEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTHANDLER_INVOKE_OFFSET))(this, sender, args);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::AssemblyLoadEventArgs* args, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AssemblyLoadEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, args, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
