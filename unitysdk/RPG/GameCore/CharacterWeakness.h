#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/MonsterWeaknessSpecialType.h"
#include "unitysdk/RPG/GameCore/WeaknessStackOperationType.h"
#include "unitysdk/RPG/GameCore/WeaknessState.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_8.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_9175DCD82B81F4D1;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_CHARACTERWEAKNESS_COPYFROM_OFFSET UNITYSDK_OFFSET(0xB61ABA0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6184A0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_DOSEARCHAVAILABLEINDEX_OFFSET UNITYSDK_OFFSET(0xB61A5D0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETACTIVEWEAKNESS_OFFSET UNITYSDK_OFFSET(0xB618C70)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESSINENUM_OFFSET UNITYSDK_OFFSET(0xB618CF0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETALLWEAKNESS_OFFSET UNITYSDK_OFFSET(0xB618CB0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETATTACHEDWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xB618BF0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETDEFAULTWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xB618B60)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETOVERRIDEWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xB618BA0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GETSECRETWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xB618C30)
#define RPG_GAMECORE_CHARACTERWEAKNESS_GET_SPECIALWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xB61AE90)
#define RPG_GAMECORE_CHARACTERWEAKNESS_HASSECRET_OFFSET UNITYSDK_OFFSET(0xB618E70)
#define RPG_GAMECORE_CHARACTERWEAKNESS_INITDEFAULTWEAKNESS_OFFSET UNITYSDK_OFFSET(0xB618530)
#define RPG_GAMECORE_CHARACTERWEAKNESS_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0xB618D30)
#define RPG_GAMECORE_CHARACTERWEAKNESS_ISSECRET_OFFSET UNITYSDK_OFFSET(0xB618DD0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHACTIVEWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xB618730)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHATTACHWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xB61A730)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHOVERRIDEWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xB6185B0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHPROTECTWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xB61A880)
#define RPG_GAMECORE_CHARACTERWEAKNESS_REFRESHSECRETWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xB61A9E0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEATTACHSTACK_OFFSET UNITYSDK_OFFSET(0xB61A380)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEOVERRIDESTACK_OFFSET UNITYSDK_OFFSET(0xB61A200)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVEPROTECTSTACK_OFFSET UNITYSDK_OFFSET(0xB61A2C0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVESECRETSTACK_OFFSET UNITYSDK_OFFSET(0xB61A440)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESERVE_OFFSET UNITYSDK_OFFSET(0xB61A500)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETOVERRIDEWEAKNESS_OFFSET UNITYSDK_OFFSET(0xB61A0A0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSATTACH_OFFSET UNITYSDK_OFFSET(0xB619F40)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSPROTECTED_OFFSET UNITYSDK_OFFSET(0xB619DE0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESSSECRET_OFFSET UNITYSDK_OFFSET(0xB619C80)
#define RPG_GAMECORE_CHARACTERWEAKNESS_RESETWEAKNESS_OFFSET UNITYSDK_OFFSET(0xB619BB0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_SEARCHAVAILABLEINDEX_OFFSET UNITYSDK_OFFSET(0xB61A6C0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSATTACH_OFFSET UNITYSDK_OFFSET(0xB6193D0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSOVERRIDE_OFFSET UNITYSDK_OFFSET(0xB618FC0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSPROTECT_OFFSET UNITYSDK_OFFSET(0xB6191C0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESSSECRET_OFFSET UNITYSDK_OFFSET(0xB6195E0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESS_OFFSET UNITYSDK_OFFSET(0xB618EC0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSATTACH_OFFSET UNITYSDK_OFFSET(0xB619A50)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSOVERRIDE_OFFSET UNITYSDK_OFFSET(0xB6198F0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSPROTECT_OFFSET UNITYSDK_OFFSET(0xB6199A0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESSSECRET_OFFSET UNITYSDK_OFFSET(0xB619B00)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESS_OFFSET UNITYSDK_OFFSET(0xB6197F0)
#define RPG_GAMECORE_CHARACTERWEAKNESS_UPDATESPECIALWEAKNESS_OFFSET UNITYSDK_OFFSET(0xB61AD70)
#define RPG_GAMECORE_CHARACTERWEAKNESS__CCTOR_OFFSET UNITYSDK_OFFSET(0xB61AEA0)
#define RPG_GAMECORE_CHARACTERWEAKNESS__CTOR_OFFSET UNITYSDK_OFFSET(0xB618340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterWeakness_TypeDefinitionIndex = 53223;

	class CharacterWeakness : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__DefaultStackSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterWeakness_TypeDefinitionIndex)->GetStaticField(0xF840);
		}
		::Il2CppArray<::System::Boolean>* _OverrideOccupy; // 0x10
		::Il2CppArray<::System::Boolean>* _ProtectOccupy; // 0x18
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _SecretStack; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _OverrideStack; // 0x28
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _ProtectStack; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterWeaknessSpecialType>* _SpecialWeaknessList; // 0x38
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::WeaknessState>>* _AllWeaknessListWithState; // 0x40
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _AttachStack; // 0x48
		::RPG::GameCore::GameEntity* _Owner; // 0x50
		::Il2CppArray<::System::Boolean>* _SecretOccupy; // 0x58
		::Il2CppArray<::System::Boolean>* _AttachOccupy; // 0x60
		::RPG::GameCore::AttackDamageType _AllWeaknessList; // 0x68
		::RPG::GameCore::AttackDamageType _ActiveWeaknessList; // 0x6C
		::RPG::GameCore::AttackDamageType _DefaultWeaknessList; // 0x70
		::System::Boolean NotifyChangeEnable; // 0x74
		::System::Boolean _ActiveListDirty; // 0x75
		::RPG::GameCore::AttackDamageType _SecretWeaknessList; // 0x78
		::RPG::GameCore::AttackDamageType _AttachedWeaknessList; // 0x7C
		::RPG::GameCore::AttackDamageType _OverridedWeaknessList; // 0x80
		::RPG::GameCore::AttackDamageType _ProtectWeaknessList; // 0x84

		::System::Void _ctor(::RPG::GameCore::GameEntity* target)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS__CTOR_OFFSET))(this, target);
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

		::System::Int32 StackWeakness(::RPG::GameCore::GameEntity* target, ::RPG::GameCore::WeaknessStackOperationType opType, ::RPG::GameCore::AttackDamageType weaknessList)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::WeaknessStackOperationType, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_STACKWEAKNESS_OFFSET))(this, target, opType, weaknessList);
		}

		::System::Void UnStackWeakness(::RPG::GameCore::GameEntity* target, ::RPG::GameCore::WeaknessStackOperationType opType, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::WeaknessStackOperationType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UNSTACKWEAKNESS_OFFSET))(this, target, opType, index);
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

		::System::Void UpdateSpecialWeakness(::Class_1_9175DCD82B81F4D1* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9175DCD82B81F4D1*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_UPDATESPECIALWEAKNESS_OFFSET))(this, data);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::MonsterWeaknessSpecialType>* get_SpecialWeaknessList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::MonsterWeaknessSpecialType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERWEAKNESS_GET_SPECIALWEAKNESSLIST_OFFSET))(this);
		}
	};
}
