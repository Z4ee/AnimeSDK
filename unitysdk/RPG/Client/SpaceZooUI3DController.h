#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_E05E7A6D9DE9138B;
namespace RPG::Client { class SpaceZooCatData; }
namespace RPG::CustomRP { class SpaceZooBackgroundCmd; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xB19FD80)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_CREATERENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xB19F6F0)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_GETTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xB19F550)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xB19F320)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB19FDE0)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_SETBG_OFFSET UNITYSDK_OFFSET(0xB19F590)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_SETUPCATMODEL_OFFSET UNITYSDK_OFFSET(0xB19F870)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB19FFA0)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER__INIT_OFFSET UNITYSDK_OFFSET(0xB19F370)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER__RELEASEBGTEXTURE_OFFSET UNITYSDK_OFFSET(0xB19F670)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER__RELEASERENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xB19F7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooUI3DController_TypeDefinitionIndex = 67232;

	class SpaceZooUI3DController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RenderTexture* _TargetTexture; // 0x18
		::UnityEngine::Camera* _TextureCamera; // 0x20
		::Class_1_E05E7A6D9DE9138B* _GamePlayAssetLoader; // 0x28
		::UnityEngine::Renderer* _ModelRender; // 0x30
		::RPG::CustomRP::SpaceZooBackgroundCmd* _BGCmd; // 0x38
		::UnityEngine::Texture2D* _BGTexture; // 0x40
		::System::Boolean _IsInit; // 0x48
		::System::String* _ENV_PROFILE; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER_INIT_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* GetTargetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER_GETTARGETTEXTURE_OFFSET))(this);
		}

		::System::Void SetBG(::System::String* texturePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER_SETBG_OFFSET))(this, texturePath);
		}

		::System::Void CreateRenderTexture(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER_CREATERENDERTEXTURE_OFFSET))(this, width, height);
		}

		::System::Void SetupCatModel(::RPG::Client::SpaceZooCatData* spaceZooCatData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER_SETUPCATMODEL_OFFSET))(this, spaceZooCatData);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void _ReleaseRenderTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER__RELEASERENDERTEXTURE_OFFSET))(this);
		}

		::System::Void _ReleaseBGTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER__RELEASEBGTEXTURE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER__INIT_OFFSET))(this);
		}
	};
}
