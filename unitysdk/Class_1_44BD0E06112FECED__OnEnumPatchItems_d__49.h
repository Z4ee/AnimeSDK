#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_44BD0E06112FECED;
class Class_1_7179D0DED6D3E44A;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1051D8C0)
#define CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_BLOCKHPATCHINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1051DE20)
#define CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_BLOCKHPATCHINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1051DDB0)
#define CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1051DEA0)
#define CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1051DE10)
#define CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1051DDC0)
#define CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1051D8A0)
#define CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49__CTOR_OFFSET UNITYSDK_OFFSET(0x1051A6F0)
#define CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1051D8B0)

inline static constexpr unsigned int Class_1_44BD0E06112FECED__OnEnumPatchItems_d__49_TypeDefinitionIndex = 48102;

class Class_1_44BD0E06112FECED__OnEnumPatchItems_d__49 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1_Enumerator<::Class_1_7179D0DED6D3E44A*> __7__wrap4; // 0x10
	::Class_1_7179D0DED6D3E44A* __2__current; // 0x28
	::System::String* _patchFolder_5__2; // 0x30
	::Class_1_44BD0E06112FECED* __4__this; // 0x38
	::System::Int32 __1__state; // 0x40
	::System::Int32 _count_5__3; // 0x44
	::System::Int32 __l__initialThreadId; // 0x48
	::System::Int32 _i_5__4; // 0x4C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49___M__FINALLY1_OFFSET))(this);
	}

	::Class_1_7179D0DED6D3E44A* System_Collections_Generic_IEnumerator_RPG_Client_BlockHPatchInfo__get_Current()
	{
		return ((::Class_1_7179D0DED6D3E44A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_BLOCKHPATCHINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_7179D0DED6D3E44A*>* System_Collections_Generic_IEnumerable_RPG_Client_BlockHPatchInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_7179D0DED6D3E44A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_BLOCKHPATCHINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMPATCHITEMS_D__49_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
