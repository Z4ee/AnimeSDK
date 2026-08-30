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

#define CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1896CF20)
#define CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_HPATCHBLOCKINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1896DBD0)
#define CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_HPATCHBLOCKINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1896DB60)
#define CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1896DC50)
#define CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1896DBC0)
#define CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1896DB70)
#define CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1896CF00)
#define CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47__CTOR_OFFSET UNITYSDK_OFFSET(0x18969B80)
#define CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1896CF10)

inline static constexpr unsigned int Class_1_A096F2CEAC6987B3__OnEnumDownloadItems_d__47_TypeDefinitionIndex = 59598;

class Class_1_A096F2CEAC6987B3__OnEnumDownloadItems_d__47 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1_Enumerator<::Class_1_21DCD4640D389503_44*> __7__wrap5; // 0x10
	::Class_1_A096F2CEAC6987B3* __4__this; // 0x28
	::System::String* _rootPath_5__3; // 0x30
	::System::String* _patchFolder_5__2; // 0x38
	::Class_1_942D03E5A029CB94* __2__current; // 0x40
	::System::Int32 _i_5__5; // 0x48
	::System::Int32 _count_5__4; // 0x4C
	::System::Int32 __l__initialThreadId; // 0x50
	::System::Int32 __1__state; // 0x54

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47___M__FINALLY1_OFFSET))(this);
	}

	::Class_1_942D03E5A029CB94* System_Collections_Generic_IEnumerator_RPG_Client_HPatchBlockInfo__get_Current()
	{
		return ((::Class_1_942D03E5A029CB94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_HPATCHBLOCKINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_942D03E5A029CB94*>* System_Collections_Generic_IEnumerable_RPG_Client_HPatchBlockInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_942D03E5A029CB94*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_HPATCHBLOCKINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A096F2CEAC6987B3__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
