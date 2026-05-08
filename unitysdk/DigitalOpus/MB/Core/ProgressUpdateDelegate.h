#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define DIGITALOPUS_MB_CORE_PROGRESSUPDATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C4E3E10)
#define DIGITALOPUS_MB_CORE_PROGRESSUPDATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C4E3E90)
#define DIGITALOPUS_MB_CORE_PROGRESSUPDATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C4E3870)
#define DIGITALOPUS_MB_CORE_PROGRESSUPDATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4E3860)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int ProgressUpdateDelegate_TypeDefinitionIndex = 85020;

	class ProgressUpdateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_PROGRESSUPDATEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* msg, ::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_PROGRESSUPDATEDELEGATE_INVOKE_OFFSET))(this, msg, progress);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* msg, ::System::Single progress, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_PROGRESSUPDATEDELEGATE_BEGININVOKE_OFFSET))(this, msg, progress, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_PROGRESSUPDATEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
