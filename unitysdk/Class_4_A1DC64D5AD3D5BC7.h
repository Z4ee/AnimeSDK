#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/Foundation/ViewObject/Structures/FSplineSessionArgs.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_B537A0AA78803363;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_A1DC64D5AD3D5BC7_METHOD_4_12767D65AF3A4C36_OFFSET UNITYSDK_OFFSET(0x114ACEF0)
#define CLASS_4_A1DC64D5AD3D5BC7_METHOD_4_40ADD521454F83C7_OFFSET UNITYSDK_OFFSET(0x114AD6E0)
#define CLASS_4_A1DC64D5AD3D5BC7_METHOD_4_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x114ACAD0)
#define CLASS_4_A1DC64D5AD3D5BC7_METHOD_4_581007A0A075FF46_OFFSET UNITYSDK_OFFSET(0x114AD440)
#define CLASS_4_A1DC64D5AD3D5BC7_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x114ADA20)
#define CLASS_4_A1DC64D5AD3D5BC7_METHOD_4_D451F26A6A233EA1_OFFSET UNITYSDK_OFFSET(0x114ACE40)
#define CLASS_4_A1DC64D5AD3D5BC7__CTOR_OFFSET UNITYSDK_OFFSET(0x114AD770)

inline static constexpr unsigned int Class_4_A1DC64D5AD3D5BC7_TypeDefinitionIndex = 55526;

class Class_4_A1DC64D5AD3D5BC7 : public ::Class_3_3B7CFC169AD8410C
{
public:
	::Class_4_8D3E479B491881B3<::MoleMole::Config::Spline_WayPoint>* Field_4_6; // 0x18
	::Class_4_2FF7D360A2F3EC48<::MoleMole::Config::Spline_WayPoint>* Field_4_2; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_3; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x38
	::Class_3_B537A0AA78803363* Field_4_11; // 0x40
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_5; // 0x48
	::Class_4_8D3E479B491881B3<::System::String*>* Field_4_7; // 0x50
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1DC64D5AD3D5BC7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1DC64D5AD3D5BC7_METHOD_4_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_4_D451F26A6A233EA1(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_29439DBE2B63DCF3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_A1DC64D5AD3D5BC7_METHOD_4_D451F26A6A233EA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_12767D65AF3A4C36(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_A1DC64D5AD3D5BC7_METHOD_4_12767D65AF3A4C36_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_4_40ADD521454F83C7(::Struct_2_29439DBE2B63DCF3& a1, ::Foundation::ViewObject::Structures::FSplineSessionArgs& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Foundation::ViewObject::Structures::FSplineSessionArgs&))((::PBYTE)hIl2Cpp + CLASS_4_A1DC64D5AD3D5BC7_METHOD_4_40ADD521454F83C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_A1DC64D5AD3D5BC7_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_4_581007A0A075FF46(::Struct_2_29439DBE2B63DCF3& a1, ::Foundation::ViewObject::Structures::FSplineSessionArgs& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Foundation::ViewObject::Structures::FSplineSessionArgs&))((::PBYTE)hIl2Cpp + CLASS_4_A1DC64D5AD3D5BC7_METHOD_4_581007A0A075FF46_OFFSET))(this, a1, a2);
	}
};
