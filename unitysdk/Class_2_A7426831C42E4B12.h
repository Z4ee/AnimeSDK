#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_238.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_673.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A7426831C42E4B12_METHOD_2_038349821F206DD5_1_OFFSET UNITYSDK_OFFSET(0x1B7A2C60)
#define CLASS_2_A7426831C42E4B12_METHOD_2_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x1B7A2C50)
#define CLASS_2_A7426831C42E4B12_METHOD_2_43535ED8A0DF5FF8_1_OFFSET UNITYSDK_OFFSET(0x1B7A2C90)
#define CLASS_2_A7426831C42E4B12_METHOD_2_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x1B7A2C80)
#define CLASS_2_A7426831C42E4B12_METHOD_2_F5CD8BFA444150BD_1_OFFSET UNITYSDK_OFFSET(0x1B7A2C70)
#define CLASS_2_A7426831C42E4B12_METHOD_2_F5CD8BFA444150BD_OFFSET UNITYSDK_OFFSET(0x1B7A2C40)
#define CLASS_2_A7426831C42E4B12__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A2470)

inline static constexpr unsigned int Class_2_A7426831C42E4B12_TypeDefinitionIndex = 12632;

class Class_2_A7426831C42E4B12 : public ::Class_1_5DA2E7556103D5A3_238
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_3; // 0x60
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* Field_2_2; // 0x70
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x78

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_673 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_673, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_A7426831C42E4B12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F5CD8BFA444150BD(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_A7426831C42E4B12_METHOD_2_F5CD8BFA444150BD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7426831C42E4B12_METHOD_2_038349821F206DD5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7426831C42E4B12_METHOD_2_038349821F206DD5_1_OFFSET))(this);
	}

	::System::Void Method_2_F5CD8BFA444150BD_1(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_A7426831C42E4B12_METHOD_2_F5CD8BFA444150BD_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7426831C42E4B12_METHOD_2_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_43535ED8A0DF5FF8_1()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7426831C42E4B12_METHOD_2_43535ED8A0DF5FF8_1_OFFSET))(this);
	}
};
