#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class CRPProbe; }
namespace UnityEngine { class Texture; }

#define RPG_CUSTOMRP_PROBERENDERDATA_RESET_OFFSET UNITYSDK_OFFSET(0x22B9760)
#define RPG_CUSTOMRP_PROBERENDERDATA_SETBASEDATA_OFFSET UNITYSDK_OFFSET(0x22B97A0)
#define RPG_CUSTOMRP_PROBERENDERDATA_SET_OFFSET UNITYSDK_OFFSET(0x22B9790)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ProbeRenderData_TypeDefinitionIndex = 35068;

	struct alignas(8) ProbeRenderData
	{
		::UnityEngine::Texture* tex; // 0x10
		::UnityEngine::Vector4 hdr; // 0x18
		::UnityEngine::Matrix4x4 probe2World; // 0x28
		::UnityEngine::Matrix4x4 probeRot; // 0x68
		::UnityEngine::Vector4 probeParam; // 0xA8
		::UnityEngine::Texture* ramp; // 0xB8
		::System::Boolean isBoxProj; // 0xC0
		::RPG::CustomRP::CRPProbe* probeRef; // 0xC8

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PROBERENDERDATA_RESET_OFFSET))(this);
		}

		::System::Void Set(::RPG::CustomRP::CRPProbe* probe)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPProbe*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PROBERENDERDATA_SET_OFFSET))(this, probe);
		}

		::System::Void SetBaseData(::RPG::CustomRP::CRPProbe* probe)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPProbe*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PROBERENDERDATA_SETBASEDATA_OFFSET))(this, probe);
		}
	};
}
