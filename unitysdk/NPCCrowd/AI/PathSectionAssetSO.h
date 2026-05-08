#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace NPCCrowd::AI { class PathSectionAssetSO_SectionPathData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHSECTIONASSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0xCE462D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathSectionAssetSO_TypeDefinitionIndex = 72267;

	class PathSectionAssetSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathSectionAssetSO_SectionPathData*>* sectionGraphs; // 0x58
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathSectionAssetSO_SectionPathData*>* sceneGraphs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSECTIONASSETSO__CTOR_OFFSET))(this);
		}
	};
}
