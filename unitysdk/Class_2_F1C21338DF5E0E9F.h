#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DB4B27FBA0545EF9.h"

class Class_2_208CC9941471731A_12;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F1C21338DF5E0E9F_METHOD_2_EA89F78273805D23_OFFSET UNITYSDK_OFFSET(0xE87A0C0)
#define CLASS_2_F1C21338DF5E0E9F__CTOR_OFFSET UNITYSDK_OFFSET(0xE87A0B0)

inline static constexpr unsigned int Class_2_F1C21338DF5E0E9F_TypeDefinitionIndex = 68111;

class Class_2_F1C21338DF5E0E9F : public ::Class_1_DB4B27FBA0545EF9
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x28
	::System::String* Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x38
	::System::Int32 Field_2_1; // 0x3C
	::System::Int32 Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1C21338DF5E0E9F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EA89F78273805D23(::Class_2_208CC9941471731A_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_12*))((::PBYTE)hIl2Cpp + CLASS_2_F1C21338DF5E0E9F_METHOD_2_EA89F78273805D23_OFFSET))(this, a1);
	}
};
