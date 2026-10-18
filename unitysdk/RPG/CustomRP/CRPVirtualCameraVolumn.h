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

#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_GET_DISABLEHIZOC_OFFSET UNITYSDK_OFFSET(0x1CC0CDE0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_GET_DISABLEVOLUMETRICFOG_OFFSET UNITYSDK_OFFSET(0x1CC0CF50)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_HASVCCAMERA_OFFSET UNITYSDK_OFFSET(0x1CC0CC30)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CC0CCF0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CC0CC40)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_RESETVC_OFFSET UNITYSDK_OFFSET(0x1CC0CBD0)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_UPDATEACTIVEVC_OFFSET UNITYSDK_OFFSET(0x1CC0C990)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC0D160)
#define RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC0D0C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPVirtualCameraVolumn_TypeDefinitionIndex = 37692;

	class CRPVirtualCameraVolumn : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::CRPVirtualCameraVolumn*>** StaticGet_s_CurrentVCVolumn()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::CRPVirtualCameraVolumn*>**)Il2CppClass::FromTypeDefinitionIndex(CRPVirtualCameraVolumn_TypeDefinitionIndex)->GetStaticField(0x2E340);
		}
		static ::System::Boolean* StaticGet_lastVCCameraEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CRPVirtualCameraVolumn_TypeDefinitionIndex)->GetStaticField(0x97E0);
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

		::System::Void UpdateActiveVC(::UnityEngine::Rendering::CRPCameraInfo& a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPCameraInfo&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_UPDATEACTIVEVC_OFFSET))(this, a1, a2);
		}

		static ::System::Void ResetVC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_RESETVC_OFFSET))();
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

		static ::System::Boolean get_DisableHizOC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_GET_DISABLEHIZOC_OFFSET))();
		}

		static ::System::Boolean get_DisableVolumetricFog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPVIRTUALCAMERAVOLUMN_GET_DISABLEVOLUMETRICFOG_OFFSET))();
		}
	};
}
