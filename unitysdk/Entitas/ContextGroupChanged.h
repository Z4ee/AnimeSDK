#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Entitas { class IContext; }
namespace Entitas { class IGroup; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ENTITAS_CONTEXTGROUPCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x146FF1E0)
#define ENTITAS_CONTEXTGROUPCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x146FF220)
#define ENTITAS_CONTEXTGROUPCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x146FF1D0)
#define ENTITAS_CONTEXTGROUPCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x146FF0E0)

namespace Entitas
{
	inline static constexpr unsigned int ContextGroupChanged_TypeDefinitionIndex = 9646;

	class ContextGroupChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTGROUPCHANGED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Entitas::IContext* a1, ::Entitas::IGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IGroup*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTGROUPCHANGED_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Entitas::IContext* a1, ::Entitas::IGroup* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IGroup*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTGROUPCHANGED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTGROUPCHANGED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
