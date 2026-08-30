#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITLAYERSUMMARIZER_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x1BA3E5B0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITLAYERSUMMARIZER_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x1BA3D6F0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITLAYERSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA3F430)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait_TraitLayerSummarizer_TypeDefinitionIndex = 65469;

	class GridFightGameTrait_TraitLayerSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivedTraitEffectIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _LegacyTraitLayer; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _UpgradedTraitIDs; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _LegacyTraitEffectActive; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITLAYERSUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITLAYERSUMMARIZER_UPDATESTART_OFFSET))(this);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITLAYERSUMMARIZER_UPDATEDONE_OFFSET))(this);
		}
	};
}
