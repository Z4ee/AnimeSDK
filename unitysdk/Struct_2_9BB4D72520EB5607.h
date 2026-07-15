#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6_5.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_760;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_9BB4D72520EB5607_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x395BF90)
#define STRUCT_2_9BB4D72520EB5607_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x395BF50)
#define STRUCT_2_9BB4D72520EB5607_EQUALS_OFFSET UNITYSDK_OFFSET(0x395BED0)
#define STRUCT_2_9BB4D72520EB5607_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x395BEC0)
#define STRUCT_2_9BB4D72520EB5607_GET_ISUPGRADED_OFFSET UNITYSDK_OFFSET(0x38FB860)
#define STRUCT_2_9BB4D72520EB5607_GET_ORIGINVERSION_OFFSET UNITYSDK_OFFSET(0x7A7FC0)
#define STRUCT_2_9BB4D72520EB5607_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define STRUCT_2_9BB4D72520EB5607_GET_RULEPROVIDER_OFFSET UNITYSDK_OFFSET(0x676DC0)
#define STRUCT_2_9BB4D72520EB5607_GET_UPGRADE_OFFSET UNITYSDK_OFFSET(0x676BA0)
#define STRUCT_2_9BB4D72520EB5607_GET_USINGRULEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x7A7FD0)
#define STRUCT_2_9BB4D72520EB5607_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x177AEE50)
#define STRUCT_2_9BB4D72520EB5607_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x177AEE00)
#define STRUCT_2_9BB4D72520EB5607_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x395BEA0)
#define STRUCT_2_9BB4D72520EB5607_SET_ISUPGRADED_OFFSET UNITYSDK_OFFSET(0x395BE70)
#define STRUCT_2_9BB4D72520EB5607_SET_ORIGINVERSION_OFFSET UNITYSDK_OFFSET(0x7C2960)
#define STRUCT_2_9BB4D72520EB5607_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x164FF0)
#define STRUCT_2_9BB4D72520EB5607_SET_RULEPROVIDER_OFFSET UNITYSDK_OFFSET(0x7BE220)
#define STRUCT_2_9BB4D72520EB5607_SET_UPGRADE_OFFSET UNITYSDK_OFFSET(0xA4B360)
#define STRUCT_2_9BB4D72520EB5607_SET_USINGRULEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x395BE80)
#define STRUCT_2_9BB4D72520EB5607_TOSTRING_OFFSET UNITYSDK_OFFSET(0x395BE90)
#define STRUCT_2_9BB4D72520EB5607__CTOR_OFFSET UNITYSDK_OFFSET(0x38FA940)

inline static constexpr unsigned int Struct_2_9BB4D72520EB5607_TypeDefinitionIndex = 60083;

struct alignas(8) Struct_2_9BB4D72520EB5607
{
	::RPG::AvatarSystem::IAvatar* _Origin_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_760* _RuleProvider_k__BackingField; // 0x18
	::RPG::AvatarSystem::Avatar* _Upgrade_k__BackingField; // 0x20
	::System::Boolean _IsUpgraded_k__BackingField; // 0x28
	::System::UInt32 _OriginVersion_k__BackingField; // 0x2C
	::Struct_2_D645B4E0B73852B6_5 _UsingRuleIdentifier_k__BackingField; // 0x30

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1, ::Class_0_16E4307DCC419505_760* a2, ::RPG::AvatarSystem::Avatar* a3, ::System::Boolean a4, ::System::UInt32 a5, ::Struct_2_D645B4E0B73852B6_5& a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_0_16E4307DCC419505_760*, ::RPG::AvatarSystem::Avatar*, ::System::Boolean, ::System::UInt32, ::Struct_2_D645B4E0B73852B6_5&))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::RPG::AvatarSystem::IAvatar* get_Origin()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_GET_ORIGIN_OFFSET))(this);
	}

	::System::Void set_Origin(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_SET_ORIGIN_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_760* get_RuleProvider()
	{
		return ((::Class_0_16E4307DCC419505_760*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_GET_RULEPROVIDER_OFFSET))(this);
	}

	::System::Void set_RuleProvider(::Class_0_16E4307DCC419505_760* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_760*))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_SET_RULEPROVIDER_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Avatar* get_Upgrade()
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_GET_UPGRADE_OFFSET))(this);
	}

	::System::Void set_Upgrade(::RPG::AvatarSystem::Avatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Avatar*))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_SET_UPGRADE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsUpgraded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_GET_ISUPGRADED_OFFSET))(this);
	}

	::System::Void set_IsUpgraded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_SET_ISUPGRADED_OFFSET))(this, a1);
	}

	::System::UInt32 get_OriginVersion()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_GET_ORIGINVERSION_OFFSET))(this);
	}

	::System::Void set_OriginVersion(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_SET_ORIGINVERSION_OFFSET))(this, a1);
	}

	::Struct_2_D645B4E0B73852B6_5 get_UsingRuleIdentifier()
	{
		return ((::Struct_2_D645B4E0B73852B6_5(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_GET_USINGRULEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_UsingRuleIdentifier(::Struct_2_D645B4E0B73852B6_5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_5))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_SET_USINGRULEIDENTIFIER_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_9BB4D72520EB5607 a1, ::Struct_2_9BB4D72520EB5607 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_9BB4D72520EB5607, ::Struct_2_9BB4D72520EB5607))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_9BB4D72520EB5607 a1, ::Struct_2_9BB4D72520EB5607 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_9BB4D72520EB5607, ::Struct_2_9BB4D72520EB5607))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_9BB4D72520EB5607 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9BB4D72520EB5607))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::RPG::AvatarSystem::IAvatar*& a1, ::Class_0_16E4307DCC419505_760*& a2, ::RPG::AvatarSystem::Avatar*& a3, ::System::Boolean& a4, ::System::UInt32& a5, ::Struct_2_D645B4E0B73852B6_5& a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*&, ::Class_0_16E4307DCC419505_760*&, ::RPG::AvatarSystem::Avatar*&, ::System::Boolean&, ::System::UInt32&, ::Struct_2_D645B4E0B73852B6_5&))((::PBYTE)hIl2Cpp + STRUCT_2_9BB4D72520EB5607_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
