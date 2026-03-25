#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SRDEBUGGER_VISIBILITYCHANGEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18466BF0)
#define SRDEBUGGER_VISIBILITYCHANGEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18466C40)
#define SRDEBUGGER_VISIBILITYCHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18466880)
#define SRDEBUGGER_VISIBILITYCHANGEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18466860)

namespace SRDebugger
{
	inline static constexpr unsigned int VisibilityChangedDelegate_TypeDefinitionIndex = 29611;

	class VisibilityChangedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_VISIBILITYCHANGEDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_VISIBILITYCHANGEDDELEGATE_INVOKE_OFFSET))(this, isVisible);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean isVisible, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_VISIBILITYCHANGEDDELEGATE_BEGININVOKE_OFFSET))(this, isVisible, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_VISIBILITYCHANGEDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
