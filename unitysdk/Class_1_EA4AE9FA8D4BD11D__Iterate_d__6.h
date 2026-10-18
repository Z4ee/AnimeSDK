#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C5405B0)
#define CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MECHCRAFT_MECHCRAFTCHIPTRAITTYPE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C540750)
#define CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MECHCRAFT_MECHCRAFTCHIPTRAITTYPE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C5406A0)
#define CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C5407D0)
#define CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C540700)
#define CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C5406B0)
#define CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C5405A0)
#define CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C540570)

inline static constexpr unsigned int Class_1_EA4AE9FA8D4BD11D__Iterate_d__6_TypeDefinitionIndex = 41649;

class Class_1_EA4AE9FA8D4BD11D__Iterate_d__6 : public ::System::Object
{
public:
	::System::Int32 __l__initialThreadId; // 0x10
	::RPG::Client::MechCraft::MechCraftChipTraitType _type_5__2; // 0x14
	::RPG::Client::MechCraft::MechCraftChipTraitType __2__current; // 0x18
	::System::Int32 __1__state; // 0x1C
	::System::Boolean __3__includingNone; // 0x20
	::System::Boolean includingNone; // 0x21

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_MOVENEXT_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftChipTraitType System_Collections_Generic_IEnumerator_RPG_Client_MechCraft_MechCraftChipTraitType__get_Current()
	{
		return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MECHCRAFT_MECHCRAFTCHIPTRAITTYPE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* System_Collections_Generic_IEnumerable_RPG_Client_MechCraft_MechCraftChipTraitType__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MECHCRAFT_MECHCRAFTCHIPTRAITTYPE__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4AE9FA8D4BD11D__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
