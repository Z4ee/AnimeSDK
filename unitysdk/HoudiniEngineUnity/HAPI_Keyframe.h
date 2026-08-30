#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HOUDINIENGINEUNITY_HAPI_KEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x25B40)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_Keyframe_TypeDefinitionIndex = 39213;

	struct alignas(4) HAPI_Keyframe
	{
		::System::Single time; // 0x10
		::System::Single value; // 0x14
		::System::Single inTangent; // 0x18
		::System::Single outTangent; // 0x1C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_KEYFRAME__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
