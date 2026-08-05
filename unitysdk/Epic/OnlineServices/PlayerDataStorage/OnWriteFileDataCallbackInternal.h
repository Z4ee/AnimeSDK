#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/WriteResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C2BB7F0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C2BB8A0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C2BB4C0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BB4A0)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnWriteFileDataCallbackInternal_TypeDefinitionIndex = 36109;

	class OnWriteFileDataCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL__CTOR_OFFSET))(this, object, method);
		}

		::Epic::OnlineServices::PlayerDataStorage::WriteResult Invoke(::System::IntPtr data, ::System::IntPtr outDataBuffer, ::System::UInt32& outDataWritten)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::WriteResult(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL_INVOKE_OFFSET))(this, data, outDataBuffer, outDataWritten);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::IntPtr outDataBuffer, ::System::UInt32& outDataWritten, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, data, outDataBuffer, outDataWritten, callback, object);
		}

		::Epic::OnlineServices::PlayerDataStorage::WriteResult EndInvoke(::System::UInt32& outDataWritten, ::System::IAsyncResult* result)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::WriteResult(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, outDataWritten, result);
		}
	};
}
