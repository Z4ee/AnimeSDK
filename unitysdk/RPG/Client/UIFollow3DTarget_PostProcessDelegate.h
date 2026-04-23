#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB3EAD70)
#define RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB3EADC0)
#define RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xB3EA680)
#define RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3EAD50)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFollow3DTarget_PostProcessDelegate_TypeDefinitionIndex = 63702;

	class UIFollow3DTarget_PostProcessDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::Vector3 Invoke(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE_INVOKE_OFFSET))(this, position);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 position, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE_BEGININVOKE_OFFSET))(this, position, callback, object);
		}

		::UnityEngine::Vector3 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
