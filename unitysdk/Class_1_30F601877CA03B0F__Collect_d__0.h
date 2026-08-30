#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_30F601877CA03B0F__COLLECT_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17BE5BA0)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17BE5C50)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17BE5BE0)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17BE5CD0)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17BE5C40)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17BE5BF0)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17BE5B90)
#define CLASS_1_30F601877CA03B0F__COLLECT_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE5400)

inline static constexpr unsigned int Class_1_30F601877CA03B0F__Collect_d__0_TypeDefinitionIndex = 75469;

class Class_1_30F601877CA03B0F__Collect_d__0 : public ::System::Object
{
public:
	::System::String* __2__current; // 0x10
	::System::String* path; // 0x18
	::System::String* __3__path; // 0x20
	::System::Int32 __1__state; // 0x28
	::System::Int32 __l__initialThreadId; // 0x2C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__0__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__0_MOVENEXT_OFFSET))(this);
	}

	::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30F601877CA03B0F__COLLECT_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
