#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/Vec3.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_COMBINECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B8A9940)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_COMBINECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B8A99D0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_COMBINECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B8A94A0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_COMBINECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A9490)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int CombineCallback_TypeDefinitionIndex = 25947;

	class CombineCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_COMBINECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 position, ::Il2CppArray<::System::Object*>* data, ::Il2CppArray<::System::Single>* weights)
		{
			return ((::System::Object*(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_COMBINECALLBACK_INVOKE_OFFSET))(this, position, data, weights);
		}

		::System::IAsyncResult* BeginInvoke(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3 position, ::Il2CppArray<::System::Object*>* data, ::Il2CppArray<::System::Single>* weights, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Vec3, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Single>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_COMBINECALLBACK_BEGININVOKE_OFFSET))(this, position, data, weights, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_COMBINECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
