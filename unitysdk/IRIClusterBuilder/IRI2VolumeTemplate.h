#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI2/IRIClusterVolumeInfo.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class GameObject; }

#define IRICLUSTERBUILDER_IRI2VOLUMETEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E65050)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRI2VolumeTemplate_TypeDefinitionIndex = 48199;

	class IRI2VolumeTemplate : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::GameObject* IRI2VolumeHierarchyPrefab; // 0x18
		::IRI2::IRIClusterVolumeInfo IRI2VolumeInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2VOLUMETEMPLATE__CTOR_OFFSET))(this);
		}
	};
}
