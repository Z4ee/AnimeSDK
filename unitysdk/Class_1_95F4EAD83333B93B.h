#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
class Class_0_16E4307DCC419505_343;
class Class_1_06CDCC6A0A66BA0A;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define CLASS_1_95F4EAD83333B93B_METHOD_1_0A5AF6DEFAACC4B7_OFFSET UNITYSDK_OFFSET(0xD18A080)
#define CLASS_1_95F4EAD83333B93B_METHOD_1_40BD6FF3E5D3474B_OFFSET UNITYSDK_OFFSET(0xD189D70)
#define CLASS_1_95F4EAD83333B93B_METHOD_1_69A54399DF813FC5_OFFSET UNITYSDK_OFFSET(0xD189BF0)
#define CLASS_1_95F4EAD83333B93B_METHOD_1_8164AB5D3C0F15EF_OFFSET UNITYSDK_OFFSET(0xD189C70)
#define CLASS_1_95F4EAD83333B93B_METHOD_1_E362125A2EB6A03F_OFFSET UNITYSDK_OFFSET(0xD189F90)
#define CLASS_1_95F4EAD83333B93B__CTOR_OFFSET UNITYSDK_OFFSET(0xD18A140)

inline static constexpr unsigned int Class_1_95F4EAD83333B93B_TypeDefinitionIndex = 51012;

class Class_1_95F4EAD83333B93B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_69A54399DF813FC5(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_06CDCC6A0A66BA0A* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B_METHOD_1_69A54399DF813FC5_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_341* Method_1_8164AB5D3C0F15EF(::Class_0_16E4307DCC419505_341* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_06CDCC6A0A66BA0A* a3)
	{
		return ((::Class_0_16E4307DCC419505_341*(*)(::PVOID, ::Class_0_16E4307DCC419505_341*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B_METHOD_1_8164AB5D3C0F15EF_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_343* Method_1_40BD6FF3E5D3474B(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_06CDCC6A0A66BA0A* a2)
	{
		return ((::Class_0_16E4307DCC419505_343*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B_METHOD_1_40BD6FF3E5D3474B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::EquipmentItemData* Method_1_E362125A2EB6A03F(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_06CDCC6A0A66BA0A* a2)
	{
		return ((::RPG::Client::EquipmentItemData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B_METHOD_1_E362125A2EB6A03F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::EquipmentItemData* Method_1_0A5AF6DEFAACC4B7(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::EquipmentItemData* a2, ::Class_1_06CDCC6A0A66BA0A* a3)
	{
		return ((::RPG::Client::EquipmentItemData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::EquipmentItemData*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B_METHOD_1_0A5AF6DEFAACC4B7_OFFSET))(this, a1, a2, a3);
	}
};
