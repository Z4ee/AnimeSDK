#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_DETAILPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x8C43110)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_DetailProperties_TypeDefinitionIndex = 43745;

	class HEU_DetailProperties : public ::System::Object
	{
	public:
		::System::Int32 _detailResolutionPerPatch; // 0x10
		::System::Int32 _detailResolution; // 0x14
		::System::Single _detailDistance; // 0x18
		::System::Single _detailDensity; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_DETAILPROPERTIES__CTOR_OFFSET))(this);
		}
	};
}
