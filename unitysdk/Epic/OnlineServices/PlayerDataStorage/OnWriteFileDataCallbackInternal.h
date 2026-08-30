#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PlayerDataStorage/WriteResult.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB3C72B0)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB3C7340)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0xB3C7290)
#define EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xB3C7220)

namespace Epic::OnlineServices::PlayerDataStorage
{
	inline static constexpr unsigned int OnWriteFileDataCallbackInternal_TypeDefinitionIndex = 45514;

	class OnWriteFileDataCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL__CTOR_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::PlayerDataStorage::WriteResult Invoke(::System::IntPtr a1, ::System::IntPtr a2, ::System::UInt32& a3)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::WriteResult(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::IntPtr a2, ::System::UInt32& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Epic::OnlineServices::PlayerDataStorage::WriteResult EndInvoke(::System::UInt32& a1, ::System::IAsyncResult* a2)
		{
			return ((::Epic::OnlineServices::PlayerDataStorage::WriteResult(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLAYERDATASTORAGE_ONWRITEFILEDATACALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
