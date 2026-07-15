#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AssemblyLoadEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_ASSEMBLYLOADEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AD2A5C0)
#define SYSTEM_ASSEMBLYLOADEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AD2A600)
#define SYSTEM_ASSEMBLYLOADEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AD2A5B0)
#define SYSTEM_ASSEMBLYLOADEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD2A4C0)

namespace System
{
	inline static constexpr unsigned int AssemblyLoadEventHandler_TypeDefinitionIndex = 378;

	class AssemblyLoadEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::AssemblyLoadEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::AssemblyLoadEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AssemblyLoadEventArgs* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AssemblyLoadEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_ASSEMBLYLOADEVENTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
