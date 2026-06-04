#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define CLASS_1_96BF5776DE2FE31B_GET_ALLOWREPEATUNLOCKREWARD_OFFSET UNITYSDK_OFFSET(0xAD5F630)
#define CLASS_1_96BF5776DE2FE31B_GET_CHANGECONFIGPATH_OFFSET UNITYSDK_OFFSET(0xAD5F690)
#define CLASS_1_96BF5776DE2FE31B_GET_DESC_OFFSET UNITYSDK_OFFSET(0xAD5F650)
#define CLASS_1_96BF5776DE2FE31B_GET_GENDER_OFFSET UNITYSDK_OFFSET(0xAD5F5D0)
#define CLASS_1_96BF5776DE2FE31B_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xAD5F5A0)
#define CLASS_1_96BF5776DE2FE31B_GET_ISEARLYUNLOCK_OFFSET UNITYSDK_OFFSET(0xAD5F610)
#define CLASS_1_96BF5776DE2FE31B_GET_ROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xAD5F5B0)
#define CLASS_1_96BF5776DE2FE31B_GET_UNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0xAD5F5F0)
#define CLASS_1_96BF5776DE2FE31B_GET_UNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xAD5F670)
#define CLASS_1_96BF5776DE2FE31B_SET_ALLOWREPEATUNLOCKREWARD_OFFSET UNITYSDK_OFFSET(0xAD5F640)
#define CLASS_1_96BF5776DE2FE31B_SET_CHANGECONFIGPATH_OFFSET UNITYSDK_OFFSET(0xAD5F6A0)
#define CLASS_1_96BF5776DE2FE31B_SET_DESC_OFFSET UNITYSDK_OFFSET(0xAD5F660)
#define CLASS_1_96BF5776DE2FE31B_SET_GENDER_OFFSET UNITYSDK_OFFSET(0xAD5F5E0)
#define CLASS_1_96BF5776DE2FE31B_SET_ISEARLYUNLOCK_OFFSET UNITYSDK_OFFSET(0xAD5F620)
#define CLASS_1_96BF5776DE2FE31B_SET_ROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xAD5F5C0)
#define CLASS_1_96BF5776DE2FE31B_SET_UNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0xAD5F600)
#define CLASS_1_96BF5776DE2FE31B_SET_UNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xAD5F680)
#define CLASS_1_96BF5776DE2FE31B__CTOR_OFFSET UNITYSDK_OFFSET(0xAD5F6B0)

inline static constexpr unsigned int Class_1_96BF5776DE2FE31B_TypeDefinitionIndex = 48607;

class Class_1_96BF5776DE2FE31B : public ::System::Object
{
public:
	::System::String* _ChangeConfigPath_k__BackingField; // 0x10
	::Il2CppArray<::RPG::GameCore::ConditionParam*>* _UnlockConditions_k__BackingField; // 0x18
	::RPG::Client::TextID _UnlockToast_k__BackingField; // 0x20
	::RPG::GameCore::GenderType _Gender_k__BackingField; // 0x30
	::Struct_2_019938BC9C50B169_1 _RoleIdentifier_k__BackingField; // 0x34
	::System::Boolean _AllowRepeatUnlockReward_k__BackingField; // 0x38
	::System::Boolean _IsEarlyUnlock_k__BackingField; // 0x39
	::Struct_2_019938BC9C50B169_2 _Identifier_k__BackingField; // 0x3C
	::RPG::Client::TextID _Desc_k__BackingField; // 0x40

	::System::Void _ctor(::Struct_2_019938BC9C50B169_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_2))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_2 get_Identifier()
	{
		return ((::Struct_2_019938BC9C50B169_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_GET_IDENTIFIER_OFFSET))(this);
	}

	::Struct_2_019938BC9C50B169_1 get_RoleIdentifier()
	{
		return ((::Struct_2_019938BC9C50B169_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_GET_ROLEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_RoleIdentifier(::Struct_2_019938BC9C50B169_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_1))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_SET_ROLEIDENTIFIER_OFFSET))(this, a1);
	}

	::RPG::GameCore::GenderType get_Gender()
	{
		return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_GET_GENDER_OFFSET))(this);
	}

	::System::Void set_Gender(::RPG::GameCore::GenderType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_SET_GENDER_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::ConditionParam*>* get_UnlockConditions()
	{
		return ((::Il2CppArray<::RPG::GameCore::ConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_GET_UNLOCKCONDITIONS_OFFSET))(this);
	}

	::System::Void set_UnlockConditions(::Il2CppArray<::RPG::GameCore::ConditionParam*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_SET_UNLOCKCONDITIONS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEarlyUnlock()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_GET_ISEARLYUNLOCK_OFFSET))(this);
	}

	::System::Void set_IsEarlyUnlock(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_SET_ISEARLYUNLOCK_OFFSET))(this, a1);
	}

	::System::Boolean get_AllowRepeatUnlockReward()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_GET_ALLOWREPEATUNLOCKREWARD_OFFSET))(this);
	}

	::System::Void set_AllowRepeatUnlockReward(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_SET_ALLOWREPEATUNLOCKREWARD_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_SET_DESC_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_UnlockToast()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_GET_UNLOCKTOAST_OFFSET))(this);
	}

	::System::Void set_UnlockToast(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_SET_UNLOCKTOAST_OFFSET))(this, a1);
	}

	::System::String* get_ChangeConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_GET_CHANGECONFIGPATH_OFFSET))(this);
	}

	::System::Void set_ChangeConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_96BF5776DE2FE31B_SET_CHANGECONFIGPATH_OFFSET))(this, a1);
	}
};
