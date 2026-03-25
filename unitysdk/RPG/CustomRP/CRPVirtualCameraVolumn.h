#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/VirtualCameraMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/CRPCameraInfo.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class CRPVirtualCameraCmd; }
namespace RPG::CustomRP { class CRPVirtualCameraVolumn_PostUpdateVCCamera; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_DISABLEDYNAMICRES_TEMPFIXPS5_OFFSET UNITYSDK_OFFSET(0x16A7A0C0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_GET_DISABLEHIZOC_OFFSET UNITYSDK_OFFSET(0x16A7A230)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_HASVCCAMERA_OFFSET UNITYSDK_OFFSET(0x16A7A0D0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16A7A140)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16A7A0E0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_RESETVC_OFFSET UNITYSDK_OFFSET(0x16A7A060)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_UPDATEACTIVEVC_OFFSET UNITYSDK_OFFSET(0x16A797D0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A7A2F0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7A250)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPVirtualCameraVolumn_TypeDefinitionIndex = 29314;

	class CRPVirtualCameraVolumn : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::CRPVirtualCameraVolumn*>** StaticGet_s_CurrentVCVolumn()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::CRPVirtualCameraVolumn*>**)Il2CppClass::FromTypeDefinitionIndex(CRPVirtualCameraVolumn_TypeDefinitionIndex)->GetStaticField(0x307D0);
		}
		static ::System::Boolean* StaticGet_lastVCCameraEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CRPVirtualCameraVolumn_TypeDefinitionIndex)->GetStaticField(0xFB90);
		}
		::Il2CppArray<::UnityEngine::Rendering::CRPVirtualCamera*>* virtualCameras; // 0x18
		::Il2CppArray<::RPG::CustomRP::CRPVirtualCameraCmd*>* virtualCameraCmds; // 0x20
		::System::Int32 vcCameraCount; // 0x28
		::UnityEngine::Vector4 splitPoints; // 0x2C
		::Il2CppArray<::System::Int32>* reIndex; // 0x40
		::RPG::CustomRP::VirtualCameraMode vcMode; // 0x48
		::System::Boolean backgroundUseVCMask; // 0x4C
		::System::Int32 realVCCameraCount; // 0x50
		::RPG::CustomRP::CRPVirtualCameraVolumn_PostUpdateVCCamera* postUpdateVCCamera; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN__CCTOR_OFFSET))();
		}

		::System::Void UpdateActiveVC(::UnityEngine::Rendering::CRPCameraInfo& cameraData, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPCameraInfo&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_UPDATEACTIVEVC_OFFSET))(this, cameraData, camera);
		}

		static ::System::Void ResetVC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_RESETVC_OFFSET))();
		}

		static ::System::Boolean DisableDynamicRes_TempFixPS5()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_DISABLEDYNAMICRES_TEMPFIXPS5_OFFSET))();
		}

		::System::Boolean HasVCCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_HASVCCAMERA_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean get_DisableHizOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_GET_DISABLEHIZOC_OFFSET))(this);
		}
	};
}
