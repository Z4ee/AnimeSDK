#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"

class Class_1_DE6E491FE63D8E69_1;
namespace RPG::Client { class GridFightTraitElationEffect; }

#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER_UPDATETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0x1BB0BD20)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0B630)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitElationEffect_GridFightTraitElationCompositeItemSummarizer_TypeDefinitionIndex = 65446;

	class GridFightTraitElationEffect_GridFightTraitElationCompositeItemSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::RPG::Client::GridFightTraitElationEffect* _TraitEffect; // 0x10

		::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER__CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateTraitEffect(::Class_1_DE6E491FE63D8E69_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DE6E491FE63D8E69_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER_UPDATETRAITEFFECT_OFFSET))(this, a1);
		}
	};
}
