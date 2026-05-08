#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_90F86E90A663D1B4;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15005F00)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15005F30)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x15005A00)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x150059F0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext_OnSelectionChanged_TypeDefinitionIndex = 57529;

	class UILineupSelectContext_OnSelectionChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Class_1_90F86E90A663D1B4* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90F86E90A663D1B4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_90F86E90A663D1B4* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_90F86E90A663D1B4*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_ONSELECTIONCHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
