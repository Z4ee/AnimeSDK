#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define IRICLUSTERBUILDER_IRICLUSTERBUILDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14235840)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRIClusterBuildConfig_TypeDefinitionIndex = 45059;

	class IRIClusterBuildConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 MaxVertices; // 0x18
		::System::Int32 MaxIndices; // 0x1C
		::System::Single ConeWeight; // 0x20
		::System::Boolean GenNormalCone; // 0x24
		::System::Boolean Runtime; // 0x25
		::System::Int32 Float4CountPerVertex; // 0x28
		::System::Int32 MatParamFloat4Count; // 0x2C
		::System::Int32 IndexMode; // 0x30
		::System::Boolean CompressVertex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRICLUSTERBUILDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
