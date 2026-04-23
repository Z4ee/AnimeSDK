#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_23A3535C3AD26D5F.h"
#include "unitysdk/System/Object.h"

class Class_1_C949F9179159C647;
class Class_1_D8BF25BB97CB2B9D;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCD2F370)
#define CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCD2F9F0)
#define CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCD2F940)
#define CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCD2FA70)
#define CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCD2F9A0)
#define CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCD2F950)
#define CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD2F1F0)
#define CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0xCD2F1D0)
#define CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xCD2F2C0)

inline static constexpr unsigned int Class_1_C949F9179159C647__ForEachAreaNode_d__6_TypeDefinitionIndex = 45534;

class Class_1_C949F9179159C647__ForEachAreaNode_d__6 : public ::System::Object
{
public:
	::Struct_2_23A3535C3AD26D5F __2__current; // 0x10
	::Class_1_C949F9179159C647* __4__this; // 0x20
	::Il2CppArray<::Class_1_D8BF25BB97CB2B9D*>* __7__wrap1; // 0x28
	::Struct_2_23A3535C3AD26D5F node; // 0x30
	::System::Collections::Generic::IEnumerator_1<::Struct_2_23A3535C3AD26D5F>* __7__wrap3; // 0x40
	::Struct_2_23A3535C3AD26D5F __3__node; // 0x48
	::System::Int32 __l__initialThreadId; // 0x58
	::System::Int32 __1__state; // 0x5C
	::System::Int32 __7__wrap2; // 0x60

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6___M__FINALLY1_OFFSET))(this);
	}

	::Struct_2_23A3535C3AD26D5F System_Collections_Generic_IEnumerator_RPGTools_Octree_Generation_OctreeNodePtr__get_Current()
	{
		return ((::Struct_2_23A3535C3AD26D5F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Struct_2_23A3535C3AD26D5F>* System_Collections_Generic_IEnumerable_RPGTools_Octree_Generation_OctreeNodePtr__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Struct_2_23A3535C3AD26D5F>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPGTOOLS_OCTREE_GENERATION_OCTREENODEPTR__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C949F9179159C647__FOREACHAREANODE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
