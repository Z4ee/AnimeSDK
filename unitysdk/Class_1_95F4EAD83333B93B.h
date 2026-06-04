#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_360;
class Class_0_16E4307DCC419505_361;
class Class_1_61097837E1D530F4;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define CLASS_1_95F4EAD83333B93B_METHOD_1_0A5AF6DEFAACC4B7_OFFSET UNITYSDK_OFFSET(0x13C42170)
#define CLASS_1_95F4EAD83333B93B_METHOD_1_69A54399DF813FC5_OFFSET UNITYSDK_OFFSET(0x13C41D80)
#define CLASS_1_95F4EAD83333B93B_METHOD_1_8164AB5D3C0F15EF_OFFSET UNITYSDK_OFFSET(0x13C41E00)
#define CLASS_1_95F4EAD83333B93B_METHOD_1_E362125A2EB6A03F_OFFSET UNITYSDK_OFFSET(0x13C42090)
#define CLASS_1_95F4EAD83333B93B_METHOD_1_F783C37F0A91489F_OFFSET UNITYSDK_OFFSET(0x13C41F00)
#define CLASS_1_95F4EAD83333B93B__CTOR_OFFSET UNITYSDK_OFFSET(0x13C42230)

inline static constexpr unsigned int Class_1_95F4EAD83333B93B_TypeDefinitionIndex = 58805;

class Class_1_95F4EAD83333B93B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_69A54399DF813FC5(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B_METHOD_1_69A54399DF813FC5_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_360* Method_1_8164AB5D3C0F15EF(::Class_0_16E4307DCC419505_360* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_61097837E1D530F4* a3)
	{
		return ((::Class_0_16E4307DCC419505_360*(*)(::PVOID, ::Class_0_16E4307DCC419505_360*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B_METHOD_1_8164AB5D3C0F15EF_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_361* Method_1_F783C37F0A91489F(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::Class_0_16E4307DCC419505_361*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B_METHOD_1_F783C37F0A91489F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::EquipmentItemData* Method_1_E362125A2EB6A03F(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::RPG::Client::EquipmentItemData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B_METHOD_1_E362125A2EB6A03F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::EquipmentItemData* Method_1_0A5AF6DEFAACC4B7(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::EquipmentItemData* a2, ::Class_1_61097837E1D530F4* a3)
	{
		return ((::RPG::Client::EquipmentItemData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::EquipmentItemData*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_95F4EAD83333B93B_METHOD_1_0A5AF6DEFAACC4B7_OFFSET))(this, a1, a2, a3);
	}
};
