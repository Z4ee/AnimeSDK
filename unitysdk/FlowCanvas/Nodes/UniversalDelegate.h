#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace FlowCanvas::Nodes { class UniversalDelegateParam; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FLOWCANVAS_NODES_UNIVERSALDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B0AE690)
#define FLOWCANVAS_NODES_UNIVERSALDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B0AE6C0)
#define FLOWCANVAS_NODES_UNIVERSALDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B0AE190)
#define FLOWCANVAS_NODES_UNIVERSALDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0AE180)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UniversalDelegate_TypeDefinitionIndex = 26627;

	class UniversalDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNIVERSALDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::FlowCanvas::Nodes::UniversalDelegateParam*>* delegateParams)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FlowCanvas::Nodes::UniversalDelegateParam*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNIVERSALDELEGATE_INVOKE_OFFSET))(this, delegateParams);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::FlowCanvas::Nodes::UniversalDelegateParam*>* delegateParams, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::FlowCanvas::Nodes::UniversalDelegateParam*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNIVERSALDELEGATE_BEGININVOKE_OFFSET))(this, delegateParams, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNIVERSALDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
