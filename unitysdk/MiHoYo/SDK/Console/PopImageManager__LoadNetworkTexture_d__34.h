#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class PopImageManager; }
namespace System { class String; }
namespace System::Security::Cryptography { class MD5; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CDF6F70)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CDF7570)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CDF75D0)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CDF7580)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CDF6F60)
#define MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF6F50)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PopImageManager__LoadNetworkTexture_d__34_TypeDefinitionIndex = 21083;

	class PopImageManager__LoadNetworkTexture_d__34 : public ::System::Object
	{
	public:
		::System::String* _imageMD5_5__3; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Events::UnityAction_1<::UnityEngine::Texture2D*>* callback; // 0x20
		::UnityEngine::Texture2D* _image_5__2; // 0x28
		::MiHoYo::SDK::Console::PopImageManager* __4__this; // 0x30
		::System::Security::Cryptography::MD5* _md5_5__4; // 0x38
		::Il2CppArray<::System::Byte>* _hash_5__5; // 0x40
		::UnityEngine::Networking::UnityWebRequest* _localRequest_5__1; // 0x48
		::System::String* url; // 0x50
		::System::String* _downloadMD5_5__6; // 0x58
		::System::Int32 __1__state; // 0x60

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_POPIMAGEMANAGER__LOADNETWORKTEXTURE_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
