#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_70C03C8ABC9526A9_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1B340C10)
#define CLASS_3_70C03C8ABC9526A9_METHOD_3_BB5DFAE4FCEC0C51_OFFSET UNITYSDK_OFFSET(0x1B340CE0)
#define CLASS_3_70C03C8ABC9526A9_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B340E70)
#define CLASS_3_70C03C8ABC9526A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1B340D80)

inline static constexpr unsigned int Class_3_70C03C8ABC9526A9_TypeDefinitionIndex = 52457;

class Class_3_70C03C8ABC9526A9 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_0; // 0x18
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_3_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70C03C8ABC9526A9__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70C03C8ABC9526A9_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_BB5DFAE4FCEC0C51(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_70C03C8ABC9526A9_METHOD_3_BB5DFAE4FCEC0C51_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70C03C8ABC9526A9_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
