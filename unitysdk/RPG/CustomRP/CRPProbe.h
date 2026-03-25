#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/RPG/CustomRP/ProbeBlendFlag.h"
#include "unitysdk/RPG/CustomRP/ProbeRangeMode.h"
#include "unitysdk/RPG/CustomRP/ProbeStencilMode.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/CRPProbeInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class ReflectionProbe; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_CRPPROBE_GETGLOBALROTATIONMATRIX_OFFSET UNITYSDK_OFFSET(0x16A73F90)
#define RPG_CUSTOMRP_CRPPROBE_GETPROBEDELEGATEMESHANDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x16A741A0)
#define RPG_CUSTOMRP_CRPPROBE_GET_ISGLOBALPROBE_OFFSET UNITYSDK_OFFSET(0x16A73500)
#define RPG_CUSTOMRP_CRPPROBE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x16A734B0)
#define RPG_CUSTOMRP_CRPPROBE_GET_NEEDUPDATE_OFFSET UNITYSDK_OFFSET(0x16A73510)
#define RPG_CUSTOMRP_CRPPROBE_GET_OVERRIDESTENCIL_OFFSET UNITYSDK_OFFSET(0x16A73520)
#define RPG_CUSTOMRP_CRPPROBE_GET_PROBE_OFFSET UNITYSDK_OFFSET(0x16A734F0)
#define RPG_CUSTOMRP_CRPPROBE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16A747E0)
#define RPG_CUSTOMRP_CRPPROBE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16A74730)
#define RPG_CUSTOMRP_CRPPROBE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16A74680)
#define RPG_CUSTOMRP_CRPPROBE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16A73540)
#define RPG_CUSTOMRP_CRPPROBE_RESETUPDATE_OFFSET UNITYSDK_OFFSET(0x16A73F80)
#define RPG_CUSTOMRP_CRPPROBE_START_OFFSET UNITYSDK_OFFSET(0x16A745D0)
#define RPG_CUSTOMRP_CRPPROBE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A74890)
#define RPG_CUSTOMRP_CRPPROBE__FLUSHDATA_OFFSET UNITYSDK_OFFSET(0x16A74400)
#define RPG_CUSTOMRP_CRPPROBE__PREPARE_OFFSET UNITYSDK_OFFSET(0x16A74260)
#define RPG_CUSTOMRP_CRPPROBE__UPDATEFILTER_OFFSET UNITYSDK_OFFSET(0x16A74310)
#define RPG_CUSTOMRP_CRPPROBE__UPDATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x16A73620)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPProbe_TypeDefinitionIndex = 29305;

	class CRPProbe : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Weight; // 0x18
		::System::Boolean IsGlobal; // 0x1C
		::RPG::CustomRP::ProbeRangeMode ProbeRange; // 0x20
		::UnityEngine::Texture2D* RampTex; // 0x28
		::System::Single RampIntensity; // 0x30
		::System::Single ProbeRampBlend; // 0x34
		::RPG::CustomRP::ProbeBlendFlag ProbeBlendMode; // 0x38
		::UnityEngine::Vector3 StencilCenter; // 0x3C
		::UnityEngine::Vector3 StencilSize; // 0x48
		::System::Boolean UseAddStencil; // 0x54
		::RPG::CustomRP::ProbeStencilMode StencilMode; // 0x58
		::System::Single RotAngle; // 0x5C
		::UnityEngine::Vector3 StencilRotation; // 0x60
		::System::Single InnerRangePercent; // 0x6C
		::System::Boolean BlendOnBase; // 0x70
		::RPG::CustomRP::CustomLightQualityFilter customProbeQualityFilter; // 0x74
		::System::Boolean useLightQualityV2; // 0x78
		::UnityEngine::Vector3 lastPos; // 0x7C
		::UnityEngine::Matrix4x4 probe2World; // 0x88
		::UnityEngine::Matrix4x4 probeRot; // 0xC8
		::UnityEngine::Vector4 extBoxProj; // 0x108
		::UnityEngine::Vector4 probeParam; // 0x118
		::System::Single nearestDist; // 0x128
		::UnityEngine::Matrix4x4 probeStencil2World; // 0x12C
		::System::Boolean _IsRealGlobal; // 0x16C
		::UnityEngine::Rendering::CRPProbeInfo _ProbeInfo; // 0x170
		::UnityEngine::ReflectionProbe* _Probe; // 0x298
		::UnityEngine::Transform* _Trans; // 0x2A0
		::System::Int32 _UpdateCount; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE_GET_ISVALID_OFFSET))(this);
		}

		::UnityEngine::ReflectionProbe* get_Probe()
		{
			return ((::UnityEngine::ReflectionProbe*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE_GET_PROBE_OFFSET))(this);
		}

		::System::Boolean get_IsGlobalProbe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE_GET_ISGLOBALPROBE_OFFSET))(this);
		}

		::System::Boolean get_NeedUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE_GET_NEEDUPDATE_OFFSET))(this);
		}

		::System::Boolean get_OverrideStencil()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE_GET_OVERRIDESTENCIL_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE_ONUPDATE_OFFSET))(this, force);
		}

		::System::Void ResetUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE_RESETUPDATE_OFFSET))(this);
		}

		static ::UnityEngine::Matrix4x4 GetGlobalRotationMatrix(::UnityEngine::Vector4 rotation, ::System::Single fogBaseHeight)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE_GETGLOBALROTATIONMATRIX_OFFSET))(rotation, fogBaseHeight);
		}

		static ::UnityEngine::Mesh* GetProbeDelegateMeshAndTransform(::UnityEngine::ReflectionProbe* probe, ::RPG::CustomRP::CRPProbe* crpProbe, ::UnityEngine::Matrix4x4& transform)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::ReflectionProbe*, ::RPG::CustomRP::CRPProbe*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE_GETPROBEDELEGATEMESHANDTRANSFORM_OFFSET))(probe, crpProbe, transform);
		}

		::System::Void _Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE__PREPARE_OFFSET))(this);
		}

		::System::Void _UpdateIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE__UPDATEIFNEEDED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE_ONDESTROY_OFFSET))(this);
		}

		::System::Void _FlushData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE__FLUSHDATA_OFFSET))(this);
		}

		::System::Boolean _UpdateFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBE__UPDATEFILTER_OFFSET))(this);
		}
	};
}
