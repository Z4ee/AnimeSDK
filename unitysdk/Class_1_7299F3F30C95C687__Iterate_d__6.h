#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_7299F3F30C95C687__ITERATE_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C51EFB0)
#define CLASS_1_7299F3F30C95C687__ITERATE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MECHCRAFT_MECHCRAFTATTRIBUTETYPE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C51F150)
#define CLASS_1_7299F3F30C95C687__ITERATE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MECHCRAFT_MECHCRAFTATTRIBUTETYPE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C51F0A0)
#define CLASS_1_7299F3F30C95C687__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C51F1D0)
#define CLASS_1_7299F3F30C95C687__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C51F100)
#define CLASS_1_7299F3F30C95C687__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C51F0B0)
#define CLASS_1_7299F3F30C95C687__ITERATE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C51EFA0)
#define CLASS_1_7299F3F30C95C687__ITERATE_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51EAD0)

inline static constexpr unsigned int Class_1_7299F3F30C95C687__Iterate_d__6_TypeDefinitionIndex = 41644;

class Class_1_7299F3F30C95C687__Iterate_d__6 : public ::System::Object
{
public:
	::System::Int32 __l__initialThreadId; // 0x10
	::RPG::Client::MechCraft::MechCraftAttributeType __2__current; // 0x14
	::RPG::Client::MechCraft::MechCraftAttributeType _type_5__2; // 0x18
	::System::Boolean __3__includingNone; // 0x1C
	::System::Boolean includingNone; // 0x1D
	::System::Int32 __1__state; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687__ITERATE_D__6__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687__ITERATE_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687__ITERATE_D__6_MOVENEXT_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftAttributeType System_Collections_Generic_IEnumerator_RPG_Client_MechCraft_MechCraftAttributeType__get_Current()
	{
		return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687__ITERATE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MECHCRAFT_MECHCRAFTATTRIBUTETYPE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::Client::MechCraft::MechCraftAttributeType>* System_Collections_Generic_IEnumerable_RPG_Client_MechCraft_MechCraftAttributeType__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687__ITERATE_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MECHCRAFT_MECHCRAFTATTRIBUTETYPE__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7299F3F30C95C687__ITERATE_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
