#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DUTILITIES_ACTIVEENVIRONMENTPROFILE_OFFSET UNITYSDK_OFFSET(0xB3B9BD0)
#define RPG_CLIENT_UI3DUTILITIES_CLEARSHADOWCENTER_OFFSET UNITYSDK_OFFSET(0xB3BA340)
#define RPG_CLIENT_UI3DUTILITIES_DIRTYUIBLUR_OFFSET UNITYSDK_OFFSET(0xB3BAA10)
#define RPG_CLIENT_UI3DUTILITIES_ENABLEHIZOC_OFFSET UNITYSDK_OFFSET(0xB3BA030)
#define RPG_CLIENT_UI3DUTILITIES_ISCAMERABLENDING_OFFSET UNITYSDK_OFFSET(0xB3BAAB0)
#define RPG_CLIENT_UI3DUTILITIES_OVERRIDEDOFCONFIG_OFFSET UNITYSDK_OFFSET(0xB3BA710)
#define RPG_CLIENT_UI3DUTILITIES_RELEASEDOFCONFIG_OFFSET UNITYSDK_OFFSET(0xB3BA920)
#define RPG_CLIENT_UI3DUTILITIES_RESETENVIRONMENTPROFILE_OFFSET UNITYSDK_OFFSET(0xB3B9E60)
#define RPG_CLIENT_UI3DUTILITIES_RESTORESCENE_OFFSET UNITYSDK_OFFSET(0xB3BA5B0)
#define RPG_CLIENT_UI3DUTILITIES_SETDEFAULTSHADOWCENTER_OFFSET UNITYSDK_OFFSET(0xB3BA3F0)
#define RPG_CLIENT_UI3DUTILITIES_SETDOFENABLE_OFFSET UNITYSDK_OFFSET(0xB3BA870)
#define RPG_CLIENT_UI3DUTILITIES_SETPLAYERINFOALLBLOCKVISIBLE_OFFSET UNITYSDK_OFFSET(0xB3BABC0)
#define RPG_CLIENT_UI3DUTILITIES_SWITCHTOUI3DLAYER_OFFSET UNITYSDK_OFFSET(0xB3B8010)
#define RPG_CLIENT_UI3DUTILITIES_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0xB3BA520)
#define RPG_CLIENT_UI3DUTILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0xB3BAC40)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DUtilities_TypeDefinitionIndex = 67238;

	class UI3DUtilities : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::System::Boolean>* StaticGet__EnableHiZOCBefore()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(UI3DUtilities_TypeDefinitionIndex)->GetStaticField(0xACD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES__CTOR_OFFSET))(this);
		}

		static ::System::Boolean ActiveEnvironmentProfile(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_ACTIVEENVIRONMENTPROFILE_OFFSET))(path);
		}

		static ::System::Void ResetEnvironmentProfile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_RESETENVIRONMENTPROFILE_OFFSET))();
		}

		static ::System::Void EnableHiZOC(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_ENABLEHIZOC_OFFSET))(enable);
		}

		static ::System::Void ClearShadowCenter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_CLEARSHADOWCENTER_OFFSET))();
		}

		static ::System::Void SetDefaultShadowCenter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_SETDEFAULTSHADOWCENTER_OFFSET))();
		}

		static ::System::Void SwitchToUI3DLayer(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_SWITCHTOUI3DLAYER_OFFSET))(trans);
		}

		static ::System::Void UnloadScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_UNLOADSCENE_OFFSET))();
		}

		static ::System::Void RestoreScene(::System::Action* callback)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_RESTORESCENE_OFFSET))(callback);
		}

		static ::System::Void OverrideDOFConfig(::System::String* volumePath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_OVERRIDEDOFCONFIG_OFFSET))(volumePath);
		}

		static ::System::Void SetDOFEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_SETDOFENABLE_OFFSET))(enable);
		}

		static ::System::Void ReleaseDOFConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_RELEASEDOFCONFIG_OFFSET))();
		}

		static ::System::Void DirtyUIBlur()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_DIRTYUIBLUR_OFFSET))();
		}

		static ::System::Boolean IsCameraBlending()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_ISCAMERABLENDING_OFFSET))();
		}

		static ::System::Void SetPlayerInfoAllBlockVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_SETPLAYERINFOALLBLOCKVISIBLE_OFFSET))(visible);
		}
	};
}
