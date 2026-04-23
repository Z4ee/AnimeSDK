#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_348;
class Class_0_16E4307DCC419505_350;
class Class_1_06CDCC6A0A66BA0A;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define CLASS_1_95F4EAD83333B93B_METHOD_1_0A5AF6DEFAACC4B7_OFFSET UNITYSDK_OFFSET(0x99B0780)
#define CLASS_1_95F4EAD83333B93B_METHOD_1_40BD6FF3E5D3474B_OFFSET UNITYSDK_OFFSET(0x99B0470)
#define CLASS_1_95F4EAD83333B93B_METHOD_1_69A54399DF813FC5_OFFSET UNITYSDK_OFFSET(0x99B02F0)
#define CLASS_1_95F4EAD83333B93B_METHOD_1_8164AB5D3C0F15EF_OFFSET UNITYSDK_OFFSET(0x99B0370)
#define CLASS_1_95F4EAD83333B93B_METHOD_1_E362125A2EB6A03F_OFFSET UNITYSDK_OFFSET(0x99B0690)
#define CLASS_1_95F4EAD83333B93B__CTOR_OFFSET UNITYSDK_OFFSET(0x99B0840)

inline static constexpr unsigned int Class_1_95F4EAD83333B93B_TypeDefinitionIndex = 57895;

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

	::Class_0_16E4307DCC419505_348* Method_1_8164AB5D3C0F15EF(::Class_0_16E4307DCC419505_348* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_06CDCC6A0A66BA0A* a3)
	{
		return ((::Class_0_16E4307DCC419505_348*(*)(::PVOID, ::Class_0_16E4307DCC419505_348*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B_METHOD_1_8164AB5D3C0F15EF_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_350* Method_1_40BD6FF3E5D3474B(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_06CDCC6A0A66BA0A* a2)
	{
		return ((::Class_0_16E4307DCC419505_350*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B_METHOD_1_40BD6FF3E5D3474B_OFFSET))(this, a1, a2);
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
