#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF860E4BE665C11B_Struct_2_296A3483C1E7F715.h"
#include "unitysdk/System/Object.h"

class Class_3_2E3842146FD1D5DE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EF860E4BE665C11B_METHOD_1_924DF796D698D5D2_OFFSET UNITYSDK_OFFSET(0x1825EE10)
#define CLASS_1_EF860E4BE665C11B_METHOD_1_B9CC25339701EF17_OFFSET UNITYSDK_OFFSET(0x1825F1E0)
#define CLASS_1_EF860E4BE665C11B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1825EA40)
#define CLASS_1_EF860E4BE665C11B__CTOR_OFFSET UNITYSDK_OFFSET(0x1825E7D0)

inline static constexpr unsigned int Class_1_EF860E4BE665C11B_TypeDefinitionIndex = 55677;

class Class_1_EF860E4BE665C11B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_EF860E4BE665C11B_Struct_2_296A3483C1E7F715>* Field_1_7; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_1_EF860E4BE665C11B_Struct_2_296A3483C1E7F715>* Field_1_6; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::Int32 Field_1_5; // 0x2C
	::System::UInt32 Field_1_3; // 0x30
	::System::Int32 Field_1_1; // 0x34
	::System::Int32 Field_1_0; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_EF860E4BE665C11B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::Class_3_2E3842146FD1D5DE* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_2E3842146FD1D5DE*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_EF860E4BE665C11B__CTOR_1_OFFSET))(this, a1, a2);
	}

	::Class_3_2E3842146FD1D5DE* Method_1_924DF796D698D5D2()
	{
		return ((::Class_3_2E3842146FD1D5DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF860E4BE665C11B_METHOD_1_924DF796D698D5D2_OFFSET))(this);
	}

	::System::Int32 Method_1_B9CC25339701EF17(::System::Collections::Generic::IReadOnlyList_1<::Class_1_EF860E4BE665C11B_Struct_2_296A3483C1E7F715>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_EF860E4BE665C11B_Struct_2_296A3483C1E7F715>*))((::PBYTE)hIl2Cpp + CLASS_1_EF860E4BE665C11B_METHOD_1_B9CC25339701EF17_OFFSET))(this, a1);
	}
};
