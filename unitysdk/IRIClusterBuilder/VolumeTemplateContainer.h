#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace IRIClusterBuilder { class IRI2VolumeTemplate; }
namespace IRIClusterBuilder { class IRIClusterBuildConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define IRICLUSTERBUILDER_VOLUMETEMPLATECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x111DA400)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int VolumeTemplateContainer_TypeDefinitionIndex = 38631;

	class VolumeTemplateContainer : public ::UnityEngine::ScriptableObject
	{
	public:
		::IRIClusterBuilder::IRIClusterBuildConfig* BuildConfig; // 0x18
		::System::Collections::Generic::List_1<::IRIClusterBuilder::IRI2VolumeTemplate*>* Templates; // 0x20
		::UnityEngine::Material* IRIClusterMaterial; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_VOLUMETEMPLATECONTAINER__CTOR_OFFSET))(this);
		}
	};
}
