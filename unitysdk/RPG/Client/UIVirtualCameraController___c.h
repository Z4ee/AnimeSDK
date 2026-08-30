#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate; }

#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C__ACTIVEVIRTUALCAMERA_B__0_0_OFFSET UNITYSDK_OFFSET(0xE3CA900)
#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE3CA8B0)
#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CA8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIVirtualCameraController___c_TypeDefinitionIndex = 69084;

	class UIVirtualCameraController___c : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate** StaticGet___9__0_0()
		{
			return (::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate**)Il2CppClass::FromTypeDefinitionIndex(UIVirtualCameraController___c_TypeDefinitionIndex)->GetStaticField(0x64090);
		}
		static ::RPG::Client::UIVirtualCameraController___c** StaticGet___9()
		{
			return (::RPG::Client::UIVirtualCameraController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVirtualCameraController___c_TypeDefinitionIndex)->GetStaticField(0x64098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ActiveVirtualCamera_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C__ACTIVEVIRTUALCAMERA_B__0_0_OFFSET))(this);
		}
	};
}
