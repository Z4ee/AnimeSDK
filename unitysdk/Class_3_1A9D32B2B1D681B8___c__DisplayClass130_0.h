#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }

#define CLASS_3_1A9D32B2B1D681B8___C__DISPLAYCLASS130_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A03A0D0)
#define CLASS_3_1A9D32B2B1D681B8___C__DISPLAYCLASS130_0___GETPIECETYPEWEIGHT_B__0_OFFSET UNITYSDK_OFFSET(0x1A043E20)

inline static constexpr unsigned int Class_3_1A9D32B2B1D681B8___c__DisplayClass130_0_TypeDefinitionIndex = 40488;

class Class_3_1A9D32B2B1D681B8___c__DisplayClass130_0 : public ::System::Object
{
public:
	::System::UInt32 itemPackCount; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1A9D32B2B1D681B8___C__DISPLAYCLASS130_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetPieceTypeWeight_b__0(::RPG::GameCore::Match3::BirdPieceTypeWeightConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1A9D32B2B1D681B8___C__DISPLAYCLASS130_0___GETPIECETYPEWEIGHT_B__0_OFFSET))(this, a1);
	}
};
