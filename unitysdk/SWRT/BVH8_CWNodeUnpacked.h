#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SWRT/BVH8_CWNodeUnpacked__E_e__FixedBuffer.h"
#include "unitysdk/SWRT/BVH8_CWNodeUnpacked__MaxX_e__FixedBuffer.h"
#include "unitysdk/SWRT/BVH8_CWNodeUnpacked__MaxY_e__FixedBuffer.h"
#include "unitysdk/SWRT/BVH8_CWNodeUnpacked__MaxZ_e__FixedBuffer.h"
#include "unitysdk/SWRT/BVH8_CWNodeUnpacked__Meta_e__FixedBuffer.h"
#include "unitysdk/SWRT/BVH8_CWNodeUnpacked__MinX_e__FixedBuffer.h"
#include "unitysdk/SWRT/BVH8_CWNodeUnpacked__MinY_e__FixedBuffer.h"
#include "unitysdk/SWRT/BVH8_CWNodeUnpacked__MinZ_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace SWRT
{
	inline static constexpr unsigned int BVH8_CWNodeUnpacked_TypeDefinitionIndex = 35952;

	struct alignas(4) BVH8_CWNodeUnpacked
	{
		::UnityEngine::Vector3 P; // 0x10
		::SWRT::BVH8_CWNodeUnpacked__E_e__FixedBuffer E; // 0x1C
		::System::Byte Imask; // 0x1F
		::System::Int32 CNodeBaseIndex; // 0x20
		::System::Int32 CPrimBaseIndex; // 0x24
		::SWRT::BVH8_CWNodeUnpacked__Meta_e__FixedBuffer Meta; // 0x28
		::SWRT::BVH8_CWNodeUnpacked__MinX_e__FixedBuffer MinX; // 0x30
		::SWRT::BVH8_CWNodeUnpacked__MaxX_e__FixedBuffer MaxX; // 0x38
		::SWRT::BVH8_CWNodeUnpacked__MinY_e__FixedBuffer MinY; // 0x40
		::SWRT::BVH8_CWNodeUnpacked__MaxY_e__FixedBuffer MaxY; // 0x48
		::SWRT::BVH8_CWNodeUnpacked__MinZ_e__FixedBuffer MinZ; // 0x50
		::SWRT::BVH8_CWNodeUnpacked__MaxZ_e__FixedBuffer MaxZ; // 0x58
	};
}
