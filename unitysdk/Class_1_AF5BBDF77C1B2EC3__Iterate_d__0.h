#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftDirectionType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C5749E0)
#define CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MECHCRAFT_MECHCRAFTDIRECTIONTYPE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C574AF0)
#define CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MECHCRAFT_MECHCRAFTDIRECTIONTYPE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C574A40)
#define CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C574B60)
#define CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C574AA0)
#define CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C574A50)
#define CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C5749D0)
#define CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5747A0)

inline static constexpr unsigned int Class_1_AF5BBDF77C1B2EC3__Iterate_d__0_TypeDefinitionIndex = 41656;

class Class_1_AF5BBDF77C1B2EC3__Iterate_d__0 : public ::System::Object
{
public:
	::System::Int32 __l__initialThreadId; // 0x10
	::RPG::Client::MechCraft::MechCraftDirectionType __2__current; // 0x14
	::System::Int32 __1__state; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_MOVENEXT_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftDirectionType System_Collections_Generic_IEnumerator_RPG_Client_MechCraft_MechCraftDirectionType__get_Current()
	{
		return ((::RPG::Client::MechCraft::MechCraftDirectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_MECHCRAFT_MECHCRAFTDIRECTIONTYPE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::Client::MechCraft::MechCraftDirectionType>* System_Collections_Generic_IEnumerable_RPG_Client_MechCraft_MechCraftDirectionType__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MechCraft::MechCraftDirectionType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_MECHCRAFT_MECHCRAFTDIRECTIONTYPE__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF5BBDF77C1B2EC3__ITERATE_D__0_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
