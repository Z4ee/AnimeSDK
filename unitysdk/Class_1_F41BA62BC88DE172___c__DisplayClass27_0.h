#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F41BA62BC88DE172_Struct_2_03276480187CD220.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_F41BA62BC88DE172___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC616E0)
#define CLASS_1_F41BA62BC88DE172___C__DISPLAYCLASS27_0__REMOVECUEREGISTRATIONS_B__0_OFFSET UNITYSDK_OFFSET(0x1EC62020)

inline static constexpr unsigned int Class_1_F41BA62BC88DE172___c__DisplayClass27_0_TypeDefinitionIndex = 44178;

class Class_1_F41BA62BC88DE172___c__DisplayClass27_0 : public ::System::Object
{
public:
	::System::Predicate_1<::Class_1_F41BA62BC88DE172_Struct_2_03276480187CD220>* __9__0; // 0x10
	::System::Object* owner; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveCueRegistrations_b__0(::Class_1_F41BA62BC88DE172_Struct_2_03276480187CD220 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F41BA62BC88DE172_Struct_2_03276480187CD220))((::PBYTE)hIl2Cpp + CLASS_1_F41BA62BC88DE172___C__DISPLAYCLASS27_0__REMOVECUEREGISTRATIONS_B__0_OFFSET))(this, a1);
	}
};
