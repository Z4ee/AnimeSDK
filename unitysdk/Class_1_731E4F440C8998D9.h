#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_452;
class Class_1_D7C7ABA05560413C;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_731E4F440C8998D9_METHOD_1_4CA8B5F8462FA46F_OFFSET UNITYSDK_OFFSET(0x1632F670)
#define CLASS_1_731E4F440C8998D9_METHOD_1_E0FD9E63CC6C2146_OFFSET UNITYSDK_OFFSET(0x1632F460)
#define CLASS_1_731E4F440C8998D9_METHOD_1_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x1632F3D0)
#define CLASS_1_731E4F440C8998D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1632F380)

inline static constexpr unsigned int Class_1_731E4F440C8998D9_TypeDefinitionIndex = 62852;

class Class_1_731E4F440C8998D9 : public ::System::Object
{
public:
	::Class_1_D7C7ABA05560413C* INKJDHFKFNP; // 0x10
	::Class_0_16E4307DCC419505_452* BBHLBMONOIJ; // 0x18
	::Struct_2_BC950E36747FB4C9 ODMGLBEOBDP; // 0x20

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9& a1, ::Class_1_D7C7ABA05560413C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Class_1_D7C7ABA05560413C*))((::PBYTE)hIl2Cpp + CLASS_1_731E4F440C8998D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FAA945ED465745BC(::Class_0_16E4307DCC419505_452* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_452*))((::PBYTE)hIl2Cpp + CLASS_1_731E4F440C8998D9_METHOD_1_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_E0FD9E63CC6C2146(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_731E4F440C8998D9_METHOD_1_E0FD9E63CC6C2146_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Method_1_4CA8B5F8462FA46F()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_731E4F440C8998D9_METHOD_1_4CA8B5F8462FA46F_OFFSET))(this);
	}
};
