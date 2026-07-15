#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ABBE7E0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ABBE850)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ABBE6E0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABBE770)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_File_OnTransferCompleteHandler_TypeDefinitionIndex = 44652;

	class SecurityTunnel_File_OnTransferCompleteHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
