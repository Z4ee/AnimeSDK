#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define CLASS_1_40118813D113D3D1_GET_ALLOWREPEATUNLOCKREWARD_OFFSET UNITYSDK_OFFSET(0xC0E1AE0)
#define CLASS_1_40118813D113D3D1_GET_CHANGECONFIGPATH_OFFSET UNITYSDK_OFFSET(0xC0E1B40)
#define CLASS_1_40118813D113D3D1_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC0E1B00)
#define CLASS_1_40118813D113D3D1_GET_GENDER_OFFSET UNITYSDK_OFFSET(0xC0E1A80)
#define CLASS_1_40118813D113D3D1_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC0E1A50)
#define CLASS_1_40118813D113D3D1_GET_ISEARLYUNLOCK_OFFSET UNITYSDK_OFFSET(0xC0E1AC0)
#define CLASS_1_40118813D113D3D1_GET_ROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC0E1A60)
#define CLASS_1_40118813D113D3D1_GET_UNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0xC0E1AA0)
#define CLASS_1_40118813D113D3D1_GET_UNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xC0E1B20)
#define CLASS_1_40118813D113D3D1_SET_ALLOWREPEATUNLOCKREWARD_OFFSET UNITYSDK_OFFSET(0xC0E1AF0)
#define CLASS_1_40118813D113D3D1_SET_CHANGECONFIGPATH_OFFSET UNITYSDK_OFFSET(0xC0E1B50)
#define CLASS_1_40118813D113D3D1_SET_DESC_OFFSET UNITYSDK_OFFSET(0xC0E1B10)
#define CLASS_1_40118813D113D3D1_SET_GENDER_OFFSET UNITYSDK_OFFSET(0xC0E1A90)
#define CLASS_1_40118813D113D3D1_SET_ISEARLYUNLOCK_OFFSET UNITYSDK_OFFSET(0xC0E1AD0)
#define CLASS_1_40118813D113D3D1_SET_ROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC0E1A70)
#define CLASS_1_40118813D113D3D1_SET_UNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0xC0E1AB0)
#define CLASS_1_40118813D113D3D1_SET_UNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0xC0E1B30)
#define CLASS_1_40118813D113D3D1__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E1B60)

inline static constexpr unsigned int Class_1_40118813D113D3D1_TypeDefinitionIndex = 47989;

class Class_1_40118813D113D3D1 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::ConditionParam*>* _UnlockConditions_k__BackingField; // 0x10
	::System::String* _ChangeConfigPath_k__BackingField; // 0x18
	::System::Boolean _IsEarlyUnlock_k__BackingField; // 0x20
	::System::Boolean _AllowRepeatUnlockReward_k__BackingField; // 0x21
	::RPG::GameCore::GenderType _Gender_k__BackingField; // 0x24
	::RPG::Client::TextID _UnlockToast_k__BackingField; // 0x28
	::Struct_2_019938BC9C50B169_1 _RoleIdentifier_k__BackingField; // 0x38
	::Struct_2_019938BC9C50B169_2 _Identifier_k__BackingField; // 0x3C
	::RPG::Client::TextID _Desc_k__BackingField; // 0x40

	::System::Void _ctor(::Struct_2_019938BC9C50B169_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_2))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_2 get_Identifier()
	{
		return ((::Struct_2_019938BC9C50B169_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_GET_IDENTIFIER_OFFSET))(this);
	}

	::Struct_2_019938BC9C50B169_1 get_RoleIdentifier()
	{
		return ((::Struct_2_019938BC9C50B169_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_GET_ROLEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_RoleIdentifier(::Struct_2_019938BC9C50B169_1 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_1))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_SET_ROLEIDENTIFIER_OFFSET))(this, value);
	}

	::RPG::GameCore::GenderType get_Gender()
	{
		return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_GET_GENDER_OFFSET))(this);
	}

	::System::Void set_Gender(::RPG::GameCore::GenderType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_SET_GENDER_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::ConditionParam*>* get_UnlockConditions()
	{
		return ((::Il2CppArray<::RPG::GameCore::ConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_GET_UNLOCKCONDITIONS_OFFSET))(this);
	}

	::System::Void set_UnlockConditions(::Il2CppArray<::RPG::GameCore::ConditionParam*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ConditionParam*>*))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_SET_UNLOCKCONDITIONS_OFFSET))(this, value);
	}

	::System::Boolean get_IsEarlyUnlock()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_GET_ISEARLYUNLOCK_OFFSET))(this);
	}

	::System::Void set_IsEarlyUnlock(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_SET_ISEARLYUNLOCK_OFFSET))(this, value);
	}

	::System::Boolean get_AllowRepeatUnlockReward()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_GET_ALLOWREPEATUNLOCKREWARD_OFFSET))(this);
	}

	::System::Void set_AllowRepeatUnlockReward(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_SET_ALLOWREPEATUNLOCKREWARD_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_SET_DESC_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_UnlockToast()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_GET_UNLOCKTOAST_OFFSET))(this);
	}

	::System::Void set_UnlockToast(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_SET_UNLOCKTOAST_OFFSET))(this, value);
	}

	::System::String* get_ChangeConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_GET_CHANGECONFIGPATH_OFFSET))(this);
	}

	::System::Void set_ChangeConfigPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_40118813D113D3D1_SET_CHANGECONFIGPATH_OFFSET))(this, value);
	}
};
