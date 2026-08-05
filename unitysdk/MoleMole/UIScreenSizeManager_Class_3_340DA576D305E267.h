#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UISCREENSIZEMANAGER_CLASS_3_340DA576D305E267_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13005B80)
#define MOLEMOLE_UISCREENSIZEMANAGER_CLASS_3_340DA576D305E267_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13005BF0)
#define MOLEMOLE_UISCREENSIZEMANAGER_CLASS_3_340DA576D305E267_INVOKE_OFFSET UNITYSDK_OFFSET(0x13005860)
#define MOLEMOLE_UISCREENSIZEMANAGER_CLASS_3_340DA576D305E267__CTOR_OFFSET UNITYSDK_OFFSET(0x13005840)

namespace MoleMole
{
	inline static constexpr unsigned int UIScreenSizeManager_Class_3_340DA576D305E267_TypeDefinitionIndex = 69652;

	class UIScreenSizeManager_Class_3_340DA576D305E267 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_CLASS_3_340DA576D305E267__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_CLASS_3_340DA576D305E267_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_CLASS_3_340DA576D305E267_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_CLASS_3_340DA576D305E267_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
