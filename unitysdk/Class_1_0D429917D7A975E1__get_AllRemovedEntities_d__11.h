#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/PooledList_1_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_0D429917D7A975E1;
namespace RPG::Client { class MapEntityDef; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x178BC210)
#define CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MAPENTITYDEF__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x178BC520)
#define CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x178BC4B0)
#define CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x178BC5A0)
#define CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x178BC510)
#define CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x178BC4C0)
#define CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x178BC1D0)
#define CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11__CTOR_OFFSET UNITYSDK_OFFSET(0x178BC0B0)
#define CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x178BC1F0)
#define CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x178BC200)

inline static constexpr unsigned int Class_1_0D429917D7A975E1__get_AllRemovedEntities_d__11_TypeDefinitionIndex = 62224;

class Class_1_0D429917D7A975E1__get_AllRemovedEntities_d__11 : public ::System::Object
{
public:
	::Class_1_0D429917D7A975E1* __4__this; // 0x10
	::Collections::Pooled::PooledList_1_Enumerator<::RPG::Client::MapEntityDef*> __7__wrap1; // 0x18
	::RPG::Client::MapEntityDef* __2__current; // 0x38
	::System::Int32 __1__state; // 0x40
	::System::Int32 __l__initialThreadId; // 0x44

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11___M__FINALLY1_OFFSET))(this);
	}

	::System::Void __m__Finally2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11___M__FINALLY2_OFFSET))(this);
	}

	::RPG::Client::MapEntityDef* System_Collections_Generic_IEnumerator_RPG_Client_MapEntityDef__get_Current()
	{
		return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MAPENTITYDEF__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>* System_Collections_Generic_IEnumerable_RPG_Client_MapEntityDef__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MAPENTITYDEF__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D429917D7A975E1__GET_ALLREMOVEDENTITIES_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
