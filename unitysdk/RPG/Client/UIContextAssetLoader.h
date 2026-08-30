#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { class UIContextAssetLoader_AsyncAssetCache; }
namespace RPG::Client { template <typename T> class FlagSwitch_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UICONTEXTASSETLOADER_AFTERFLAGPUSHED_OFFSET UNITYSDK_OFFSET(0xE34A880)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADMATERIALTO_OFFSET UNITYSDK_OFFSET(0xE349370)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0xE348D10)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADTEXTURETO_OFFSET UNITYSDK_OFFSET(0xE3496F0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASEMATERIALIN_OFFSET UNITYSDK_OFFSET(0xE349660)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASESPRITEIN_OFFSET UNITYSDK_OFFSET(0xE349140)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASETEXTUREIN_OFFSET UNITYSDK_OFFSET(0xE3499E0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ENABLEFLAGSWITCH_OFFSET UNITYSDK_OFFSET(0xE34A9B0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ISFLAGPUSED_OFFSET UNITYSDK_OFFSET(0xE34A950)
#define RPG_CLIENT_UICONTEXTASSETLOADER_LOADMATERIALTO_OFFSET UNITYSDK_OFFSET(0xE3485E0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_LOADSPRITETO_OFFSET UNITYSDK_OFFSET(0xE3483C0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_LOADTEXTURETO_OFFSET UNITYSDK_OFFSET(0xE3486C0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ONFLAGCALLBACK_OFFSET UNITYSDK_OFFSET(0xE34A7C0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_RELEASEALL_OFFSET UNITYSDK_OFFSET(0xE347F80)
#define RPG_CLIENT_UICONTEXTASSETLOADER_RELEASEMATERIALIN_OFFSET UNITYSDK_OFFSET(0xE348BF0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_RELEASESPRITEIN_OFFSET UNITYSDK_OFFSET(0xE348A50)
#define RPG_CLIENT_UICONTEXTASSETLOADER_RELEASETEXTUREIN_OFFSET UNITYSDK_OFFSET(0xE348C80)
#define RPG_CLIENT_UICONTEXTASSETLOADER_SETFLAGCALLBACK_OFFSET UNITYSDK_OFFSET(0xE34A830)
#define RPG_CLIENT_UICONTEXTASSETLOADER_TRYLOADEFFECTTO_OFFSET UNITYSDK_OFFSET(0xE348800)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ADDASSETTOCACHEPOOL_1_OFFSET UNITYSDK_OFFSET(0xE3491E0)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ADDASSETTOCACHEPOOL_OFFSET UNITYSDK_OFFSET(0xE3484A0)
#define RPG_CLIENT_UICONTEXTASSETLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0xE347BF0)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADMATERIAL_OFFSET UNITYSDK_OFFSET(0xE34A0E0)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADSPRITE_OFFSET UNITYSDK_OFFSET(0xE349DD0)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADTEXTURE_OFFSET UNITYSDK_OFFSET(0xE34A410)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEEFFECTPOOL_OFFSET UNITYSDK_OFFSET(0xE3482A0)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEPOOL_1_OFFSET UNITYSDK_OFFSET(0xE348130)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEPOOL_OFFSET UNITYSDK_OFFSET(0xE348010)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASEONEASSETINCACHEPOOL_1_OFFSET UNITYSDK_OFFSET(0xE349A70)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASEONEASSETINCACHEPOOL_OFFSET UNITYSDK_OFFSET(0xE348AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIContextAssetLoader_TypeDefinitionIndex = 72947;

	class UIContextAssetLoader : public ::System::Object
	{
	public:
		// static const ::System::String* IMG_NULL_ERR_MSG; // 0x0
		// static const ::System::String* PNG_EXT; // 0x0
		// static const ::System::String* SPRITE_NULL_ERR_MSG; // 0x0
		// static const ::System::String* MAT_EXT; // 0x0
		// static const ::System::String* MAT_NULL_ERR_MSG; // 0x0
		// static const ::System::String* TEXTURE_NULL_ERR_MSG; // 0x0
		// static const ::System::String* PREFAB_EXT; // 0x0
		// static const ::System::String* PREFAB_NULL_ERR_MSG; // 0x0
		// static const ::System::String* _FLAG_FORMAT; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* _CachedTextureInImages; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* _CachedSpriteInImages; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>* _AsyncCachedSpriteInImages; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>* _AsyncCachedMaterialInImages; // 0x28
		::System::Action* flagCallback; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _CachedEffect; // 0x38
		::RPG::Client::FlagSwitch_1<::System::Int64>* flagSwitch; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* _CachedMaterialInImages; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>* _AsyncCachedTextureInImages; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__CTOR_OFFSET))(this);
		}

		::System::Void ReleaseAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_RELEASEALL_OFFSET))(this);
		}

		::System::Void LoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_LOADSPRITETO_OFFSET))(this, a1, a2);
		}

		::System::Void LoadMaterialTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_LOADMATERIALTO_OFFSET))(this, a1, a2);
		}

		::System::Void LoadTextureTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_LOADTEXTURETO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* TryLoadEffectTo(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_TRYLOADEFFECTTO_OFFSET))(this, a1, a2);
		}

		::System::Void ReleaseSpriteIn(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_RELEASESPRITEIN_OFFSET))(this, a1);
		}

		::System::Void ReleaseMaterialIn(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_RELEASEMATERIALIN_OFFSET))(this, a1);
		}

		::System::Void ReleaseTextureIn(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_RELEASETEXTUREIN_OFFSET))(this, a1);
		}

		::System::Void AsyncLoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADSPRITETO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AsyncLoadMaterialTo(::UnityEngine::UI::Image* a1, ::System::String* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADMATERIALTO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AsyncLoadTextureTo(::UnityEngine::UI::Image* a1, ::System::String* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADTEXTURETO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AsyncReleaseSpriteIn(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASESPRITEIN_OFFSET))(this, a1);
		}

		::System::Void AsyncReleaseMaterialIn(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASEMATERIALIN_OFFSET))(this, a1);
		}

		::System::Void AsyncReleaseTextureIn(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASETEXTUREIN_OFFSET))(this, a1);
		}

		::System::Void _ReleaseOneAssetInCachePool(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASEONEASSETINCACHEPOOL_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ReleaseOneAssetInCachePool_1(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASEONEASSETINCACHEPOOL_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean _OnAsyncLoadSprite(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADSPRITE_OFFSET))(this, a1);
		}

		::System::Boolean _OnAsyncLoadMaterial(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADMATERIAL_OFFSET))(this, a1);
		}

		::System::Boolean _OnAsyncLoadTexture(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADTEXTURE_OFFSET))(this, a1);
		}

		::System::Void _AddAssetToCachePool(::System::Int32 a1, ::UnityEngine::Object* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Object*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ADDASSETTOCACHEPOOL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AddAssetToCachePool_1(::UnityEngine::UI::Image* a1, ::RPG::Client::IAssetOperation* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::RPG::Client::IAssetOperation*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ADDASSETTOCACHEPOOL_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ReleaseCachePool(::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEPOOL_OFFSET))(this, a1);
		}

		::System::Void _ReleaseCacheEffectPool(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEEFFECTPOOL_OFFSET))(this, a1);
		}

		::System::Void _ReleaseCachePool_1(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEPOOL_1_OFFSET))(this, a1);
		}

		::System::Void onFlagCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ONFLAGCALLBACK_OFFSET))(this);
		}

		::System::Void SetFlagCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_SETFLAGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AfterFlagPushed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_AFTERFLAGPUSHED_OFFSET))(this);
		}

		::System::Boolean IsFlagPused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ISFLAGPUSED_OFFSET))(this);
		}

		::System::Void EnableFlagSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ENABLEFLAGSWITCH_OFFSET))(this);
		}
	};
}
