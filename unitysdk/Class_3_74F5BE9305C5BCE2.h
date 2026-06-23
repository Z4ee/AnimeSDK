#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_0517B48635C9D397;
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_74F5BE9305C5BCE2_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x12E4A710)
#define CLASS_3_74F5BE9305C5BCE2_METHOD_3_6249445325A6227E_OFFSET UNITYSDK_OFFSET(0x12E4A7E0)
#define CLASS_3_74F5BE9305C5BCE2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15563C20)
#define CLASS_3_74F5BE9305C5BCE2__CTOR_OFFSET UNITYSDK_OFFSET(0x15563B30)

inline static constexpr unsigned int Class_3_74F5BE9305C5BCE2_TypeDefinitionIndex = 80972;

class Class_3_74F5BE9305C5BCE2 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::Class_1_0517B48635C9D397*>* Field_3_0; // 0x18
	::Class_4_B51FB35349ACD175<::MoleMole::EntityHandle>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74F5BE9305C5BCE2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74F5BE9305C5BCE2_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_6249445325A6227E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_74F5BE9305C5BCE2_METHOD_3_6249445325A6227E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74F5BE9305C5BCE2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
