#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_44;
class Class_1_942D03E5A029CB94;
class Class_1_A096F2CEAC6987B3;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE87CC00)
#define CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_HPATCHBLOCKINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE87DB00)
#define CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_HPATCHBLOCKINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE87DA90)
#define CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE87DB80)
#define CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE87DAF0)
#define CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE87DAA0)
#define CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE87CBE0)
#define CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48__CTOR_OFFSET UNITYSDK_OFFSET(0xE87A930)
#define CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xE87CBF0)

inline static constexpr unsigned int Class_1_A096F2CEAC6987B3__OnEnumBlockItems_d__48_TypeDefinitionIndex = 59597;

class Class_1_A096F2CEAC6987B3__OnEnumBlockItems_d__48 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1_Enumerator<::Class_1_21DCD4640D389503_44*> __7__wrap4; // 0x10
	::Class_1_A096F2CEAC6987B3* __4__this; // 0x28
	::System::String* _rootPath_5__2; // 0x30
	::Class_1_942D03E5A029CB94* __2__current; // 0x38
	::System::Int32 _count_5__3; // 0x40
	::System::Int32 _i_5__4; // 0x44
	::System::Int32 __1__state; // 0x48
	::System::Int32 __l__initialThreadId; // 0x4C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48___M__FINALLY1_OFFSET))(this);
	}

	::Class_1_942D03E5A029CB94* System_Collections_Generic_IEnumerator_RPG_Client_HPatchBlockInfo__get_Current()
	{
		return ((::Class_1_942D03E5A029CB94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_HPATCHBLOCKINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_942D03E5A029CB94*>* System_Collections_Generic_IEnumerable_RPG_Client_HPatchBlockInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_942D03E5A029CB94*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_HPATCHBLOCKINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
