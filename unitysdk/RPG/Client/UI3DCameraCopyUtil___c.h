#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define RPG_CLIENT_UI3DCAMERACOPYUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3AA620)
#define RPG_CLIENT_UI3DCAMERACOPYUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AA660)
#define RPG_CLIENT_UI3DCAMERACOPYUTIL___C__OVERRIDEDOFOFENVVOLUME_B__1_0_OFFSET UNITYSDK_OFFSET(0xB3AA670)
#define RPG_CLIENT_UI3DCAMERACOPYUTIL___C__OVERRIDEDOFOFENVVOLUME_B__1_1_OFFSET UNITYSDK_OFFSET(0xB3AA690)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DCameraCopyUtil___c_TypeDefinitionIndex = 67234;

	class UI3DCameraCopyUtil___c : public ::System::Object
	{
	public:
		static ::RPG::Client::UI3DCameraCopyUtil___c** StaticGet___9()
		{
			return (::RPG::Client::UI3DCameraCopyUtil___c**)Il2CppClass::FromTypeDefinitionIndex(UI3DCameraCopyUtil___c_TypeDefinitionIndex)->GetStaticField(0x27E50);
		}
		static ::System::Action_1<::UnityEngine::Rendering::VolumeComponent*>** StaticGet___9__1_0()
		{
			return (::System::Action_1<::UnityEngine::Rendering::VolumeComponent*>**)Il2CppClass::FromTypeDefinitionIndex(UI3DCameraCopyUtil___c_TypeDefinitionIndex)->GetStaticField(0x27E58);
		}
		static ::System::Action_1<::UnityEngine::Rendering::VolumeComponent*>** StaticGet___9__1_1()
		{
			return (::System::Action_1<::UnityEngine::Rendering::VolumeComponent*>**)Il2CppClass::FromTypeDefinitionIndex(UI3DCameraCopyUtil___c_TypeDefinitionIndex)->GetStaticField(0x27E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL___C__CTOR_OFFSET))(this);
		}

		::System::Void _OverrideDofOfEnvVolume_b__1_0(::UnityEngine::Rendering::VolumeComponent* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL___C__OVERRIDEDOFOFENVVOLUME_B__1_0_OFFSET))(this, x);
		}

		::System::Void _OverrideDofOfEnvVolume_b__1_1(::UnityEngine::Rendering::VolumeComponent* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCAMERACOPYUTIL___C__OVERRIDEDOFOFENVVOLUME_B__1_1_OFFSET))(this, x);
		}
	};
}
