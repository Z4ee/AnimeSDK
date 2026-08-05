#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_AgglomerativeClustering_ClusterNode; }

#define DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_CLUSTERDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F42D960)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_AgglomerativeClustering_ClusterDistance_TypeDefinitionIndex = 94550;

	class MB3_AgglomerativeClustering_ClusterDistance : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* b; // 0x10
		::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* a; // 0x18

		::System::Void _ctor(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* aa, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode* bb)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_ClusterNode*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_CLUSTERDISTANCE__CTOR_OFFSET))(this, aa, bb);
		}
	};
}
