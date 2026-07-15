#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_071D0EF220D742B6;
class Class_1_D17272E82AE804C2_7;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_9789626E6BA2AAC1_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x38FE720)
#define STRUCT_2_9789626E6BA2AAC1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x38FE6E0)
#define STRUCT_2_9789626E6BA2AAC1_EQUALS_OFFSET UNITYSDK_OFFSET(0x38FE660)
#define STRUCT_2_9789626E6BA2AAC1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38FE650)
#define STRUCT_2_9789626E6BA2AAC1_GET_EQUIPMENTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA4AEC0)
#define STRUCT_2_9789626E6BA2AAC1_GET_ORIGINVERSION_OFFSET UNITYSDK_OFFSET(0x691EF0)
#define STRUCT_2_9789626E6BA2AAC1_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x1651A0)
#define STRUCT_2_9789626E6BA2AAC1_GET_RELICSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xC36980)
#define STRUCT_2_9789626E6BA2AAC1_GET_UPGRADE_OFFSET UNITYSDK_OFFSET(0x676DC0)
#define STRUCT_2_9789626E6BA2AAC1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x16316EB0)
#define STRUCT_2_9789626E6BA2AAC1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x16316E60)
#define STRUCT_2_9789626E6BA2AAC1_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x38FE630)
#define STRUCT_2_9789626E6BA2AAC1_SET_EQUIPMENTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x38CBD50)
#define STRUCT_2_9789626E6BA2AAC1_SET_ORIGINVERSION_OFFSET UNITYSDK_OFFSET(0x38C6D30)
#define STRUCT_2_9789626E6BA2AAC1_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x164FF0)
#define STRUCT_2_9789626E6BA2AAC1_SET_RELICSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x38D42E0)
#define STRUCT_2_9789626E6BA2AAC1_SET_UPGRADE_OFFSET UNITYSDK_OFFSET(0x7BE220)
#define STRUCT_2_9789626E6BA2AAC1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x38FE620)
#define STRUCT_2_9789626E6BA2AAC1__CTOR_OFFSET UNITYSDK_OFFSET(0x38FE600)

inline static constexpr unsigned int Struct_2_9789626E6BA2AAC1_TypeDefinitionIndex = 59778;

struct alignas(8) Struct_2_9789626E6BA2AAC1
{
	::RPG::AvatarSystem::IAvatar* _Origin_k__BackingField; // 0x10
	::RPG::AvatarSystem::Avatar* _Upgrade_k__BackingField; // 0x18
	::System::UInt32 _OriginVersion_k__BackingField; // 0x20
	::Class_1_D17272E82AE804C2_7* _EquipmentSnapshot_k__BackingField; // 0x28
	::Class_1_071D0EF220D742B6* _RelicSnapshot_k__BackingField; // 0x30

	::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::Avatar* a2, ::System::UInt32 a3, ::Class_1_D17272E82AE804C2_7* a4, ::Class_1_071D0EF220D742B6* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::Avatar*, ::System::UInt32, ::Class_1_D17272E82AE804C2_7*, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::AvatarSystem::IAvatar* get_Origin()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_GET_ORIGIN_OFFSET))(this);
	}

	::System::Void set_Origin(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_SET_ORIGIN_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Avatar* get_Upgrade()
	{
		return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_GET_UPGRADE_OFFSET))(this);
	}

	::System::Void set_Upgrade(::RPG::AvatarSystem::Avatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Avatar*))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_SET_UPGRADE_OFFSET))(this, a1);
	}

	::System::UInt32 get_OriginVersion()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_GET_ORIGINVERSION_OFFSET))(this);
	}

	::System::Void set_OriginVersion(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_SET_ORIGINVERSION_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_7* get_EquipmentSnapshot()
	{
		return ((::Class_1_D17272E82AE804C2_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_GET_EQUIPMENTSNAPSHOT_OFFSET))(this);
	}

	::System::Void set_EquipmentSnapshot(::Class_1_D17272E82AE804C2_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_7*))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_SET_EQUIPMENTSNAPSHOT_OFFSET))(this, a1);
	}

	::Class_1_071D0EF220D742B6* get_RelicSnapshot()
	{
		return ((::Class_1_071D0EF220D742B6*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_GET_RELICSNAPSHOT_OFFSET))(this);
	}

	::System::Void set_RelicSnapshot(::Class_1_071D0EF220D742B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_SET_RELICSNAPSHOT_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_9789626E6BA2AAC1 a1, ::Struct_2_9789626E6BA2AAC1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_9789626E6BA2AAC1, ::Struct_2_9789626E6BA2AAC1))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_9789626E6BA2AAC1 a1, ::Struct_2_9789626E6BA2AAC1 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_9789626E6BA2AAC1, ::Struct_2_9789626E6BA2AAC1))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_9789626E6BA2AAC1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9789626E6BA2AAC1))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::RPG::AvatarSystem::IAvatar*& a1, ::RPG::AvatarSystem::Avatar*& a2, ::System::UInt32& a3, ::Class_1_D17272E82AE804C2_7*& a4, ::Class_1_071D0EF220D742B6*& a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*&, ::RPG::AvatarSystem::Avatar*&, ::System::UInt32&, ::Class_1_D17272E82AE804C2_7*&, ::Class_1_071D0EF220D742B6*&))((::PBYTE)hIl2Cpp + STRUCT_2_9789626E6BA2AAC1_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
