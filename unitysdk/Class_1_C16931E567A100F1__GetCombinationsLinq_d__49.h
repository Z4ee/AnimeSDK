#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1977E4D0)
#define CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_LITTLEGAMESHARE_DICECOMBATCORE_AISYSTEMSERVER_DICECOMBINATION__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1977EF10)
#define CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_LITTLEGAMESHARE_DICECOMBATCORE_AISYSTEMSERVER_DICECOMBINATION__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1977EEA0)
#define CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1977EFA0)
#define CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1977EF00)
#define CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1977EEB0)
#define CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1977E390)
#define CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49__CTOR_OFFSET UNITYSDK_OFFSET(0x1977D710)
#define CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1977E3D0)

inline static constexpr unsigned int Class_1_C16931E567A100F1__GetCombinationsLinq_d__49_TypeDefinitionIndex = 35732;

class Class_1_C16931E567A100F1__GetCombinationsLinq_d__49 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::System::Int32>* __3__items; // 0x10
	::System::Collections::Generic::IEnumerator_1<::Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5*>* __7__wrap3; // 0x18
	::System::Collections::Generic::IEnumerable_1<::System::Int32>* items; // 0x20
	::Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5* __2__current; // 0x28
	::System::Int32 startIndex; // 0x30
	::System::Int32 _i_5__2; // 0x34
	::System::Int32 __l__initialThreadId; // 0x38
	::System::Int32 count; // 0x3C
	::System::Int32 __3__count; // 0x40
	::System::Int32 __3__startIndex; // 0x44
	::System::Int32 _item_5__3; // 0x48
	::System::Int32 __1__state; // 0x4C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49___M__FINALLY1_OFFSET))(this);
	}

	::Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5* System_Collections_Generic_IEnumerator_RPG_LittleGameShare_DiceCombatCore_AISystemServer_DiceCombination__get_Current()
	{
		return ((::Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_LITTLEGAMESHARE_DICECOMBATCORE_AISYSTEMSERVER_DICECOMBINATION__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5*>* System_Collections_Generic_IEnumerable_RPG_LittleGameShare_DiceCombatCore_AISystemServer_DiceCombination__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_C16931E567A100F1_Class_1_54FB9F3869E68DB5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_LITTLEGAMESHARE_DICECOMBATCORE_AISYSTEMSERVER_DICECOMBINATION__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1__GETCOMBINATIONSLINQ_D__49_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
