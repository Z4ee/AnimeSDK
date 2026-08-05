#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_48C4D135D5293DF5_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11D4D3F0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_48C4D135D5293DF5_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11D4D510)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_48C4D135D5293DF5_INVOKE_OFFSET UNITYSDK_OFFSET(0x11D4CF80)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_48C4D135D5293DF5__CTOR_OFFSET UNITYSDK_OFFSET(0x11D4CF60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_Class_3_48C4D135D5293DF5_TypeDefinitionIndex = 42950;

	class MonoGamepadVirtualCursor_Class_3_48C4D135D5293DF5 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_48C4D135D5293DF5__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Invoke(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector2 a7)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_48C4D135D5293DF5_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector2 a7, ::System::AsyncCallback* a8, ::System::Object* a9)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_48C4D135D5293DF5_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::UnityEngine::Vector2 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CLASS_3_48C4D135D5293DF5_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
