#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_D0948460F4810867;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_ONSCENEOPERATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9E9A9C0)
#define RPG_CLIENT_ONSCENEOPERATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9E9A9F0)
#define RPG_CLIENT_ONSCENEOPERATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E9A470)
#define RPG_CLIENT_ONSCENEOPERATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9E9A450)

namespace RPG::Client
{
	inline static constexpr unsigned int OnSceneOperationDelegate_TypeDefinitionIndex = 48077;

	class OnSceneOperationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONSCENEOPERATIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Class_1_D0948460F4810867* assetOpt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D0948460F4810867*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONSCENEOPERATIONDELEGATE_INVOKE_OFFSET))(this, assetOpt);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_D0948460F4810867* assetOpt, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_D0948460F4810867*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONSCENEOPERATIONDELEGATE_BEGININVOKE_OFFSET))(this, assetOpt, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONSCENEOPERATIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
