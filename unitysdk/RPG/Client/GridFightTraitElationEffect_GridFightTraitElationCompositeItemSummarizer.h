#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"

class Class_1_DE6E491FE63D8E69;
namespace RPG::Client { class GridFightTraitElationEffect; }

#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER_UPDATETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xD2BBF30)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0xD2BB840)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitElationEffect_GridFightTraitElationCompositeItemSummarizer_TypeDefinitionIndex = 65386;

	class GridFightTraitElationEffect_GridFightTraitElationCompositeItemSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::RPG::Client::GridFightTraitElationEffect* _TraitEffect; // 0x10

		::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER__CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateTraitEffect(::Class_1_DE6E491FE63D8E69* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DE6E491FE63D8E69*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER_UPDATETRAITEFFECT_OFFSET))(this, a1);
		}
	};
}
