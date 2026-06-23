#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_532BF80753ABBBED.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/Struct_2_E33A8767CD3B76C6.h"

#define CLASS_3_66061C16C0C163AC_1_METHOD_3_1102911C892F05AA_OFFSET UNITYSDK_OFFSET(0x19029B70)
#define CLASS_3_66061C16C0C163AC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19029CC0)

inline static constexpr unsigned int Class_3_66061C16C0C163AC_1_TypeDefinitionIndex = 85979;

class Class_3_66061C16C0C163AC_1 : public ::Class_2_532BF80753ABBBED<::MoleMole::EntityHandle>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66061C16C0C163AC_1__CTOR_OFFSET))(this);
	}

	::Struct_2_E33A8767CD3B76C6 Method_3_1102911C892F05AA(::Struct_2_174BD6D3EB04B2EE& a1)
	{
		return ((::Struct_2_E33A8767CD3B76C6(*)(::PVOID, ::Struct_2_174BD6D3EB04B2EE&))((::PBYTE)hIl2Cpp + CLASS_3_66061C16C0C163AC_1_METHOD_3_1102911C892F05AA_OFFSET))(this, a1);
	}
};
