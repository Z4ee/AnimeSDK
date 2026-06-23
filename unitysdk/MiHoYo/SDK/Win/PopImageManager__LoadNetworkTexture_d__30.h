#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class PopImageManager; }
namespace System { class String; }
namespace System::Security::Cryptography { class MD5; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C3B4A30)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C3B50B0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C3B5110)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C3B50C0)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3B4A20)
#define MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B4A10)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PopImageManager__LoadNetworkTexture_d__30_TypeDefinitionIndex = 21225;

	class PopImageManager__LoadNetworkTexture_d__30 : public ::System::Object
	{
	public:
		::System::String* _name_5__2; // 0x10
		::UnityEngine::Networking::UnityWebRequest* _localRequest_5__1; // 0x18
		::Il2CppArray<::System::Byte>* _pngData_5__4; // 0x20
		::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback; // 0x28
		::System::Security::Cryptography::MD5* _md5_5__6; // 0x30
		::UnityEngine::Texture2D* _image_5__3; // 0x38
		::System::String* _imageMD5_5__5; // 0x40
		::MiHoYo::SDK::Win::PopImageManager* __4__this; // 0x48
		::Il2CppArray<::System::Byte>* _hash_5__7; // 0x50
		::System::String* url; // 0x58
		::System::String* _downloadMD5_5__8; // 0x60
		::System::Object* __2__current; // 0x68
		::System::Int32 __1__state; // 0x70

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
