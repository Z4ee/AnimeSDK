#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightTrait; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A56930)
#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A56970)
#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__GETFRONTTRAITS_B__1_1_OFFSET UNITYSDK_OFFSET(0x13A56A00)
#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__GETFRONTTRAITS_B__1_2_OFFSET UNITYSDK_OFFSET(0x13A56A40)
#define GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__GETFRONTTRAITS_B__1_3_OFFSET UNITYSDK_OFFSET(0x13A56980)

inline static constexpr unsigned int GridFightTraitGainFrontTraitEffect___c_TypeDefinitionIndex = 44531;

class GridFightTraitGainFrontTraitEffect___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::UInt32>** StaticGet___9__1_2()
	{
		return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitGainFrontTraitEffect___c_TypeDefinitionIndex)->GetStaticField(0x55FA0);
	}
	static ::System::Func_2<::RPG::Client::GridFightTrait*, ::RPG::GameCore::GridFightTrailLayerQuality>** StaticGet___9__1_1()
	{
		return (::System::Func_2<::RPG::Client::GridFightTrait*, ::RPG::GameCore::GridFightTrailLayerQuality>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitGainFrontTraitEffect___c_TypeDefinitionIndex)->GetStaticField(0x55FA8);
	}
	static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__1_3()
	{
		return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitGainFrontTraitEffect___c_TypeDefinitionIndex)->GetStaticField(0x55FB0);
	}
	static ::GridFightTraitGainFrontTraitEffect___c** StaticGet___9()
	{
		return (::GridFightTraitGainFrontTraitEffect___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitGainFrontTraitEffect___c_TypeDefinitionIndex)->GetStaticField(0x55FB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetFrontTraits_b__1_3(::RPG::Client::GridFightGridMember* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__GETFRONTTRAITS_B__1_3_OFFSET))(this, a1);
	}

	::RPG::GameCore::GridFightTrailLayerQuality _GetFrontTraits_b__1_1(::RPG::Client::GridFightTrait* a1)
	{
		return ((::RPG::GameCore::GridFightTrailLayerQuality(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__GETFRONTTRAITS_B__1_1_OFFSET))(this, a1);
	}

	::System::UInt32 _GetFrontTraits_b__1_2(::RPG::Client::GridFightTrait* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + GRIDFIGHTTRAITGAINFRONTTRAITEFFECT___C__GETFRONTTRAITS_B__1_2_OFFSET))(this, a1);
	}
};
