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

#define CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9667710)
#define CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_HPATCHBLOCKINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9668310)
#define CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_HPATCHBLOCKINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x96682A0)
#define CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9668390)
#define CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9668300)
#define CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x96682B0)
#define CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96676F0)
#define CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48__CTOR_OFFSET UNITYSDK_OFFSET(0x9665B60)
#define CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x9667700)

inline static constexpr unsigned int Class_1_44BD0E06112FECED__OnEnumBlockItems_d__48_TypeDefinitionIndex = 54845;

class Class_1_44BD0E06112FECED__OnEnumBlockItems_d__48 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1_Enumerator<::Class_1_7179D0DED6D3E44A*> __7__wrap4; // 0x10
	::Class_1_AD0B53B56535FBAD* __2__current; // 0x28
	::Class_1_44BD0E06112FECED* __4__this; // 0x30
	::System::String* _rootPath_5__2; // 0x38
	::System::Int32 __l__initialThreadId; // 0x40
	::System::Int32 __1__state; // 0x44
	::System::Int32 _count_5__3; // 0x48
	::System::Int32 _i_5__4; // 0x4C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48___M__FINALLY1_OFFSET))(this);
	}

	::Class_1_AD0B53B56535FBAD* System_Collections_Generic_IEnumerator_RPG_Client_HPatchBlockInfo__get_Current()
	{
		return ((::Class_1_AD0B53B56535FBAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_HPATCHBLOCKINFO__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_1_AD0B53B56535FBAD*>* System_Collections_Generic_IEnumerable_RPG_Client_HPatchBlockInfo__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_1_AD0B53B56535FBAD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_HPATCHBLOCKINFO__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44BD0E06112FECED__ONENUMBLOCKITEMS_D__48_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
