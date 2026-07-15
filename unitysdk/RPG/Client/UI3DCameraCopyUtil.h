#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define RPG_CLIENT_UI3DCAMERACOPYUTIL_COPYCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x16FE79D0)
#define RPG_CLIENT_UI3DCAMERACOPYUTIL_OVERRIDEDOFOFENVVOLUME_OFFSET UNITYSDK_OFFSET(0x16FE7D30)
#define RPG_CLIENT_UI3DCAMERACOPYUTIL_SWITCHVOLUMEPROFILE_OFFSET UNITYSDK_OFFSET(0x16FE8540)
#define RPG_CLIENT_UI3DCAMERACOPYUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE8660)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DCameraCopyUtil_TypeDefinitionIndex = 69671;

	class UI3DCameraCopyUtil : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::VolumeProfile** StaticGet__3DUIInstanceVolumeProfile()
		{
			return (::UnityEngine::Rendering::VolumeProfile**)Il2CppClass::FromTypeDefinitionIndex(UI3DCameraCopyUtil_TypeDefinitionIndex)->GetStaticField(0x4ABD0);
		}
		static ::UnityEngine::Rendering::VolumeProfile** StaticGet__DefaultVolumeProfile()
		{
			return (::UnityEngine::Rendering::VolumeProfile**)Il2CppClass::FromTypeDefinitionIndex(UI3DCameraCopyUtil_TypeDefinitionIndex)->GetStaticField(0x4ABD8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void CopyCameraConfig(::UnityEngine::Camera* a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL_COPYCAMERACONFIG_OFFSET))(a1, a2);
		}

		static ::System::Void OverrideDofOfEnvVolume(::UnityEngine::Camera* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL_OVERRIDEDOFOFENVVOLUME_OFFSET))(a1, a2);
		}

		static ::System::Void SwitchVolumeProfile(::UnityEngine::Camera* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL_SWITCHVOLUMEPROFILE_OFFSET))(a1, a2);
		}
	};
}
