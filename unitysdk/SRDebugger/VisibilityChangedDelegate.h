#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SRDEBUGGER_VISIBILITYCHANGEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AD17860)
#define SRDEBUGGER_VISIBILITYCHANGEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AD178B0)
#define SRDEBUGGER_VISIBILITYCHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AD17850)
#define SRDEBUGGER_VISIBILITYCHANGEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD177E0)

namespace SRDebugger
{
	inline static constexpr unsigned int VisibilityChangedDelegate_TypeDefinitionIndex = 35631;

	class VisibilityChangedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_VISIBILITYCHANGEDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_VISIBILITYCHANGEDDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_VISIBILITYCHANGEDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_VISIBILITYCHANGEDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
