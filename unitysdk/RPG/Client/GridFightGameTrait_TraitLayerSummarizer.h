#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITLAYERSUMMARIZER_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x98483D0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITLAYERSUMMARIZER_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x9847C80)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITLAYERSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x9848CA0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITLAYERSUMMARIZER___IFIXBASEPROXY_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x9848EA0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITLAYERSUMMARIZER___IFIXBASEPROXY_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x9848E40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait_TraitLayerSummarizer_TypeDefinitionIndex = 53095;

	class GridFightGameTrait_TraitLayerSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _LegacyTraitLayer; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UpgradedTraitIDs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _LegacyTraitEffectActive; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivedTraitEffectIDs; // 0x28

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

		::System::Void __iFixBaseProxy_UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITLAYERSUMMARIZER___IFIXBASEPROXY_UPDATESTART_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT_TRAITLAYERSUMMARIZER___IFIXBASEPROXY_UPDATEDONE_OFFSET))(this);
		}
	};
}
