#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DigitalOpus::MB::Core { class MB3_AgglomerativeClustering_item_s; }
namespace DigitalOpus::MB::Core { class MB3_MeshBakerGrouperCluster___c__DisplayClass1_0; }

#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER___C__DISPLAYCLASS1_1__BUILDCLUSTERS_B__0_OFFSET UNITYSDK_OFFSET(0x1C120440)
#define DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER___C__DISPLAYCLASS1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C120430)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshBakerGrouperCluster___c__DisplayClass1_1_TypeDefinitionIndex = 85000;

	class MB3_MeshBakerGrouperCluster___c__DisplayClass1_1 : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCluster___c__DisplayClass1_0* CS___8__locals1; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER___C__DISPLAYCLASS1_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildClusters_b__0(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_AgglomerativeClustering_item_s*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHBAKERGROUPERCLUSTER___C__DISPLAYCLASS1_1__BUILDCLUSTERS_B__0_OFFSET))(this, x);
		}
	};
}
