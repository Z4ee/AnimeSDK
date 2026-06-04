#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ENTITAS_CONTEXTENTITYCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x146FEDB0)
#define ENTITAS_CONTEXTENTITYCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x146FEDF0)
#define ENTITAS_CONTEXTENTITYCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x146FEDA0)
#define ENTITAS_CONTEXTENTITYCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x146FECB0)

namespace Entitas
{
	inline static constexpr unsigned int ContextEntityChanged_TypeDefinitionIndex = 9645;

	class ContextEntityChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTENTITYCHANGED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTENTITYCHANGED_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Entitas::IContext* a1, ::Entitas::IEntity* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTENTITYCHANGED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ENTITAS_CONTEXTENTITYCHANGED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
