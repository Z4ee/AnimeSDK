#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_28.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_325.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_542C40C133C51BAC_METHOD_2_038349821F206DD5_1_OFFSET UNITYSDK_OFFSET(0x17343120)
#define CLASS_2_542C40C133C51BAC_METHOD_2_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x17343110)
#define CLASS_2_542C40C133C51BAC_METHOD_2_43535ED8A0DF5FF8_1_OFFSET UNITYSDK_OFFSET(0x17343150)
#define CLASS_2_542C40C133C51BAC_METHOD_2_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x17343140)
#define CLASS_2_542C40C133C51BAC_METHOD_2_F5CD8BFA444150BD_1_OFFSET UNITYSDK_OFFSET(0x17343160)
#define CLASS_2_542C40C133C51BAC_METHOD_2_F5CD8BFA444150BD_OFFSET UNITYSDK_OFFSET(0x17343130)
#define CLASS_2_542C40C133C51BAC__CTOR_OFFSET UNITYSDK_OFFSET(0x17342AD0)

inline static constexpr unsigned int Class_2_542C40C133C51BAC_TypeDefinitionIndex = 10586;

class Class_2_542C40C133C51BAC : public ::Class_1_D9FAA3DCCFE14DB8_28
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_2; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_2_3; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x70

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_325 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_325, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_542C40C133C51BAC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_542C40C133C51BAC_METHOD_2_038349821F206DD5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_038349821F206DD5_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_542C40C133C51BAC_METHOD_2_038349821F206DD5_1_OFFSET))(this);
	}

	::System::Void Method_2_F5CD8BFA444150BD(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_542C40C133C51BAC_METHOD_2_F5CD8BFA444150BD_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_542C40C133C51BAC_METHOD_2_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_43535ED8A0DF5FF8_1()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_542C40C133C51BAC_METHOD_2_43535ED8A0DF5FF8_1_OFFSET))(this);
	}

	::System::Void Method_2_F5CD8BFA444150BD_1(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_542C40C133C51BAC_METHOD_2_F5CD8BFA444150BD_1_OFFSET))(this, a1);
	}
};
