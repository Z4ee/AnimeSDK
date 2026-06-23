#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_A490AD7F2C566B8B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x133E29A0)
#define CLASS_4_A490AD7F2C566B8B_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x133E2680)
#define CLASS_4_A490AD7F2C566B8B_METHOD_4_8B1A8C9871F6A881_OFFSET UNITYSDK_OFFSET(0x133E2760)
#define CLASS_4_A490AD7F2C566B8B__CTOR_OFFSET UNITYSDK_OFFSET(0x133E28B0)

inline static constexpr unsigned int Class_4_A490AD7F2C566B8B_TypeDefinitionIndex = 51360;

class Class_4_A490AD7F2C566B8B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A490AD7F2C566B8B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A490AD7F2C566B8B_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_8B1A8C9871F6A881(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_A490AD7F2C566B8B_METHOD_4_8B1A8C9871F6A881_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A490AD7F2C566B8B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
