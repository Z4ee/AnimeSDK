#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_44BD0E06112FECED;
class Class_1_7179D0DED6D3E44A;
class Class_1_AD0B53B56535FBAD;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1051CED0)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_HPATCHBLOCKINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1051D7A0)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_HPATCHBLOCKINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1051D730)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1051D820)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1051D790)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1051D740)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1051CEA0)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47__CTOR_OFFSET UNITYSDK_OFFSET(0x1051A590)
#define CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1051CEC0)

inline static constexpr unsigned int Class_1_44BD0E06112FECED__OnEnumDownloadItems_d__47_TypeDefinitionIndex = 48101;

class Class_1_44BD0E06112FECED__OnEnumDownloadItems_d__47 : public ::System::Object
{
public:
	::System::String* _patchFolder_5__2; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::Class_1_7179D0DED6D3E44A*> __7__wrap5; // 0x18
	::System::String* _rootPath_5__3; // 0x30
	::Class_1_AD0B53B56535FBAD* __2__current; // 0x38
	::Class_1_44BD0E06112FECED* __4__this; // 0x40
	::System::Int32 _i_5__5; // 0x48
	::System::Int32 __l__initialThreadId; // 0x4C
	::System::Int32 __1__state; // 0x50
	::System::Int32 _count_5__4; // 0x54

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47__CTOR_OFFSET))(this, __1__state);
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

	::Class_1_AD0B53B56535FBAD* System_Collections_Generic_IEnumerator_RPG_Client_HPatchBlockInfo__get_Current()
	{
		return ((::Class_1_AD0B53B56535FBAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_HPATCHBLOCKINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_AD0B53B56535FBAD*>* System_Collections_Generic_IEnumerable_RPG_Client_HPatchBlockInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_AD0B53B56535FBAD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_HPATCHBLOCKINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMDOWNLOADITEMS_D__47_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
