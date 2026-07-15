#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17234750)
#define RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x172347A0)
#define RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x172345B0)
#define RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x172346E0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFollow3DTarget_PostProcessDelegate_TypeDefinitionIndex = 66024;

	class UIFollow3DTarget_PostProcessDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Invoke(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFOLLOW3DTARGET_POSTPROCESSDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
