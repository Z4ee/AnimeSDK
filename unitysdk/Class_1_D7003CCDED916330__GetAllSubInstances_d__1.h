#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_ValueCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_A007F54272737F5C;
class Class_1_D7003CCDED916330;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15F6E910)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_FREESTYLESUBINSTANCE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15F6EB70)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_FREESTYLESUBINSTANCE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F6EB00)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15F6EBF0)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F6EB60)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15F6EB10)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F6E8F0)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1__CTOR_OFFSET UNITYSDK_OFFSET(0x15F63F60)
#define CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x15F6E900)

inline static constexpr unsigned int Class_1_D7003CCDED916330__GetAllSubInstances_d__1_TypeDefinitionIndex = 54725;

class Class_1_D7003CCDED916330__GetAllSubInstances_d__1 : public ::System::Object
{
public:
	::Class_1_D7003CCDED916330* __4__this; // 0x10
	::Class_1_A007F54272737F5C* __2__current; // 0x18
	::System::Collections::Generic::Dictionary_2_ValueCollection_Enumerator<::System::String*, ::Class_1_A007F54272737F5C*> __7__wrap1; // 0x20
	::System::Int32 __1__state; // 0x38
	::System::Int32 __l__initialThreadId; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1___M__FINALLY1_OFFSET))(this);
	}

	::Class_1_A007F54272737F5C* System_Collections_Generic_IEnumerator_RPG_GameCore_FreeStyleSubInstance__get_Current()
	{
		return ((::Class_1_A007F54272737F5C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_FREESTYLESUBINSTANCE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_A007F54272737F5C*>* System_Collections_Generic_IEnumerable_RPG_GameCore_FreeStyleSubInstance__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_A007F54272737F5C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_FREESTYLESUBINSTANCE__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7003CCDED916330__GETALLSUBINSTANCES_D__1_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
