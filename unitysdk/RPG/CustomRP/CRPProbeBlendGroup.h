#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ProbeRenderData.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class CRPProbe; }

#define RPG_CUSTOMRP_CRPPROBEBLENDGROUP_GETPROBE_OFFSET UNITYSDK_OFFSET(0x18EBAFE0)
#define RPG_CUSTOMRP_CRPPROBEBLENDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBB210)
#define RPG_CUSTOMRP_CRPPROBEBLENDGROUP__GETPROBECOUNT_OFFSET UNITYSDK_OFFSET(0x18EBB080)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPProbeBlendGroup_TypeDefinitionIndex = 35359;

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

		::System::Int32 GetProbe(::Il2CppArray<::RPG::CustomRP::ProbeRenderData>* a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::UnityEngine::Vector4& a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::RPG::CustomRP::ProbeRenderData>*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBEBLENDGROUP_GETPROBE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _GetProbeCount(::Il2CppArray<::RPG::CustomRP::ProbeRenderData>* a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::RPG::CustomRP::CRPProbe* a3, ::UnityEngine::Vector4& a4, ::System::Int32& a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::CustomRP::ProbeRenderData>*, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::RPG::CustomRP::CRPProbe*, ::UnityEngine::Vector4&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPROBEBLENDGROUP__GETPROBECOUNT_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
