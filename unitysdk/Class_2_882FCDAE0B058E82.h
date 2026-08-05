#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DB4B27FBA0545EF9.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_EBCA2A4357C4C8BF_16;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_882FCDAE0B058E82_METHOD_2_7D172275774B1915_OFFSET UNITYSDK_OFFSET(0x135CBA80)
#define CLASS_2_882FCDAE0B058E82_METHOD_2_84D2CF41A744CC73_OFFSET UNITYSDK_OFFSET(0x135CBD40)
#define CLASS_2_882FCDAE0B058E82_METHOD_2_AB33F45627CD4851_OFFSET UNITYSDK_OFFSET(0x135CC7B0)
#define CLASS_2_882FCDAE0B058E82_METHOD_2_F741817FEC212E8A_OFFSET UNITYSDK_OFFSET(0x135CBB70)
#define CLASS_2_882FCDAE0B058E82__CTOR_OFFSET UNITYSDK_OFFSET(0x135CB990)

inline static constexpr unsigned int Class_2_882FCDAE0B058E82_TypeDefinitionIndex = 81050;

class Class_2_882FCDAE0B058E82 : public ::Class_1_DB4B27FBA0545EF9
{
public:
	::Il2CppArray<::System::String*>* Field_2_6; // 0x28
	::Il2CppArray<::System::Char>* Field_2_5; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::System::Int32 Field_2_7; // 0x4C
	::System::Int32 Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_882FCDAE0B058E82__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7D172275774B1915(::Class_1_EBCA2A4357C4C8BF_16* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBCA2A4357C4C8BF_16*))((::PBYTE)hIl2Cpp + CLASS_2_882FCDAE0B058E82_METHOD_2_7D172275774B1915_OFFSET))(this, a1);
	}

	::System::Void Method_2_F741817FEC212E8A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_882FCDAE0B058E82_METHOD_2_F741817FEC212E8A_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_AB33F45627CD4851(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_882FCDAE0B058E82_METHOD_2_AB33F45627CD4851_OFFSET))(this, a1);
	}

	::System::Void Method_2_84D2CF41A744CC73(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_882FCDAE0B058E82_METHOD_2_84D2CF41A744CC73_OFFSET))(this, a1);
	}
};
