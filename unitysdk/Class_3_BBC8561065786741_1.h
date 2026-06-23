#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_BBC8561065786741_1_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x153D2120)
#define CLASS_3_BBC8561065786741_1_METHOD_3_7CBAE0C0459DC29C_OFFSET UNITYSDK_OFFSET(0x153D22D0)
#define CLASS_3_BBC8561065786741_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x153D2580)
#define CLASS_3_BBC8561065786741_1__CTOR_OFFSET UNITYSDK_OFFSET(0x153D2440)

inline static constexpr unsigned int Class_3_BBC8561065786741_1_TypeDefinitionIndex = 66011;

class Class_3_BBC8561065786741_1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_3_1; // 0x20
	::Class_4_B51FB35349ACD175<::System::Single>* Field_3_2; // 0x28
	::Class_3_B537A0AA78803363* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBC8561065786741_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBC8561065786741_1_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_7CBAE0C0459DC29C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_BBC8561065786741_1_METHOD_3_7CBAE0C0459DC29C_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BBC8561065786741_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
