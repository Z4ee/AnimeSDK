#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Collections/Generic/SortedDictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_797;
class Class_1_EE6E9D2CA8BDE3B8;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19274BB0)
#define CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IAVATARUPGRADEMAPPER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19274E50)
#define CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IAVATARUPGRADEMAPPER__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19274DE0)
#define CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19274EB0)
#define CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19274E40)
#define CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19274DF0)
#define CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19274B90)
#define CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0x19274AF0)
#define CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x19274BA0)

inline static constexpr unsigned int Class_1_EE6E9D2CA8BDE3B8___GetMappersByParts_d__7_TypeDefinitionIndex = 62901;

class Class_1_EE6E9D2CA8BDE3B8___GetMappersByParts_d__7 : public ::System::Object
{
public:
	::System::Collections::Generic::SortedDictionary_2_Enumerator<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_797*> __7__wrap1; // 0x10
	::Class_0_16E4307DCC419505_797* __2__current; // 0x40
	::Class_1_EE6E9D2CA8BDE3B8* __4__this; // 0x48
	::System::Int32 __l__initialThreadId; // 0x50
	::RPG::Client::AvatarUpgradePart parts; // 0x54
	::RPG::Client::AvatarUpgradePart __3__parts; // 0x58
	::System::Int32 __1__state; // 0x5C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7___M__FINALLY1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_797* System_Collections_Generic_IEnumerator_RPG_Client_IAvatarUpgradeMapper__get_Current()
	{
		return ((::Class_0_16E4307DCC419505_797*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IAVATARUPGRADEMAPPER__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_797*>* System_Collections_Generic_IEnumerable_RPG_Client_IAvatarUpgradeMapper__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_797*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IAVATARUPGRADEMAPPER__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8___GETMAPPERSBYPARTS_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
