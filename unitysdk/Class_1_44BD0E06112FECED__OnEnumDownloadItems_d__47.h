#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_46;
class Class_1_44BD0E06112FECED;
class Class_1_942D03E5A029CB94;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCED39E0)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_HPATCHBLOCKINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCED4400)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_HPATCHBLOCKINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCED4390)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCED4480)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCED43F0)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCED43A0)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCED39B0)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47__CTOR_OFFSET UNITYSDK_OFFSET(0xCED0DB0)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xCED39D0)

inline static constexpr unsigned int Class_1_44BD0E06112FECED__OnEnumDownloadItems_d__47_TypeDefinitionIndex = 55573;

class Class_1_44BD0E06112FECED__OnEnumDownloadItems_d__47 : public ::System::Object
{
public:
	::System::String* _rootPath_5__3; // 0x10
	::Class_1_942D03E5A029CB94* __2__current; // 0x18
	::System::Collections::Generic::List_1_Enumerator<::Class_1_21DCD4640D389503_46*> __7__wrap5; // 0x20
	::Class_1_44BD0E06112FECED* __4__this; // 0x38
	::System::String* _patchFolder_5__2; // 0x40
	::System::Int32 _count_5__4; // 0x48
	::System::Int32 __l__initialThreadId; // 0x4C
	::System::Int32 __1__state; // 0x50
	::System::Int32 _i_5__5; // 0x54

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47___M__FINALLY1_OFFSET))(this);
	}

	::Class_1_942D03E5A029CB94* System_Collections_Generic_IEnumerator_RPG_Client_HPatchBlockInfo__get_Current()
	{
		return ((::Class_1_942D03E5A029CB94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_HPATCHBLOCKINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_942D03E5A029CB94*>* System_Collections_Generic_IEnumerable_RPG_Client_HPatchBlockInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_942D03E5A029CB94*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_HPATCHBLOCKINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
