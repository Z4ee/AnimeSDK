#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class PopImageManager; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADTEXTURE_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D4C81C0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADTEXTURE_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4C8390)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADTEXTURE_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D4C83F0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADTEXTURE_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D4C83A0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADTEXTURE_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D4C81B0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADTEXTURE_D__28__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C81A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PopImageManager__LoadTexture_d__28_TypeDefinitionIndex = 21571;

	class PopImageManager__LoadTexture_d__28 : public ::System::Object
	{
	public:
		::System::String* _name_5__1; // 0x10
		::System::String* url; // 0x18
		::System::Object* __2__current; // 0x20
		::MiHoYo::SDK::Win::PopImageManager* __4__this; // 0x28
		::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADTEXTURE_D__28__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADTEXTURE_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADTEXTURE_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADTEXTURE_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADTEXTURE_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADTEXTURE_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
