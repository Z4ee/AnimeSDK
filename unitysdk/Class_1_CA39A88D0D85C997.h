#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_138FF8CC421063DF_Enum_3_008F0D08BF90D750.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_167BB37617B940E3;
class Class_3_248DACE3BB3053DD;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }

#define CLASS_1_CA39A88D0D85C997_METHOD_1_5A9BD0387A403AC6_OFFSET UNITYSDK_OFFSET(0x11C0C510)
#define CLASS_1_CA39A88D0D85C997_METHOD_1_CA966622B9737655_OFFSET UNITYSDK_OFFSET(0x11C0BB50)

inline static constexpr unsigned int Class_1_CA39A88D0D85C997_TypeDefinitionIndex = 49253;

class Class_1_CA39A88D0D85C997 : public ::System::Object
{
public:
	static ::System::Void Method_1_CA966622B9737655(::Class_3_DFD5D1FDB9D2A4AC* a1, ::MoleMole::Config::ConfigPosRot* a2, ::System::Boolean a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Boolean a6, ::Class_1_138FF8CC421063DF_Enum_3_008F0D08BF90D750 a7, ::Class_3_248DACE3BB3053DD* a8, ::System::Single a9, ::System::Single a10, ::Class_2_167BB37617B940E3* a11)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::Class_1_138FF8CC421063DF_Enum_3_008F0D08BF90D750, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_1_CA39A88D0D85C997_METHOD_1_CA966622B9737655_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	static ::System::Void Method_1_5A9BD0387A403AC6(::MoleMole::Config::ConfigPosRot* a1, ::Class_1_138FF8CC421063DF_Enum_3_008F0D08BF90D750 a2, ::Class_3_248DACE3BB3053DD* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_2_167BB37617B940E3* a6)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigPosRot*, ::Class_1_138FF8CC421063DF_Enum_3_008F0D08BF90D750, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_1_CA39A88D0D85C997_METHOD_1_5A9BD0387A403AC6_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
