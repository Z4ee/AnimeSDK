#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_506;
class Class_0_16E4307DCC419505_508;
class Class_1_65EF9EC87B818BF3;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define CLASS_1_48709254E16619AF_METHOD_1_03012B264FDCA680_OFFSET UNITYSDK_OFFSET(0x15DBE300)
#define CLASS_1_48709254E16619AF_METHOD_1_608C759BB48D1163_OFFSET UNITYSDK_OFFSET(0x15DBE3F0)
#define CLASS_1_48709254E16619AF_METHOD_1_67CCBEE7D5F036A9_OFFSET UNITYSDK_OFFSET(0x15DBE100)
#define CLASS_1_48709254E16619AF_METHOD_1_69A54399DF813FC5_OFFSET UNITYSDK_OFFSET(0x15DBDF80)
#define CLASS_1_48709254E16619AF_METHOD_1_8164AB5D3C0F15EF_OFFSET UNITYSDK_OFFSET(0x15DBE000)
#define CLASS_1_48709254E16619AF__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBE4E0)

inline static constexpr unsigned int Class_1_48709254E16619AF_TypeDefinitionIndex = 62855;

class Class_1_48709254E16619AF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48709254E16619AF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_69A54399DF813FC5(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_48709254E16619AF_METHOD_1_69A54399DF813FC5_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_506* Method_1_8164AB5D3C0F15EF(::Class_0_16E4307DCC419505_506* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_65EF9EC87B818BF3* a3)
	{
		return ((::Class_0_16E4307DCC419505_506*(*)(::PVOID, ::Class_0_16E4307DCC419505_506*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_48709254E16619AF_METHOD_1_8164AB5D3C0F15EF_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_508* Method_1_67CCBEE7D5F036A9(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::Class_0_16E4307DCC419505_508*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_48709254E16619AF_METHOD_1_67CCBEE7D5F036A9_OFFSET))(this, a1, a2);
	}

	::RPG::Client::EquipmentItemData* Method_1_03012B264FDCA680(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::RPG::Client::EquipmentItemData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_48709254E16619AF_METHOD_1_03012B264FDCA680_OFFSET))(this, a1, a2);
	}

	::RPG::Client::EquipmentItemData* Method_1_608C759BB48D1163(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::EquipmentItemData* a2, ::Class_1_65EF9EC87B818BF3* a3)
	{
		return ((::RPG::Client::EquipmentItemData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::EquipmentItemData*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_48709254E16619AF_METHOD_1_608C759BB48D1163_OFFSET))(this, a1, a2, a3);
	}
};
