#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_58688AA38F7FA9A2;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A0312C0)
#define CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A031460)
#define CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A0313D0)
#define CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A0314E0)
#define CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A031430)
#define CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A0313E0)
#define CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0312B0)
#define CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A031210)

inline static constexpr unsigned int Class_4_58688AA38F7FA9A2__SelectEntityIDs_d__3_TypeDefinitionIndex = 77156;

class Class_4_58688AA38F7FA9A2__SelectEntityIDs_d__3 : public ::System::Object
{
public:
	::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* config; // 0x10
	::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* __3__config; // 0x18
	::Class_4_58688AA38F7FA9A2* __4__this; // 0x20
	::System::Int32 __l__initialThreadId; // 0x28
	::System::Int32 __2__current; // 0x2C
	::System::Int32 __1__state; // 0x30

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_MOVENEXT_OFFSET))(this);
	}

	::System::Int32 System_Collections_Generic_IEnumerator_System_Int32__get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_INT32__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Int32>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_INT32__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_58688AA38F7FA9A2__SELECTENTITYIDS_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
