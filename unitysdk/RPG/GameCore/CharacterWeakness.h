#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/WeaknessStackOperationType.h"
#include "unitysdk/RPG/GameCore/WeaknessState.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_8.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_CHARACTERWEAKNESS_COPYFROM_OFFSET UNITYSDK_OFFSET(0xA8D0B40)
#define RPG_GAMECORE_CHARACTERWEAKNESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8CE480)
#define RPG_GAMECORE_CHARACTERWEAKNESS_DOSEARCHAVAILABLEINDEX_OFFSET UNITYSDK_OFFSET(0xA8D0580)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETACTIVEWEAKNESS_OFFSET UNITYSDK_OFFSET(0xA8CEC20)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESSINENUM_OFFSET UNITYSDK_OFFSET(0xA8CECA0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESS_OFFSET UNITYSDK_OFFSET(0xA8CEC60)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETATTACHEDWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xA8CEBA0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETDEFAULTWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xA8CEB20)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETOVERRIDEWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xA8CEB60)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETSECRETWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xA8CEBE0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_HASSECRET_OFFSET UNITYSDK_OFFSET(0xA8CEE20)
#define RPG_GAMECORE_CHARACTERWEAKNESS_INITDEFAULTWEAKNESS_OFFSET UNITYSDK_OFFSET(0xA8CE510)
#define RPG_GAMECORE_CHARACTERWEAKNESS_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0xA8CECE0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_ISSECRET_OFFSET UNITYSDK_OFFSET(0xA8CED80)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHACTIVEWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xA8CE700)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHATTACHWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xA8D06E0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHOVERRIDEWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xA8CE590)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHPROTECTWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xA8D0830)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHSECRETWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xA8D0980)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEATTACHSTACK_OFFSET UNITYSDK_OFFSET(0xA8D0330)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEOVERRIDESTACK_OFFSET UNITYSDK_OFFSET(0xA8D01B0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEPROTECTSTACK_OFFSET UNITYSDK_OFFSET(0xA8D0270)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVESECRETSTACK_OFFSET UNITYSDK_OFFSET(0xA8D03F0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVE_OFFSET UNITYSDK_OFFSET(0xA8D04B0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETOVERRIDEWEAKNESS_OFFSET UNITYSDK_OFFSET(0xA8D0050)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSATTACH_OFFSET UNITYSDK_OFFSET(0xA8CFEF0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSPROTECTED_OFFSET UNITYSDK_OFFSET(0xA8CFD90)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSSECRET_OFFSET UNITYSDK_OFFSET(0xA8CFC30)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESS_OFFSET UNITYSDK_OFFSET(0xA8CFB60)
#define RPG_GAMECORE_CHARACTERWEAKNESS_SEARCHAVAILABLEINDEX_OFFSET UNITYSDK_OFFSET(0xA8D0670)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSATTACH_OFFSET UNITYSDK_OFFSET(0xA8CF380)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA8CEF70)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSPROTECT_OFFSET UNITYSDK_OFFSET(0xA8CF170)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSSECRET_OFFSET UNITYSDK_OFFSET(0xA8CF590)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESS_OFFSET UNITYSDK_OFFSET(0xA8CEE70)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSATTACH_OFFSET UNITYSDK_OFFSET(0xA8CFA00)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA8CF8A0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSPROTECT_OFFSET UNITYSDK_OFFSET(0xA8CF950)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSSECRET_OFFSET UNITYSDK_OFFSET(0xA8CFAB0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESS_OFFSET UNITYSDK_OFFSET(0xA8CF7A0)
#define RPG_GAMECORE_CHARACTERWEAKNESS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8D0D00)
#define RPG_GAMECORE_CHARACTERWEAKNESS__CTOR_OFFSET UNITYSDK_OFFSET(0xA8CE330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterWeakness_TypeDefinitionIndex = 46533;

	class CharacterWeakness : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__DefaultStackSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterWeakness_TypeDefinitionIndex)->GetStaticField(0x11FE0);
		}
		::Il2CppArray<::System::Boolean>* _AttachOccupy; // 0x10
		::Il2CppArray<::System::Boolean>* _OverrideOccupy; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>* _AllWeaknessListWithState; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _AttachStack; // 0x28
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _OverrideStack; // 0x30
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _ProtectStack; // 0x38
		::RPG::GameCore::GameEntity* _Owner; // 0x40
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _SecretStack; // 0x48
		::Il2CppArray<::System::Boolean>* _SecretOccupy; // 0x50
		::Il2CppArray<::System::Boolean>* _ProtectOccupy; // 0x58
		::RPG::GameCore::AttackDamageType _AttachedWeaknessList; // 0x60
		::RPG::GameCore::AttackDamageType _ProtectWeaknessList; // 0x64
		::RPG::GameCore::AttackDamageType _AllWeaknessList; // 0x68
		::RPG::GameCore::AttackDamageType _SecretWeaknessList; // 0x6C
		::RPG::GameCore::AttackDamageType _OverridedWeaknessList; // 0x70
		::RPG::GameCore::AttackDamageType _DefaultWeaknessList; // 0x74
		::System::Boolean NotifyChangeEnable; // 0x78
		::System::Boolean _ActiveListDirty; // 0x79
		::RPG::GameCore::AttackDamageType _ActiveWeaknessList; // 0x7C

		::System::Void _ctor(::RPG::GameCore::TurnBasedAbilityComponent* target)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS__CTOR_OFFSET))(this, target);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_DISPOSE_OFFSET))(this);
		}

		::System::Void InitDefaultWeakness(::Il2CppArray<::RPG::GameCore::AttackDamageType>* weaknessList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AttackDamageType>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_INITDEFAULTWEAKNESS_OFFSET))(this, weaknessList);
		}

		::RPG::GameCore::AttackDamageType GetDefaultWeaknessList()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETDEFAULTWEAKNESSLIST_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetOverrideWeaknessList()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETOVERRIDEWEAKNESSLIST_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetAttachedWeaknessList()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETATTACHEDWEAKNESSLIST_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetSecretWeaknessList()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETSECRETWEAKNESSLIST_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetActiveWeakness()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETACTIVEWEAKNESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>* GetAllWeakness()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESS_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetAllWeaknessInEnum()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESSINENUM_OFFSET))(this);
		}

		::System::Boolean IsProtected(::RPG::GameCore::AttackDamageType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_ISPROTECTED_OFFSET))(this, type);
		}

		::System::Boolean IsSecret(::RPG::GameCore::AttackDamageType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_ISSECRET_OFFSET))(this, type);
		}

		::System::Boolean HasSecret()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_HASSECRET_OFFSET))(this);
		}

		::System::Int32 StackWeakness(::RPG::GameCore::TurnBasedAbilityComponent* target, ::RPG::GameCore::WeaknessStackOperationType opType, ::RPG::GameCore::AttackDamageType weaknessList)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::WeaknessStackOperationType, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESS_OFFSET))(this, target, opType, weaknessList);
		}

		::System::Void UnStackWeakness(::RPG::GameCore::TurnBasedAbilityComponent* target, ::RPG::GameCore::WeaknessStackOperationType opType, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::WeaknessStackOperationType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESS_OFFSET))(this, target, opType, index);
		}

		::System::Void ResetWeakness(::RPG::GameCore::WeaknessStackOperationType opType, ::RPG::GameCore::AttackDamageType resetList)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WeaknessStackOperationType, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESS_OFFSET))(this, opType, resetList);
		}

		::System::Void ReserveOverrideStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEOVERRIDESTACK_OFFSET))(this);
		}

		::System::Void ReserveProtectStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEPROTECTSTACK_OFFSET))(this);
		}

		::System::Void ReserveAttachStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEATTACHSTACK_OFFSET))(this);
		}

		::System::Void ReserveSecretStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVESECRETSTACK_OFFSET))(this);
		}

		::System::Void Reserve(::RPG::GameCore::WeaknessStackOperationType opType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WeaknessStackOperationType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESERVE_OFFSET))(this, opType);
		}

		::System::Int32 DoSearchAvailableIndex(::RPG::GameCore::WeaknessStackOperationType opType)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::WeaknessStackOperationType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_DOSEARCHAVAILABLEINDEX_OFFSET))(this, opType);
		}

		::System::Int32 SearchAvailableIndex(::RPG::GameCore::WeaknessStackOperationType opType)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::WeaknessStackOperationType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_SEARCHAVAILABLEINDEX_OFFSET))(this, opType);
		}

		::System::Int32 StackWeaknessOverride(::RPG::GameCore::AttackDamageType weaknessList)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSOVERRIDE_OFFSET))(this, weaknessList);
		}

		::System::Int32 StackWeaknessAttach(::RPG::GameCore::AttackDamageType weaknessList)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSATTACH_OFFSET))(this, weaknessList);
		}

		::System::Int32 StackWeaknessProtect(::RPG::GameCore::AttackDamageType weaknessList)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSPROTECT_OFFSET))(this, weaknessList);
		}

		::System::Int32 StackWeaknessSecret(::RPG::GameCore::AttackDamageType weaknessList)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSSECRET_OFFSET))(this, weaknessList);
		}

		::System::Void UnStackWeaknessOverride(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSOVERRIDE_OFFSET))(this, index);
		}

		::System::Void UnStackWeaknessAttach(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSATTACH_OFFSET))(this, index);
		}

		::System::Void UnStackWeaknessProtect(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSPROTECT_OFFSET))(this, index);
		}

		::System::Void UnStackWeaknessSecret(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSSECRET_OFFSET))(this, index);
		}

		::System::Void ResetWeaknessSecret(::RPG::GameCore::AttackDamageType resetType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSSECRET_OFFSET))(this, resetType);
		}

		::System::Void ResetWeaknessProtected(::RPG::GameCore::AttackDamageType resetType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSPROTECTED_OFFSET))(this, resetType);
		}

		::System::Void ResetWeaknessAttach(::RPG::GameCore::AttackDamageType resetType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSATTACH_OFFSET))(this, resetType);
		}

		::System::Void ResetOverrideWeakness(::RPG::GameCore::AttackDamageType resetType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_RESETOVERRIDEWEAKNESS_OFFSET))(this, resetType);
		}

		::System::Void RefreshOverrideWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHOVERRIDEWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void RefreshAttachWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHATTACHWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void RefreshProtectWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHPROTECTWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void RefreshSecretWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHSECRETWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void RefreshActiveWeaknessList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHACTIVEWEAKNESSLIST_OFFSET))(this);
		}

		::System::Void CopyFrom(::RPG::GameCore::CharacterWeakness* source, ::Struct_2_B6A3FA7992F9F37E_8 cloneArgs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterWeakness*, ::Struct_2_B6A3FA7992F9F37E_8))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_COPYFROM_OFFSET))(this, source, cloneArgs);
		}
	};
}
