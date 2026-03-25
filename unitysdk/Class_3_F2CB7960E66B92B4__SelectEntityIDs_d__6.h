#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_3_F2CB7960E66B92B4;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF39A640)
#define CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF39AAD0)
#define CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF39AA40)
#define CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF39AB50)
#define CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF39AAA0)
#define CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xF39AA50)
#define CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF39A610)
#define CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0xF39A580)
#define CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xF39A620)
#define CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0xF39A630)

inline static constexpr unsigned int Class_3_F2CB7960E66B92B4__SelectEntityIDs_d__6_TypeDefinitionIndex = 63803;

class Class_3_F2CB7960E66B92B4__SelectEntityIDs_d__6 : public ::System::Object
{
public:
	::Class_3_F2CB7960E66B92B4* __4__this; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::System::Int32> __7__wrap1; // 0x18
	::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* __3__config; // 0x30
	::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* config; // 0x38
	::System::Int32 __1__state; // 0x40
	::System::Int32 __l__initialThreadId; // 0x44
	::System::Int32 __2__current; // 0x48

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6___M__FINALLY1_OFFSET))(this);
	}

	::System::Void __m__Finally2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6___M__FINALLY2_OFFSET))(this);
	}

	::System::Int32 System_Collections_Generic_IEnumerator_System_Int32__get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Int32>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2CB7960E66B92B4__SELECTENTITYIDS_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
