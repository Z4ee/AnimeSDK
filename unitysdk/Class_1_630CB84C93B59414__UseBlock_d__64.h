#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87598940223885B0_eFileLoaderPosType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_87;
class Class_0_16E4307DCC419505_95;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_630CB84C93B59414__USEBLOCK_D__64_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB1E4B50)
#define CLASS_1_630CB84C93B59414__USEBLOCK_D__64_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_RPG_CLIENT_IBLOCKITEM_RPG_CLIENT_UNITYFILELOADERHELPER_EFILELOADERPOSTYPE___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB1E4EF0)
#define CLASS_1_630CB84C93B59414__USEBLOCK_D__64_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_RPG_CLIENT_IBLOCKITEM_RPG_CLIENT_UNITYFILELOADERHELPER_EFILELOADERPOSTYPE___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB1E4E80)
#define CLASS_1_630CB84C93B59414__USEBLOCK_D__64_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB1E4F80)
#define CLASS_1_630CB84C93B59414__USEBLOCK_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB1E4EE0)
#define CLASS_1_630CB84C93B59414__USEBLOCK_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB1E4E90)
#define CLASS_1_630CB84C93B59414__USEBLOCK_D__64_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1E4B40)
#define CLASS_1_630CB84C93B59414__USEBLOCK_D__64__CTOR_OFFSET UNITYSDK_OFFSET(0xB1E4B20)

inline static constexpr unsigned int Class_1_630CB84C93B59414__UseBlock_d__64_TypeDefinitionIndex = 59531;

class Class_1_630CB84C93B59414__UseBlock_d__64 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_95* index; // 0x10
	::Class_0_16E4307DCC419505_95* __3__index; // 0x18
	::System::Func_2<::Class_0_16E4307DCC419505_87*, ::System::Boolean>* __3__predicate; // 0x20
	::System::Tuple_2<::Class_0_16E4307DCC419505_87*, ::Class_1_87598940223885B0_eFileLoaderPosType>* __2__current; // 0x28
	::System::Func_2<::Class_0_16E4307DCC419505_87*, ::System::Boolean>* predicate; // 0x30
	::System::Int32 __1__state; // 0x38
	::Class_1_87598940223885B0_eFileLoaderPosType pos; // 0x3C
	::Class_1_87598940223885B0_eFileLoaderPosType __3__pos; // 0x40
	::System::Int32 _count_5__2; // 0x44
	::System::Int32 __l__initialThreadId; // 0x48
	::System::Int32 _i_5__3; // 0x4C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414__USEBLOCK_D__64__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414__USEBLOCK_D__64_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414__USEBLOCK_D__64_MOVENEXT_OFFSET))(this);
	}

	::System::Tuple_2<::Class_0_16E4307DCC419505_87*, ::Class_1_87598940223885B0_eFileLoaderPosType>* System_Collections_Generic_IEnumerator_System_Tuple_RPG_Client_IBlockItem_RPG_Client_UnityFileLoaderHelper_eFileLoaderPosType___get_Current()
	{
		return ((::System::Tuple_2<::Class_0_16E4307DCC419505_87*, ::Class_1_87598940223885B0_eFileLoaderPosType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414__USEBLOCK_D__64_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_RPG_CLIENT_IBLOCKITEM_RPG_CLIENT_UNITYFILELOADERHELPER_EFILELOADERPOSTYPE___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414__USEBLOCK_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414__USEBLOCK_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::Class_0_16E4307DCC419505_87*, ::Class_1_87598940223885B0_eFileLoaderPosType>*>* System_Collections_Generic_IEnumerable_System_Tuple_RPG_Client_IBlockItem_RPG_Client_UnityFileLoaderHelper_eFileLoaderPosType___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::Class_0_16E4307DCC419505_87*, ::Class_1_87598940223885B0_eFileLoaderPosType>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414__USEBLOCK_D__64_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_RPG_CLIENT_IBLOCKITEM_RPG_CLIENT_UNITYFILELOADERHELPER_EFILELOADERPOSTYPE___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414__USEBLOCK_D__64_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
