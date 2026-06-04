#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B9D6628E5930AA50.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

class Class_1_D17272E82AE804C2_835;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define CLASS_3_0F7DD8D4BFAC6EE2_1_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xA59D490)
#define CLASS_3_0F7DD8D4BFAC6EE2_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA59D480)

inline static constexpr unsigned int Class_3_0F7DD8D4BFAC6EE2_1_TypeDefinitionIndex = 62740;

class Class_3_0F7DD8D4BFAC6EE2_1 : public ::Class_2_B9D6628E5930AA50
{
public:
	::Class_1_D17272E82AE804C2_835* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::Class_1_D17272E82AE804C2_835* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueTournPersonaStyleInfo*, ::Class_1_D17272E82AE804C2_835*))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_1_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
