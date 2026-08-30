#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACKINTERNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB3AAAA0)
#define EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACKINTERNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB3AAAF0)
#define EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACKINTERNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0xB3AAA90)
#define EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACKINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AAA20)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int OnEnumerateModsCallbackInternal_TypeDefinitionIndex = 45624;

	class OnEnumerateModsCallbackInternal : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACKINTERNAL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACKINTERNAL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACKINTERNAL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_ONENUMERATEMODSCALLBACKINTERNAL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
