#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBD76EA0)
#define RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBD76ED0)
#define RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0xBD76E10)
#define RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xBD76E30)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeZoom_UpdateFunc_TypeDefinitionIndex = 67794;

	class LightConeZoom_UpdateFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEZOOM_UPDATEFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
