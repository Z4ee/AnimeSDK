#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_1.h"
#include "unitysdk/Enum_3_DB663931210BBC27_2.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_A45685C36039AFF6_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1CCC3AE0)
#define CLASS_3_A45685C36039AFF6_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1CCC3AA0)
#define CLASS_3_A45685C36039AFF6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC3AD0)

inline static constexpr unsigned int Class_3_A45685C36039AFF6_TypeDefinitionIndex = 23163;

class Class_3_A45685C36039AFF6 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* GMDBHJKEAEI; // 0x18
	::Enum_3_DB663931210BBC27_1 MEPFOEEGBEA; // 0x20
	::Enum_3_DB663931210BBC27_2 GMPGDEINODK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A45685C36039AFF6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A45685C36039AFF6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A45685C36039AFF6*&))((::PBYTE)hIl2Cpp + CLASS_3_A45685C36039AFF6_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A45685C36039AFF6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A45685C36039AFF6*))((::PBYTE)hIl2Cpp + CLASS_3_A45685C36039AFF6_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
