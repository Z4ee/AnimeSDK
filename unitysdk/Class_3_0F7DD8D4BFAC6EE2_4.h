#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B9D6628E5930AA50.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

class Class_1_D17272E82AE804C2_836;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define CLASS_3_0F7DD8D4BFAC6EE2_4_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x143F1020)
#define CLASS_3_0F7DD8D4BFAC6EE2_4__CTOR_OFFSET UNITYSDK_OFFSET(0x143F1010)

inline static constexpr unsigned int Class_3_0F7DD8D4BFAC6EE2_4_TypeDefinitionIndex = 62747;

class Class_3_0F7DD8D4BFAC6EE2_4 : public ::Class_2_B9D6628E5930AA50
{
public:
	::Class_1_D17272E82AE804C2_836* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::Class_1_D17272E82AE804C2_836* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueTournPersonaStyleInfo*, ::Class_1_D17272E82AE804C2_836*))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_4_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}
};
