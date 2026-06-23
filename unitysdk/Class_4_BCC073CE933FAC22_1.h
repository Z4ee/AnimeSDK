#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_BCC073CE933FAC22_1_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1503B820)
#define CLASS_4_BCC073CE933FAC22_1_METHOD_4_35F547E2E9169F4B_OFFSET UNITYSDK_OFFSET(0x1503BA10)
#define CLASS_4_BCC073CE933FAC22_1_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1503BD70)
#define CLASS_4_BCC073CE933FAC22_1_METHOD_4_D451F26A6A233EA1_OFFSET UNITYSDK_OFFSET(0x1503B960)
#define CLASS_4_BCC073CE933FAC22_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1503BC20)

inline static constexpr unsigned int Class_4_BCC073CE933FAC22_1_TypeDefinitionIndex = 62265;

class Class_4_BCC073CE933FAC22_1 : public ::Class_3_3B7CFC169AD8410C
{
public:
	::Class_4_B51FB35349ACD175<::MoleMole::EntityHandle>* Field_4_1; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_4_0; // 0x20
	::Class_3_B537A0AA78803363* Field_4_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BCC073CE933FAC22_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BCC073CE933FAC22_1_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_D451F26A6A233EA1(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_29439DBE2B63DCF3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_BCC073CE933FAC22_1_METHOD_4_D451F26A6A233EA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_35F547E2E9169F4B(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_BCC073CE933FAC22_1_METHOD_4_35F547E2E9169F4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BCC073CE933FAC22_1_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
