#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_87;
class Class_2_4882D51538AB1BD1;
namespace RPG::Client { class VideoBundleInfoItem; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1986C3D0)
#define CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1986C880)
#define CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1986C810)
#define CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1986C8E0)
#define CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1986C870)
#define CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1986C820)
#define CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1986C3B0)
#define CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28__CTOR_OFFSET UNITYSDK_OFFSET(0x1986A8C0)
#define CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1986C3C0)

inline static constexpr unsigned int Class_2_4882D51538AB1BD1__OnEnumBlockItems_d__28_TypeDefinitionIndex = 59625;

class Class_2_4882D51538AB1BD1__OnEnumBlockItems_d__28 : public ::System::Object
{
public:
	::Class_2_4882D51538AB1BD1* __4__this; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::RPG::Client::VideoBundleInfoItem*> __7__wrap1; // 0x18
	::Class_0_16E4307DCC419505_87* __2__current; // 0x30
	::System::Int32 __1__state; // 0x38
	::System::Int32 __l__initialThreadId; // 0x3C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28___M__FINALLY1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_87* System_Collections_Generic_IEnumerator_RPG_Client_IBlockItem__get_Current()
	{
		return ((::Class_0_16E4307DCC419505_87*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBLOCKITEM__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_87*>* System_Collections_Generic_IEnumerable_RPG_Client_IBlockItem__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBLOCKITEM__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4882D51538AB1BD1__ONENUMBLOCKITEMS_D__28_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
