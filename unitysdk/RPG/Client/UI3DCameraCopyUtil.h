#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define RPG_CLIENT_UI3DCAMERACOPYUTIL_COPYCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xB3A9B90)
#define RPG_CLIENT_UI3DCAMERACOPYUTIL_OVERRIDEDOFOFENVVOLUME_OFFSET UNITYSDK_OFFSET(0xB3A9EF0)
#define RPG_CLIENT_UI3DCAMERACOPYUTIL_SWITCHVOLUMEPROFILE_OFFSET UNITYSDK_OFFSET(0xB3AA4F0)
#define RPG_CLIENT_UI3DCAMERACOPYUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AA610)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DCameraCopyUtil_TypeDefinitionIndex = 67233;

	class UI3DCameraCopyUtil : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::VolumeProfile** StaticGet__3DUIInstanceVolumeProfile()
		{
			return (::UnityEngine::Rendering::VolumeProfile**)Il2CppClass::FromTypeDefinitionIndex(UI3DCameraCopyUtil_TypeDefinitionIndex)->GetStaticField(0x27E30);
		}
		static ::UnityEngine::Rendering::VolumeProfile** StaticGet__DefaultVolumeProfile()
		{
			return (::UnityEngine::Rendering::VolumeProfile**)Il2CppClass::FromTypeDefinitionIndex(UI3DCameraCopyUtil_TypeDefinitionIndex)->GetStaticField(0x27E38);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void CopyCameraConfig(::UnityEngine::Camera* srcCamera, ::UnityEngine::Camera* destCamera)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL_COPYCAMERACONFIG_OFFSET))(srcCamera, destCamera);
		}

		static ::System::Void OverrideDofOfEnvVolume(::UnityEngine::Camera* srcCamera, ::System::String* customVolumePath)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL_OVERRIDEDOFOFENVVOLUME_OFFSET))(srcCamera, customVolumePath);
		}

		static ::System::Void SwitchVolumeProfile(::UnityEngine::Camera* srcCamera, ::System::String* customVolumePath)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL_SWITCHVOLUMEPROFILE_OFFSET))(srcCamera, customVolumePath);
		}
	};
}
