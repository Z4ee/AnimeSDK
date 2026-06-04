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

#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC8F4FE0)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_CREATERENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xC8F48F0)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_GETTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0xC8F4750)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xC8F4520)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC8F5040)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_SETBG_OFFSET UNITYSDK_OFFSET(0xC8F4790)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER_SETUPCATMODEL_OFFSET UNITYSDK_OFFSET(0xC8F4A70)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC8F5200)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER__INIT_OFFSET UNITYSDK_OFFSET(0xC8F4570)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER__RELEASEBGTEXTURE_OFFSET UNITYSDK_OFFSET(0xC8F4870)
#define RPG_CLIENT_SPACEZOOUI3DCONTROLLER__RELEASERENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0xC8F49F0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooUI3DController_TypeDefinitionIndex = 68184;

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
