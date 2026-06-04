#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate; }

#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C__ACTIVEVIRTUALCAMERA_B__0_0_OFFSET UNITYSDK_OFFSET(0xCBA4D10)
#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCBA4CC0)
#define RPG_CLIENT_UIVIRTUALCAMERACONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCBA4D00)

namespace RPG::Client
{
	inline static constexpr unsigned int UIVirtualCameraController___c_TypeDefinitionIndex = 64644;

	class UIVirtualCameraController___c : public ::System::Object
	{
	public:
		static ::RPG::Client::UIVirtualCameraController___c** StaticGet___9()
		{
			return (::RPG::Client::UIVirtualCameraController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVirtualCameraController___c_TypeDefinitionIndex)->GetStaticField(0x60E60);
		}
		static ::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate** StaticGet___9__0_0()
		{
			return (::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate**)Il2CppClass::FromTypeDefinitionIndex(UIVirtualCameraController___c_TypeDefinitionIndex)->GetStaticField(0x60E68);
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
