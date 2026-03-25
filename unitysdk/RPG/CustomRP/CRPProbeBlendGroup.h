#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ProbeRenderData.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class CRPProbe; }

#define RPG_CUSTOMRP_CRPPROBEBLENDGROUP_GETPROBE_OFFSET UNITYSDK_OFFSET(0x16A748F0)
#define RPG_CUSTOMRP_CRPPROBEBLENDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x16A74B50)
#define RPG_CUSTOMRP_CRPPROBEBLENDGROUP__GETPROBECOUNT_OFFSET UNITYSDK_OFFSET(0x16A74990)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPProbeBlendGroup_TypeDefinitionIndex = 29306;

	class CRPProbeBlendGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::CustomRP::CRPProbe* probe0; // 0x18
		::RPG::CustomRP::CRPProbe* probe1; // 0x20
		::RPG::CustomRP::CRPProbe* probe2; // 0x28
		::RPG::CustomRP::CRPProbe* probe3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBEBLENDGROUP__CTOR_OFFSET))(this);
		}

		::System::Int32 GetProbe(::Il2CppArray<::RPG::CustomRP::ProbeRenderData>* localProbeData, ::Il2CppArray<::UnityEngine::Matrix4x4>* probesMatrix, ::UnityEngine::Vector4& probesDist)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::RPG::CustomRP::ProbeRenderData>*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBEBLENDGROUP_GETPROBE_OFFSET))(this, localProbeData, probesMatrix, probesDist);
		}

		::System::Void _GetProbeCount(::Il2CppArray<::RPG::CustomRP::ProbeRenderData>* localProbeData, ::Il2CppArray<::UnityEngine::Matrix4x4>* probesMatrix, ::RPG::CustomRP::CRPProbe* probe, ::UnityEngine::Vector4& probesDist, ::System::Int32& count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::CustomRP::ProbeRenderData>*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::RPG::CustomRP::CRPProbe*, ::UnityEngine::Vector4&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBEBLENDGROUP__GETPROBECOUNT_OFFSET))(this, localProbeData, probesMatrix, probe, probesDist, count);
		}
	};
}
