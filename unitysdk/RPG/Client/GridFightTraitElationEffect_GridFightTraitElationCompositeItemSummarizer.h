#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"

class Class_1_4AC309666BC73BC1_1;
namespace RPG::Client { class GridFightTraitElationEffect; }

#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER_UPDATETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xA5BAEF0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BA730)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER___IFIXBASEPROXY_UPDATETRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xA5BB1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitElationEffect_GridFightTraitElationCompositeItemSummarizer_TypeDefinitionIndex = 60207;

	class GridFightTraitElationEffect_GridFightTraitElationCompositeItemSummarizer : public ::Class_1_6D4DDF404C3CCC18
	{
	public:
		::RPG::Client::GridFightTraitElationEffect* _TraitEffect; // 0x10

		::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* traitEffect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER__CTOR_OFFSET))(this, traitEffect);
		}

		::System::Void UpdateTraitEffect(::Class_1_4AC309666BC73BC1_1* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AC309666BC73BC1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER_UPDATETRAITEFFECT_OFFSET))(this, update);
		}

		::System::Void __iFixBaseProxy_UpdateTraitEffect(::Class_1_4AC309666BC73BC1_1* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4AC309666BC73BC1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTTRAITELATIONCOMPOSITEITEMSUMMARIZER___IFIXBASEPROXY_UPDATETRAITEFFECT_OFFSET))(this, P0);
		}
	};
}
