#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_DETAILPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x841AFA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_DetailProperties_TypeDefinitionIndex = 37868;

	class HEU_DetailProperties : public ::System::Object
	{
	public:
		::System::Single _detailDensity; // 0x10
		::System::Single _detailDistance; // 0x14
		::System::Int32 _detailResolutionPerPatch; // 0x18
		::System::Int32 _detailResolution; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_DETAILPROPERTIES__CTOR_OFFSET))(this);
		}
	};
}
