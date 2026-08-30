#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UICOMBINEDIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0xE347980)
#define RPG_CLIENT_UICOMBINEDIMAGE_HIDE_OFFSET UNITYSDK_OFFSET(0xE3476C0)
#define RPG_CLIENT_UICOMBINEDIMAGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE3479E0)
#define RPG_CLIENT_UICOMBINEDIMAGE_SHOW_OFFSET UNITYSDK_OFFSET(0xE347130)
#define RPG_CLIENT_UICOMBINEDIMAGE__CLEARTEXTURES_OFFSET UNITYSDK_OFFSET(0xE347710)
#define RPG_CLIENT_UICOMBINEDIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE347BB0)
#define RPG_CLIENT_UICOMBINEDIMAGE__GETTEXTUREPROPERTY_OFFSET UNITYSDK_OFFSET(0xE347A40)
#define RPG_CLIENT_UICOMBINEDIMAGE__LOADCOMBINEDTEXTURES_OFFSET UNITYSDK_OFFSET(0xE347370)
#define RPG_CLIENT_UICOMBINEDIMAGE__RELEASECOMBINEDTEXTURES_OFFSET UNITYSDK_OFFSET(0xE347290)
#define RPG_CLIENT_UICOMBINEDIMAGE__SAFEINIT_OFFSET UNITYSDK_OFFSET(0xE3471B0)
#define RPG_CLIENT_UICOMBINEDIMAGE__SETUPTEXTURES_OFFSET UNITYSDK_OFFSET(0xE3474F0)

namespace RPG::Client
{
	inline static constexpr unsigned int UICombinedImage_TypeDefinitionIndex = 69046;

	class UICombinedImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _TEXTURE_POPERTY_PREFIX; // 0x0
		// static const ::System::String* _SHADER_PATH; // 0x0
		// static const ::System::Int32 _MAX_TEXTURE_COUNT = 0x7; // 0x0
		::UnityEngine::UI::Image* _Image; // 0x18
		::UnityEngine::Material* _Material; // 0x20
		::UnityEngine::Shader* _Shader; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* _CombinedTextures; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOMBINEDIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Show(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOMBINEDIMAGE_SHOW_OFFSET))(this, a1);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOMBINEDIMAGE_HIDE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOMBINEDIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOMBINEDIMAGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void _SafeInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOMBINEDIMAGE__SAFEINIT_OFFSET))(this);
		}

		::System::Void _SetupTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOMBINEDIMAGE__SETUPTEXTURES_OFFSET))(this);
		}

		::System::Void _ClearTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOMBINEDIMAGE__CLEARTEXTURES_OFFSET))(this);
		}

		::System::Void _LoadCombinedTextures(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOMBINEDIMAGE__LOADCOMBINEDTEXTURES_OFFSET))(this, a1);
		}

		::System::Void _ReleaseCombinedTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOMBINEDIMAGE__RELEASECOMBINEDTEXTURES_OFFSET))(this);
		}

		::System::String* _GetTextureProperty(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICOMBINEDIMAGE__GETTEXTUREPROPERTY_OFFSET))(this, a1);
		}
	};
}
