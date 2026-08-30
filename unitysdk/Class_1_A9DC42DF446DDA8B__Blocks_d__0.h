#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_87;
class Class_0_16E4307DCC419505_95;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A4CCEA0)
#define CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A4CD190)
#define CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A4CD120)
#define CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A4CD210)
#define CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A4CD180)
#define CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A4CD130)
#define CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A4CCE90)
#define CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4CCE70)

inline static constexpr unsigned int Class_1_A9DC42DF446DDA8B__Blocks_d__0_TypeDefinitionIndex = 40196;

class Class_1_A9DC42DF446DDA8B__Blocks_d__0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_95* __3__index; // 0x10
	::System::Func_2<::Class_0_16E4307DCC419505_87*, ::System::Boolean>* __3__predicate; // 0x18
	::Class_0_16E4307DCC419505_87* __2__current; // 0x20
	::System::Func_2<::Class_0_16E4307DCC419505_87*, ::System::Boolean>* predicate; // 0x28
	::Class_0_16E4307DCC419505_95* index; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::Int32 _i_5__3; // 0x3C
	::System::Int32 __l__initialThreadId; // 0x40
	::System::Int32 _count_5__2; // 0x44

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_MOVENEXT_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_87* System_Collections_Generic_IEnumerator_RPG_Client_IBlockItem__get_Current()
	{
		return ((::Class_0_16E4307DCC419505_87*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_87*>* System_Collections_Generic_IEnumerable_RPG_Client_IBlockItem__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9DC42DF446DDA8B__BLOCKS_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
