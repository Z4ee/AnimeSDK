#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HOUDINIENGINEUNITY_HAPI_KEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x24C30)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_Keyframe_TypeDefinitionIndex = 43604;

	struct alignas(4) HAPI_Keyframe
	{
		::System::Single time; // 0x10
		::System::Single value; // 0x14
		::System::Single inTangent; // 0x18
		::System::Single outTangent; // 0x1C

		::System::Void _ctor(::System::Single t, ::System::Single v, ::System::Single in_tangent, ::System::Single out_tangent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_KEYFRAME__CTOR_OFFSET))(this, t, v, in_tangent, out_tangent);
		}
	};
}
