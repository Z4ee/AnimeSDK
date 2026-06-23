#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace NPCCrowd::AI { class WPGraphSectionAssetSO_SectionPathData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_AI_WPGRAPHSECTIONASSETSO__CTOR_OFFSET UNITYSDK_OFFSET(0xEBC2EB0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPGraphSectionAssetSO_TypeDefinitionIndex = 50522;

	class WPGraphSectionAssetSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AI::WPGraphSectionAssetSO_SectionPathData*>* sectionGraphs; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHSECTIONASSETSO__CTOR_OFFSET))(this);
		}
	};
}
