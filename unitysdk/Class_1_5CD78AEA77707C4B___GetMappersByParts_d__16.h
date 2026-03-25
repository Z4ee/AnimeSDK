#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Collections/Generic/SortedDictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_591;
class Class_1_5CD78AEA77707C4B;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA9EE620)
#define CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IAVATARUPGRADEMAPPER__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA9EE9E0)
#define CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IAVATARUPGRADEMAPPER__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA9EE970)
#define CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA9EEA60)
#define CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA9EE9D0)
#define CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA9EE980)
#define CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9EE510)
#define CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0xA9EE4E0)
#define CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xA9EE5A0)

inline static constexpr unsigned int Class_1_5CD78AEA77707C4B___GetMappersByParts_d__16_TypeDefinitionIndex = 51002;

class Class_1_5CD78AEA77707C4B___GetMappersByParts_d__16 : public ::System::Object
{
public:
	::System::Collections::Generic::SortedDictionary_2_Enumerator<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_591*> __7__wrap1; // 0x10
	::Class_0_16E4307DCC419505_591* __2__current; // 0x40
	::Class_1_5CD78AEA77707C4B* __4__this; // 0x48
	::System::Int32 __l__initialThreadId; // 0x50
	::System::Int32 __1__state; // 0x54
	::RPG::Client::AvatarUpgradePart __3__parts; // 0x58
	::RPG::Client::AvatarUpgradePart parts; // 0x5C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16___M__FINALLY1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_591* System_Collections_Generic_IEnumerator_RPG_Client_IAvatarUpgradeMapper__get_Current()
	{
		return ((::Class_0_16E4307DCC419505_591*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IAVATARUPGRADEMAPPER__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_591*>* System_Collections_Generic_IEnumerable_RPG_Client_IAvatarUpgradeMapper__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_591*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IAVATARUPGRADEMAPPER__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B___GETMAPPERSBYPARTS_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
