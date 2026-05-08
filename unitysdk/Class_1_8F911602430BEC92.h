#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_46F3CFD626EFE3F5.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8F911602430BEC92_METHOD_1_6249445325A6227E_OFFSET UNITYSDK_OFFSET(0x119A14A0)
#define CLASS_1_8F911602430BEC92__CTOR_OFFSET UNITYSDK_OFFSET(0x119A19A0)

inline static constexpr unsigned int Class_1_8F911602430BEC92_TypeDefinitionIndex = 71896;

class Class_1_8F911602430BEC92 : public ::System::Object
{
public:
	::System::Int32 Field_1_4; // 0x10
	::System::Int16 Field_1_1; // 0x14
	::System::Int16 Field_1_0; // 0x16
	::System::Int32 Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F911602430BEC92__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6249445325A6227E(::Struct_2_46F3CFD626EFE3F5& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_46F3CFD626EFE3F5&))((::PBYTE)hIl2Cpp + CLASS_1_8F911602430BEC92_METHOD_1_6249445325A6227E_OFFSET))(this, a1);
	}
};
