#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define DIGITALOPUS_MB_CORE_PROGRESSUPDATECANCELABLEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BEC93A0)
#define DIGITALOPUS_MB_CORE_PROGRESSUPDATECANCELABLEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BEC9420)
#define DIGITALOPUS_MB_CORE_PROGRESSUPDATECANCELABLEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BEC8E00)
#define DIGITALOPUS_MB_CORE_PROGRESSUPDATECANCELABLEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC8DF0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int ProgressUpdateCancelableDelegate_TypeDefinitionIndex = 85021;

	class ProgressUpdateCancelableDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_PROGRESSUPDATECANCELABLEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* msg, ::System::Single progress)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_PROGRESSUPDATECANCELABLEDELEGATE_INVOKE_OFFSET))(this, msg, progress);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* msg, ::System::Single progress, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_PROGRESSUPDATECANCELABLEDELEGATE_BEGININVOKE_OFFSET))(this, msg, progress, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_PROGRESSUPDATECANCELABLEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
