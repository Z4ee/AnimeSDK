#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_66FEE2A3AB350472_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1559C4E0)
#define CLASS_4_66FEE2A3AB350472_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1559C130)
#define CLASS_4_66FEE2A3AB350472_METHOD_4_60CD0479C3A8133D_OFFSET UNITYSDK_OFFSET(0x1559C210)
#define CLASS_4_66FEE2A3AB350472__CTOR_OFFSET UNITYSDK_OFFSET(0x1559C3F0)

inline static constexpr unsigned int Class_4_66FEE2A3AB350472_TypeDefinitionIndex = 82694;

class Class_4_66FEE2A3AB350472 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_66FEE2A3AB350472__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_66FEE2A3AB350472_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_60CD0479C3A8133D(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_66FEE2A3AB350472_METHOD_4_60CD0479C3A8133D_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_66FEE2A3AB350472_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
