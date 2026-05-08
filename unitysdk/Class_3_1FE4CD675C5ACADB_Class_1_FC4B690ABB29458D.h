#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_1FE4CD675C5ACADB;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_3_1FE4CD675C5ACADB_CLASS_1_FC4B690ABB29458D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12B81550)
#define CLASS_3_1FE4CD675C5ACADB_CLASS_1_FC4B690ABB29458D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12B82F70)
#define CLASS_3_1FE4CD675C5ACADB_CLASS_1_FC4B690ABB29458D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12B82FD0)
#define CLASS_3_1FE4CD675C5ACADB_CLASS_1_FC4B690ABB29458D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12B82F80)
#define CLASS_3_1FE4CD675C5ACADB_CLASS_1_FC4B690ABB29458D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B81540)
#define CLASS_3_1FE4CD675C5ACADB_CLASS_1_FC4B690ABB29458D__CTOR_OFFSET UNITYSDK_OFFSET(0x12B81530)

inline static constexpr unsigned int Class_3_1FE4CD675C5ACADB_Class_1_FC4B690ABB29458D_TypeDefinitionIndex = 70218;

class Class_3_1FE4CD675C5ACADB_Class_1_FC4B690ABB29458D : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_5; // 0x10
	::Il2CppArray<::System::Boolean>* Field_1_3; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_4; // 0x20
	::Class_3_1FE4CD675C5ACADB* Field_1_2; // 0x28
	::System::Single Field_1_1; // 0x30
	::System::Int32 Field_1_0; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1FE4CD675C5ACADB_CLASS_1_FC4B690ABB29458D__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FE4CD675C5ACADB_CLASS_1_FC4B690ABB29458D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FE4CD675C5ACADB_CLASS_1_FC4B690ABB29458D_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FE4CD675C5ACADB_CLASS_1_FC4B690ABB29458D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FE4CD675C5ACADB_CLASS_1_FC4B690ABB29458D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1FE4CD675C5ACADB_CLASS_1_FC4B690ABB29458D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
