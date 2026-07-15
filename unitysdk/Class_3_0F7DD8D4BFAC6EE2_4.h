#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B9D6628E5930AA50.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_1_D17272E82AE804C2_953;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define CLASS_3_0F7DD8D4BFAC6EE2_4_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1709B720)
#define CLASS_3_0F7DD8D4BFAC6EE2_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1709B710)

inline static constexpr unsigned int Class_3_0F7DD8D4BFAC6EE2_4_TypeDefinitionIndex = 64114;

class Class_3_0F7DD8D4BFAC6EE2_4 : public ::Class_2_B9D6628E5930AA50
{
public:
	::Class_1_D17272E82AE804C2_953* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::Class_1_D17272E82AE804C2_953* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueTournPersonaStyleInfo*, ::Class_1_D17272E82AE804C2_953*))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_4_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}
};
