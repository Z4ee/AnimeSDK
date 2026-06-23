#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_DDE09308486304B4_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x171B16E0)
#define CLASS_3_DDE09308486304B4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x171B1AF0)
#define CLASS_3_DDE09308486304B4_METHOD_3_FBF8C3E154D7D02B_OFFSET UNITYSDK_OFFSET(0x171B17B0)
#define CLASS_3_DDE09308486304B4__CTOR_OFFSET UNITYSDK_OFFSET(0x171B1A00)

inline static constexpr unsigned int Class_3_DDE09308486304B4_TypeDefinitionIndex = 73372;

class Class_3_DDE09308486304B4 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_B51FB35349ACD175<::MoleMole::EntityHandle>* Field_3_1; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDE09308486304B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDE09308486304B4_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_FBF8C3E154D7D02B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_DDE09308486304B4_METHOD_3_FBF8C3E154D7D02B_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDE09308486304B4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
