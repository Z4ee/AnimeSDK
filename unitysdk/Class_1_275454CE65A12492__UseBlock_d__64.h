#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9793A3EE73969A7D_eFileLoaderPosType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_68;
class Class_0_16E4307DCC419505_76;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_275454CE65A12492__USEBLOCK_D__64_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14398810)
#define CLASS_1_275454CE65A12492__USEBLOCK_D__64_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_RPG_CLIENT_IBLOCKITEM_RPG_CLIENT_UNITYFILELOADERHELPER_EFILELOADERPOSTYPE___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14398AF0)
#define CLASS_1_275454CE65A12492__USEBLOCK_D__64_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_RPG_CLIENT_IBLOCKITEM_RPG_CLIENT_UNITYFILELOADERHELPER_EFILELOADERPOSTYPE___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14398A80)
#define CLASS_1_275454CE65A12492__USEBLOCK_D__64_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14398B80)
#define CLASS_1_275454CE65A12492__USEBLOCK_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14398AE0)
#define CLASS_1_275454CE65A12492__USEBLOCK_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14398A90)
#define CLASS_1_275454CE65A12492__USEBLOCK_D__64_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14398800)
#define CLASS_1_275454CE65A12492__USEBLOCK_D__64__CTOR_OFFSET UNITYSDK_OFFSET(0x14388FF0)

inline static constexpr unsigned int Class_1_275454CE65A12492__UseBlock_d__64_TypeDefinitionIndex = 55651;

class Class_1_275454CE65A12492__UseBlock_d__64 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_76* index; // 0x10
	::System::Tuple_2<::Class_0_16E4307DCC419505_68*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>* __2__current; // 0x18
	::System::Func_2<::Class_0_16E4307DCC419505_68*, ::System::Boolean>* predicate; // 0x20
	::System::Func_2<::Class_0_16E4307DCC419505_68*, ::System::Boolean>* __3__predicate; // 0x28
	::Class_0_16E4307DCC419505_76* __3__index; // 0x30
	::Class_1_9793A3EE73969A7D_eFileLoaderPosType __3__pos; // 0x38
	::System::Int32 __l__initialThreadId; // 0x3C
	::System::Int32 _i_5__3; // 0x40
	::Class_1_9793A3EE73969A7D_eFileLoaderPosType pos; // 0x44
	::System::Int32 __1__state; // 0x48
	::System::Int32 _count_5__2; // 0x4C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492__USEBLOCK_D__64__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492__USEBLOCK_D__64_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492__USEBLOCK_D__64_MOVENEXT_OFFSET))(this);
	}

	::System::Tuple_2<::Class_0_16E4307DCC419505_68*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>* System_Collections_Generic_IEnumerator_System_Tuple_RPG_Client_IBlockItem_RPG_Client_UnityFileLoaderHelper_eFileLoaderPosType___get_Current()
	{
		return ((::System::Tuple_2<::Class_0_16E4307DCC419505_68*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492__USEBLOCK_D__64_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_RPG_CLIENT_IBLOCKITEM_RPG_CLIENT_UNITYFILELOADERHELPER_EFILELOADERPOSTYPE___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492__USEBLOCK_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492__USEBLOCK_D__64_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::Class_0_16E4307DCC419505_68*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>*>* System_Collections_Generic_IEnumerable_System_Tuple_RPG_Client_IBlockItem_RPG_Client_UnityFileLoaderHelper_eFileLoaderPosType___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple_2<::Class_0_16E4307DCC419505_68*, ::Class_1_9793A3EE73969A7D_eFileLoaderPosType>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492__USEBLOCK_D__64_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_RPG_CLIENT_IBLOCKITEM_RPG_CLIENT_UNITYFILELOADERHELPER_EFILELOADERPOSTYPE___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492__USEBLOCK_D__64_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
