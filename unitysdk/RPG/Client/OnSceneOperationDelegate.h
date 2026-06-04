#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_D0948460F4810867;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_ONSCENEOPERATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC2F50B0)
#define RPG_CLIENT_ONSCENEOPERATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC2F50E0)
#define RPG_CLIENT_ONSCENEOPERATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xC2F50A0)
#define RPG_CLIENT_ONSCENEOPERATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC2F4FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnSceneOperationDelegate_TypeDefinitionIndex = 55549;

	class OnSceneOperationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONSCENEOPERATIONDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Class_1_D0948460F4810867* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D0948460F4810867*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONSCENEOPERATIONDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_D0948460F4810867* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_D0948460F4810867*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONSCENEOPERATIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONSCENEOPERATIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
