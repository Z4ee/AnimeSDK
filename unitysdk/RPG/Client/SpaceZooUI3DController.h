#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_4A90D78D94DB1347;
namespace RPG::Client { class SpaceZooCatData; }
namespace RPG::CustomRP { class SpaceZooBackgroundCmd; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE0BA650)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_CREATERENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xE0B9F20)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_GETTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xE0B9D80)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xE0B9B50)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE0BA6B0)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_SETBG_OFFSET UNITYSDK_OFFSET(0xE0B9DC0)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_SETUPCATMODEL_OFFSET UNITYSDK_OFFSET(0xE0BA0A0)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE0BA8E0)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER__INIT_OFFSET UNITYSDK_OFFSET(0xE0B9BA0)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER__RELEASEBGTEXTURE_OFFSET UNITYSDK_OFFSET(0xE0B9EA0)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER__RELEASERENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xE0BA020)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooUI3DController_TypeDefinitionIndex = 72910;

	class SpaceZooUI3DController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RenderTexture* _TargetTexture; // 0x18
		::UnityEngine::Camera* _TextureCamera; // 0x20
		::Class_1_4A90D78D94DB1347* _GamePlayAssetLoader; // 0x28
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

		::System::Void SetBG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER_SETBG_OFFSET))(this, a1);
		}

		::System::Void CreateRenderTexture(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER_CREATERENDERTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void SetupCatModel(::RPG::Client::SpaceZooCatData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUI3DCONTROLLER_SETUPCATMODEL_OFFSET))(this, a1);
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
