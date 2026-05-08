#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A2DCFB0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A2DD040)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A2DCC70)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2DCC60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_File_OnTransferCompleteHandler_TypeDefinitionIndex = 35201;

	class SecurityTunnel_File_OnTransferCompleteHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean isSuccess, ::Il2CppArray<::System::Byte>* bytes, ::System::String* errorMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER_INVOKE_OFFSET))(this, isSuccess, bytes, errorMsg);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean isSuccess, ::Il2CppArray<::System::Byte>* bytes, ::System::String* errorMsg, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER_BEGININVOKE_OFFSET))(this, isSuccess, bytes, errorMsg, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_ONTRANSFERCOMPLETEHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
