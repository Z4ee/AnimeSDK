#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class WPGraphDataStateAssetSO_WPGraphDataState; }

#define NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_MYWPGRAPHDATASTATECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xFAC7150)
#define NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_MYWPGRAPHDATASTATECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC7200)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPGraphDataStateAssetSO_MyWPGraphDataStateComparer_TypeDefinitionIndex = 78377;

	class WPGraphDataStateAssetSO_MyWPGraphDataStateComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_MYWPGRAPHDATASTATECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState* a, ::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState* b)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState*, ::NPCCrowd::AI::WPGraphDataStateAssetSO_WPGraphDataState*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATASTATEASSETSO_MYWPGRAPHDATASTATECOMPARER_COMPARE_OFFSET))(this, a, b);
		}
	};
}
