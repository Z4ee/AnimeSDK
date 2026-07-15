#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_D8BECDCE48063EC7;
class Class_2_AEE59ED8DADEC1A1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CD4EC20BEBA8A2DA_METHOD_1_211A20D2D0E24D5E_OFFSET UNITYSDK_OFFSET(0x198F6C90)
#define CLASS_1_CD4EC20BEBA8A2DA_METHOD_1_2C2F7B8BC8763B74_OFFSET UNITYSDK_OFFSET(0x198F6700)
#define CLASS_1_CD4EC20BEBA8A2DA__CTOR_OFFSET UNITYSDK_OFFSET(0x198F66F0)

inline static constexpr unsigned int Class_1_CD4EC20BEBA8A2DA_TypeDefinitionIndex = 34824;

class Class_1_CD4EC20BEBA8A2DA : public ::System::Object
{
public:
	::Class_1_D8BECDCE48063EC7* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_D8BECDCE48063EC7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_1_CD4EC20BEBA8A2DA__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_2C2F7B8BC8763B74(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_CD4EC20BEBA8A2DA_METHOD_1_2C2F7B8BC8763B74_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_211A20D2D0E24D5E(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_CD4EC20BEBA8A2DA_METHOD_1_211A20D2D0E24D5E_OFFSET))(this, a1, a2);
	}
};
