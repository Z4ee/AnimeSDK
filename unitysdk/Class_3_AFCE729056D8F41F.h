#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByExtraRound; }

#define CLASS_3_AFCE729056D8F41F_METHOD_3_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x1CA71180)
#define CLASS_3_AFCE729056D8F41F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA71160)

inline static constexpr unsigned int Class_3_AFCE729056D8F41F_TypeDefinitionIndex = 43157;

class Class_3_AFCE729056D8F41F : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByExtraRound* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByExtraRound* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByExtraRound*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_AFCE729056D8F41F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AFCE729056D8F41F_METHOD_3_DFF98536D8B4074F_OFFSET))(this);
	}
};
