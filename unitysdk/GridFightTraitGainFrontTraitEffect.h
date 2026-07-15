#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"

namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT_GETFRONTTRAITS_OFFSET UNITYSDK_OFFSET(0x16E81B90)
#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16E81B80)
#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT__GETFRONTTRAITS_B__1_0_OFFSET UNITYSDK_OFFSET(0x16E81FB0)

inline static constexpr unsigned int GridFightTraitGainFrontTraitEffect_TypeDefinitionIndex = 45402;

class GridFightTraitGainFrontTraitEffect : public ::RPG::Client::GridFightTraitEffectBase
{
public:
	::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* GetFrontTraits()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT_GETFRONTTRAITS_OFFSET))(this);
	}

	::System::Boolean _GetFrontTraits_b__1_0(::RPG::Client::GridFightTrait* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT__GETFRONTTRAITS_B__1_0_OFFSET))(this, a1);
	}
};
