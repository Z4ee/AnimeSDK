#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_418;
class Class_0_16E4307DCC419505_419;
class Class_0_16E4307DCC419505_420;
class Class_1_A3A2B28DB41BA84A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_FCEC4F42FDC8F319_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x146943A0)
#define CLASS_1_FCEC4F42FDC8F319_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x146944A0)
#define CLASS_1_FCEC4F42FDC8F319_METHOD_1_2B0D9265C19E15C8_OFFSET UNITYSDK_OFFSET(0x14694410)
#define CLASS_1_FCEC4F42FDC8F319_METHOD_1_63882E0318B95793_OFFSET UNITYSDK_OFFSET(0x14694B00)
#define CLASS_1_FCEC4F42FDC8F319_METHOD_1_AD6DA1DFA69DF1D0_OFFSET UNITYSDK_OFFSET(0x146942C0)
#define CLASS_1_FCEC4F42FDC8F319_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x14694230)
#define CLASS_1_FCEC4F42FDC8F319__CTOR_OFFSET UNITYSDK_OFFSET(0x14694110)

inline static constexpr unsigned int Class_1_FCEC4F42FDC8F319_TypeDefinitionIndex = 60008;

class Class_1_FCEC4F42FDC8F319 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_418* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_419* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_420* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_3; // 0x28
	::Struct_2_BC950E36747FB4C9 Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x38

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::Class_0_16E4307DCC419505_420* a2, ::Class_0_16E4307DCC419505_418* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_0_16E4307DCC419505_420*, ::Class_0_16E4307DCC419505_418*))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_419* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_419*))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AD6DA1DFA69DF1D0(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319_METHOD_1_AD6DA1DFA69DF1D0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Method_1_2B0D9265C19E15C8()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319_METHOD_1_2B0D9265C19E15C8_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_1_63882E0318B95793(::Class_1_A3A2B28DB41BA84A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A3A2B28DB41BA84A*))((::PBYTE)hIl2Cpp + CLASS_1_FCEC4F42FDC8F319_METHOD_1_63882E0318B95793_OFFSET))(this, a1);
	}
};
