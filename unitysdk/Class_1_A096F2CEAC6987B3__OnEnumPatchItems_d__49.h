#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_44;
class Class_1_A096F2CEAC6987B3;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE87EA10)
#define CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_BLOCKHPATCHINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE87F200)
#define CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_BLOCKHPATCHINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE87F190)
#define CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE87F280)
#define CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE87F1F0)
#define CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE87F1A0)
#define CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE87E9F0)
#define CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49__CTOR_OFFSET UNITYSDK_OFFSET(0xE87A9E0)
#define CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xE87EA00)

inline static constexpr unsigned int Class_1_A096F2CEAC6987B3__OnEnumPatchItems_d__49_TypeDefinitionIndex = 59599;

class Class_1_A096F2CEAC6987B3__OnEnumPatchItems_d__49 : public ::System::Object
{
public:
	::Class_1_21DCD4640D389503_44* __2__current; // 0x10
	::System::String* _patchFolder_5__2; // 0x18
	::System::Collections::Generic::List_1_Enumerator<::Class_1_21DCD4640D389503_44*> __7__wrap4; // 0x20
	::Class_1_A096F2CEAC6987B3* __4__this; // 0x38
	::System::Int32 __1__state; // 0x40
	::System::Int32 _count_5__3; // 0x44
	::System::Int32 _i_5__4; // 0x48
	::System::Int32 __l__initialThreadId; // 0x4C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49___M__FINALLY1_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_44* System_Collections_Generic_IEnumerator_RPG_Client_BlockHPatchInfo__get_Current()
	{
		return ((::Class_1_21DCD4640D389503_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_BLOCKHPATCHINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_21DCD4640D389503_44*>* System_Collections_Generic_IEnumerable_RPG_Client_BlockHPatchInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_21DCD4640D389503_44*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_BLOCKHPATCHINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
