#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_CurveType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_InputCurveMethod.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_InputCurveParameterization.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity { class HEU_InputCurveInfo; }

#define HOUDINIENGINEUNITY_HAPI_INPUTCURVEINFO_FILLDATA_OFFSET UNITYSDK_OFFSET(0x2FD1390)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_InputCurveInfo_TypeDefinitionIndex = 39218;

	struct alignas(4) HAPI_InputCurveInfo
	{
		::HoudiniEngineUnity::HAPI_CurveType curveType; // 0x10
		::System::Int32 order; // 0x14
		::System::Boolean closed; // 0x18
		::System::Boolean reverse; // 0x19
		::HoudiniEngineUnity::HAPI_InputCurveMethod inputMethod; // 0x1C
		::HoudiniEngineUnity::HAPI_InputCurveParameterization breakpointParameterization; // 0x20

		::System::Void FillData(::HoudiniEngineUnity::HEU_InputCurveInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputCurveInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_INPUTCURVEINFO_FILLDATA_OFFSET))(this, a1);
		}
	};
}
