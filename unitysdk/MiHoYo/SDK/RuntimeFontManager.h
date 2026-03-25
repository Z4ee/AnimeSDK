#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_RUNTIMEFONTMANAGER_ADDRUNTIMEFONTREF_OFFSET UNITYSDK_OFFSET(0x15FE29D0)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_FORCEUNLOADFONT_OFFSET UNITYSDK_OFFSET(0x15FE38B0)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_GETNOWMILLISEC_OFFSET UNITYSDK_OFFSET(0x15FE38E0)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15FE2590)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_LOADFONT_OFFSET UNITYSDK_OFFSET(0x15FE3A60)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_LOADRUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x15FE29E0)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_RECORDALLFONTNAMES_OFFSET UNITYSDK_OFFSET(0x15FE26A0)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_RELEASERUNTIMEFONTREF_OFFSET UNITYSDK_OFFSET(0x15FE38A0)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_TRYGETRUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x15FE35C0)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_TRYSETUPRUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x15FE2610)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_TRYUNLOADRUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x15FE3600)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_UNLOADUNUSEDFONT_OFFSET UNITYSDK_OFFSET(0x15FE3070)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER_USERUNTIMEFONT_OFFSET UNITYSDK_OFFSET(0x15FE2680)
#define MIHOYO_SDK_RUNTIMEFONTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE2600)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RuntimeFontManager_TypeDefinitionIndex = 7256;

	class RuntimeFontManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::RuntimeFontManager** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::RuntimeFontManager**)Il2CppClass::FromTypeDefinitionIndex(RuntimeFontManager_TypeDefinitionIndex)->GetStaticField(0x18770);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Font*>* m_lstExpiredFont; // 0x10
		::UnityEngine::Font* m_runtimeFont; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* m_lstAllFontNames; // 0x20
		::System::Int32 m_nRuntimeFontRefCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::RuntimeFontManager* get_Instance()
		{
			return ((::MiHoYo::SDK::RuntimeFontManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void TrySetupRuntimeFont(::UnityEngine::GameObject* fontParentObj, ::System::String* strFontKey)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_TRYSETUPRUNTIMEFONT_OFFSET))(this, fontParentObj, strFontKey);
		}

		::UnityEngine::Font* TryGetRuntimeFont()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_TRYGETRUNTIMEFONT_OFFSET))(this);
		}

		::System::Void TryUnloadRuntimeFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_TRYUNLOADRUNTIMEFONT_OFFSET))(this);
		}

		::System::Void AddRuntimeFontRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_ADDRUNTIMEFONTREF_OFFSET))(this);
		}

		::System::Void UnloadUnusedFont()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_UNLOADUNUSEDFONT_OFFSET))(this);
		}

		::System::Void LoadRuntimeFont(::System::String* strFontKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_LOADRUNTIMEFONT_OFFSET))(this, strFontKey);
		}

		::System::Void RecordAllFontNames(::UnityEngine::GameObject* sdkGameObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_RECORDALLFONTNAMES_OFFSET))(this, sdkGameObj);
		}

		::System::Void ReleaseRuntimeFontRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_RELEASERUNTIMEFONTREF_OFFSET))(this);
		}

		::UnityEngine::Font* LoadFont(::System::String* strFontName)
		{
			return ((::UnityEngine::Font*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_LOADFONT_OFFSET))(this, strFontName);
		}

		::System::Void ForceUnloadFont(::UnityEngine::Font* font)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_FORCEUNLOADFONT_OFFSET))(this, font);
		}

		::System::Boolean UseRuntimeFont()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_USERUNTIMEFONT_OFFSET))(this);
		}

		::System::Int64 GetNowMillisec()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_RUNTIMEFONTMANAGER_GETNOWMILLISEC_OFFSET))(this);
		}
	};
}
