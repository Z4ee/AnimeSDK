#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4293D57FC8C09DBA;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelSaveEntitySelectionConfig; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13C216C0)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x13C21800)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13C21790)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x13C21880)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13C217F0)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13C217A0)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C216B0)
#define CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0x13C20790)

inline static constexpr unsigned int Class_1_4293D57FC8C09DBA___GetAbilitySaveSelectionConfigs_d__21_TypeDefinitionIndex = 72118;

class Class_1_4293D57FC8C09DBA___GetAbilitySaveSelectionConfigs_d__21 : public ::System::Object
{
public:
	::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig* __2__current; // 0x10
	::Class_2_B66C1067C0468FBB* abilityEntity; // 0x18
	::Il2CppArray<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>* __7__wrap1; // 0x20
	::Class_2_B66C1067C0468FBB* __3__abilityEntity; // 0x28
	::Class_1_4293D57FC8C09DBA* __4__this; // 0x30
	::System::Int32 __l__initialThreadId; // 0x38
	::System::Int32 __1__state; // 0x3C
	::System::Int32 __7__wrap2; // 0x40

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_MOVENEXT_OFFSET))(this);
	}

	::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig* System_Collections_Generic_IEnumerator_RPG_GameCore_BaseChimeraDuelSaveEntitySelectionConfig__get_Current()
	{
		return ((::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>* System_Collections_Generic_IEnumerable_RPG_GameCore_BaseChimeraDuelSaveEntitySelectionConfig__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_GAMECORE_BASECHIMERADUELSAVEENTITYSELECTIONCONFIG__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4293D57FC8C09DBA___GETABILITYSAVESELECTIONCONFIGS_D__21_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
