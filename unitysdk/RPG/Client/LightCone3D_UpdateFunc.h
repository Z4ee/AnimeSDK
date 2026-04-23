#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_LIGHTCONE3D_UPDATEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA669C20)
#define RPG_CLIENT_LIGHTCONE3D_UPDATEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA669C50)
#define RPG_CLIENT_LIGHTCONE3D_UPDATEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0xA6698C0)
#define RPG_CLIENT_LIGHTCONE3D_UPDATEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xA669C00)

namespace RPG::Client
{
	inline static constexpr unsigned int LightCone3D_UpdateFunc_TypeDefinitionIndex = 67216;

	class LightCone3D_UpdateFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_UPDATEFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_UPDATEFUNC_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_UPDATEFUNC_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONE3D_UPDATEFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
