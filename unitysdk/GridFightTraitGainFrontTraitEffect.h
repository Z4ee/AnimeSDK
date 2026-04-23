#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"

namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT_GETFRONTTRAITS_OFFSET UNITYSDK_OFFSET(0x11AE28B0)
#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE28A0)
#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT__GETFRONTTRAITS_B__1_0_OFFSET UNITYSDK_OFFSET(0x11AE2BA0)

inline static constexpr unsigned int GridFightTraitGainFrontTraitEffect_TypeDefinitionIndex = 43984;

class GridFightTraitGainFrontTraitEffect : public ::RPG::Client::GridFightTraitEffectBase
{
public:
	::System::Void _ctor(::System::UInt32 id, ::RPG::Client::GridFightTrait* trait)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT__CTOR_OFFSET))(this, id, trait);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* GetFrontTraits()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT_GETFRONTTRAITS_OFFSET))(this);
	}

	::System::Boolean _GetFrontTraits_b__1_0(::RPG::Client::GridFightTrait* trait)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT__GETFRONTTRAITS_B__1_0_OFFSET))(this, trait);
	}
};
