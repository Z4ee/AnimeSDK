#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DUTILITIES_ACTIVEENVIRONMENTPROFILE_OFFSET UNITYSDK_OFFSET(0xA65FC80)
#define RPG_CLIENT_UI3DUTILITIES_CLEARSHADOWCENTER_OFFSET UNITYSDK_OFFSET(0xA660420)
#define RPG_CLIENT_UI3DUTILITIES_DIRTYUIBLUR_OFFSET UNITYSDK_OFFSET(0xA660B60)
#define RPG_CLIENT_UI3DUTILITIES_ENABLEHIZOC_OFFSET UNITYSDK_OFFSET(0xA6600E0)
#define RPG_CLIENT_UI3DUTILITIES_OVERRIDEDOFCONFIG_OFFSET UNITYSDK_OFFSET(0xA660860)
#define RPG_CLIENT_UI3DUTILITIES_RELEASEDOFCONFIG_OFFSET UNITYSDK_OFFSET(0xA660A70)
#define RPG_CLIENT_UI3DUTILITIES_RESETENVIRONMENTPROFILE_OFFSET UNITYSDK_OFFSET(0xA65FF10)
#define RPG_CLIENT_UI3DUTILITIES_RESTORESCENE_OFFSET UNITYSDK_OFFSET(0xA6606C0)
#define RPG_CLIENT_UI3DUTILITIES_SETDEFAULTSHADOWCENTER_OFFSET UNITYSDK_OFFSET(0xA6604D0)
#define RPG_CLIENT_UI3DUTILITIES_SETDOFENABLE_OFFSET UNITYSDK_OFFSET(0xA6609C0)
#define RPG_CLIENT_UI3DUTILITIES_SWITCHTOUI3DLAYER_OFFSET UNITYSDK_OFFSET(0xA65E0B0)
#define RPG_CLIENT_UI3DUTILITIES_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0xA660600)
#define RPG_CLIENT_UI3DUTILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0xA660C00)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DUtilities_TypeDefinitionIndex = 59842;

	class UI3DUtilities : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::System::Boolean>* StaticGet__EnableHiZOCBefore()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(UI3DUtilities_TypeDefinitionIndex)->GetStaticField(0x105D0);
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
	};
}
