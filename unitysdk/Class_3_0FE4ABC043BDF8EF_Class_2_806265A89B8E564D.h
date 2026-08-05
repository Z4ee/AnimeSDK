#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0FE4ABC043BDF8EF_Class_1_A0BFCF19234E844F.h"
#include "unitysdk/Class_3_0FE4ABC043BDF8EF_Struct_2_0839504A496058D2.h"
#include "unitysdk/Foundation/FTuple_1.h"

class Class_3_0FE4ABC043BDF8EF;
class Class_3_0FE4ABC043BDF8EF_Class_3_A66AC8B2EA4BD941;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0FE4ABC043BDF8EF_CLASS_2_806265A89B8E564D_METHOD_2_94936E05BA708C33_OFFSET UNITYSDK_OFFSET(0x13D09720)
#define CLASS_3_0FE4ABC043BDF8EF_CLASS_2_806265A89B8E564D_METHOD_2_BF64A888282E9936_OFFSET UNITYSDK_OFFSET(0x13D09520)
#define CLASS_3_0FE4ABC043BDF8EF_CLASS_2_806265A89B8E564D__CTOR_OFFSET UNITYSDK_OFFSET(0x13D09490)

inline static constexpr unsigned int Class_3_0FE4ABC043BDF8EF_Class_2_806265A89B8E564D_TypeDefinitionIndex = 77149;

class Class_3_0FE4ABC043BDF8EF_Class_2_806265A89B8E564D : public ::Class_3_0FE4ABC043BDF8EF_Class_1_A0BFCF19234E844F
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_1; // 0x28

	::System::Void _ctor(::Class_3_0FE4ABC043BDF8EF_Struct_2_0839504A496058D2 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0FE4ABC043BDF8EF_Struct_2_0839504A496058D2, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_0FE4ABC043BDF8EF_CLASS_2_806265A89B8E564D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BF64A888282E9936(::Class_3_0FE4ABC043BDF8EF_Class_3_A66AC8B2EA4BD941* a1, ::Foundation::FTuple_1<::Class_3_0FE4ABC043BDF8EF*>& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0FE4ABC043BDF8EF_Class_3_A66AC8B2EA4BD941*, ::Foundation::FTuple_1<::Class_3_0FE4ABC043BDF8EF*>&))((::PBYTE)hIl2Cpp + CLASS_3_0FE4ABC043BDF8EF_CLASS_2_806265A89B8E564D_METHOD_2_BF64A888282E9936_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_94936E05BA708C33(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_0FE4ABC043BDF8EF_CLASS_2_806265A89B8E564D_METHOD_2_94936E05BA708C33_OFFSET))(this, a1);
	}
};
