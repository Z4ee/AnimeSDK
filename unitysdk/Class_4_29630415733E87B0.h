#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_29630415733E87B0_METHOD_4_44B3AD874B4A16BA_OFFSET UNITYSDK_OFFSET(0x143748B0)
#define CLASS_4_29630415733E87B0_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14374E00)
#define CLASS_4_29630415733E87B0_METHOD_4_D451F26A6A233EA1_OFFSET UNITYSDK_OFFSET(0x14374800)
#define CLASS_4_29630415733E87B0_METHOD_4_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x14374600)
#define CLASS_4_29630415733E87B0__CTOR_OFFSET UNITYSDK_OFFSET(0x14374C40)

inline static constexpr unsigned int Class_4_29630415733E87B0_TypeDefinitionIndex = 47040;

class Class_4_29630415733E87B0 : public ::Class_3_3B7CFC169AD8410C
{
public:
	::Class_3_B537A0AA78803363* Field_4_4; // 0x18
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_3; // 0x20
	::Class_4_8D3E479B491881B3<::MoleMole::Config::Spline_WayPoint>* Field_4_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x30
	::Class_4_8D3E479B491881B3<::System::String*>* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_29630415733E87B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_29630415733E87B0_METHOD_4_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_4_D451F26A6A233EA1(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_29439DBE2B63DCF3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_29630415733E87B0_METHOD_4_D451F26A6A233EA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_44B3AD874B4A16BA(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_29630415733E87B0_METHOD_4_44B3AD874B4A16BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_29630415733E87B0_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
