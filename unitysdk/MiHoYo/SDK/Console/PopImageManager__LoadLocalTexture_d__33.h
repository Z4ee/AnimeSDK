#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class PopImageManager; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__33_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BDC5390)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BDC5440)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BDC54A0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BDC5450)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__33_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BDC5380)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__33__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC5370)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PopImageManager__LoadLocalTexture_d__33_TypeDefinitionIndex = 21082;

	class PopImageManager__LoadLocalTexture_d__33 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback; // 0x10
		::System::String* url; // 0x18
		::System::Object* __2__current; // 0x20
		::MiHoYo::SDK::Console::PopImageManager* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__33__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__33_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__33_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__33_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADLOCALTEXTURE_D__33_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
