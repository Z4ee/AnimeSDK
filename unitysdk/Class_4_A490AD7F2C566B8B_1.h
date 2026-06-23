#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_A490AD7F2C566B8B_1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1794E550)
#define CLASS_4_A490AD7F2C566B8B_1_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1794E230)
#define CLASS_4_A490AD7F2C566B8B_1_METHOD_4_8B1A8C9871F6A881_OFFSET UNITYSDK_OFFSET(0x1794E310)
#define CLASS_4_A490AD7F2C566B8B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1794E460)

inline static constexpr unsigned int Class_4_A490AD7F2C566B8B_1_TypeDefinitionIndex = 84563;

class Class_4_A490AD7F2C566B8B_1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_1; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A490AD7F2C566B8B_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A490AD7F2C566B8B_1_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_8B1A8C9871F6A881(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_A490AD7F2C566B8B_1_METHOD_4_8B1A8C9871F6A881_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A490AD7F2C566B8B_1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
