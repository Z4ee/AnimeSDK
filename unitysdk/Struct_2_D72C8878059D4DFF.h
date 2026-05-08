#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_171;
class Class_1_A312CF7E24F3D126;
class Class_1_FD893FD36F6A3A6D_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_D72C8878059D4DFF_METHOD_2_016E85CEDEE00FF4_OFFSET UNITYSDK_OFFSET(0x702B20)
#define STRUCT_2_D72C8878059D4DFF_METHOD_2_D32EB3A51853ADA1_OFFSET UNITYSDK_OFFSET(0x10C14AB0)
#define STRUCT_2_D72C8878059D4DFF__CTOR_OFFSET UNITYSDK_OFFSET(0x7029F0)

inline static constexpr unsigned int Struct_2_D72C8878059D4DFF_TypeDefinitionIndex = 62396;

struct alignas(8) Struct_2_D72C8878059D4DFF
{
	::Class_1_A312CF7E24F3D126* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_FD893FD36F6A3A6D_1*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x28

	::System::Void _ctor(::Class_1_A312CF7E24F3D126* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A312CF7E24F3D126*))((::PBYTE)hIl2Cpp + STRUCT_2_D72C8878059D4DFF__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_171* Method_2_016E85CEDEE00FF4()
	{
		return ((::Class_0_16E4307DCC419505_171*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D72C8878059D4DFF_METHOD_2_016E85CEDEE00FF4_OFFSET))(this);
	}

	static ::Struct_2_D72C8878059D4DFF Method_2_D32EB3A51853ADA1(::Class_1_A312CF7E24F3D126* a1)
	{
		return ((::Struct_2_D72C8878059D4DFF(*)(::Class_1_A312CF7E24F3D126*))((::PBYTE)hIl2Cpp + STRUCT_2_D72C8878059D4DFF_METHOD_2_D32EB3A51853ADA1_OFFSET))(a1);
	}
};
