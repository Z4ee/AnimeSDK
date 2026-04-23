#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Entitas { class IContext; }
namespace Entitas { class IGroup; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ENTITAS_CONTEXTGROUPCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12C514E0)
#define ENTITAS_CONTEXTGROUPCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12C51520)
#define ENTITAS_CONTEXTGROUPCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x12C50F60)
#define ENTITAS_CONTEXTGROUPCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x12C50F40)

namespace Entitas
{
	inline static constexpr unsigned int ContextGroupChanged_TypeDefinitionIndex = 9819;

	class ContextGroupChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTGROUPCHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Entitas::IContext* context, ::Entitas::IGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IGroup*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTGROUPCHANGED_INVOKE_OFFSET))(this, context, group);
		}

		::System::IAsyncResult* BeginInvoke(::Entitas::IContext* context, ::Entitas::IGroup* group, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IGroup*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTGROUPCHANGED_BEGININVOKE_OFFSET))(this, context, group, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTGROUPCHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
