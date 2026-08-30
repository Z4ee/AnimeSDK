#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A386B30)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A386FB0)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A386F20)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A387030)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A386F80)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A386F30)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3869F0)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20__CTOR_OFFSET UNITYSDK_OFFSET(0x1A386840)
#define RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1A386A30)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildRecipe___GetAlternativeAvatarIDs_d__20_TypeDefinitionIndex = 68091;

	class TeamBuildRecipe___GetAlternativeAvatarIDs_d__20 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* __3__avatarIDs; // 0x10
		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* __7__wrap1; // 0x18
		::System::Collections::Generic::IList_1<::System::UInt32>* avatarIDs; // 0x20
		::Il2CppArray<::System::Collections::Generic::ICollection_1<::System::UInt32>*>* exclusiveIDGroups; // 0x28
		::Il2CppArray<::System::Collections::Generic::ICollection_1<::System::UInt32>*>* __3__exclusiveIDGroups; // 0x30
		::System::Int32 __l__initialThreadId; // 0x38
		::System::UInt32 __2__current; // 0x3C
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20___M__FINALLY1_OFFSET))(this);
		}

		::System::UInt32 System_Collections_Generic_IEnumerator_System_UInt32__get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerable_System_UInt32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE___GETALTERNATIVEAVATARIDS_D__20_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
