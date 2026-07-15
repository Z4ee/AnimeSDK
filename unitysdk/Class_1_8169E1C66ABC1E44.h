#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_384;
class Class_0_16E4307DCC419505_386;
class Class_1_65EF9EC87B818BF3;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EquipmentItemData; }

#define CLASS_1_8169E1C66ABC1E44_METHOD_1_30940FD2180FD049_OFFSET UNITYSDK_OFFSET(0x17A38840)
#define CLASS_1_8169E1C66ABC1E44_METHOD_1_61F3B3EBCA3BDE1A_OFFSET UNITYSDK_OFFSET(0x17A38930)
#define CLASS_1_8169E1C66ABC1E44_METHOD_1_69A54399DF813FC5_OFFSET UNITYSDK_OFFSET(0x17A38530)
#define CLASS_1_8169E1C66ABC1E44_METHOD_1_8164AB5D3C0F15EF_OFFSET UNITYSDK_OFFSET(0x17A385B0)
#define CLASS_1_8169E1C66ABC1E44_METHOD_1_F783C37F0A91489F_OFFSET UNITYSDK_OFFSET(0x17A386B0)
#define CLASS_1_8169E1C66ABC1E44__CTOR_OFFSET UNITYSDK_OFFSET(0x17A38A20)

inline static constexpr unsigned int Class_1_8169E1C66ABC1E44_TypeDefinitionIndex = 60076;

class Class_1_8169E1C66ABC1E44 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8169E1C66ABC1E44__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_69A54399DF813FC5(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_8169E1C66ABC1E44_METHOD_1_69A54399DF813FC5_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_384* Method_1_8164AB5D3C0F15EF(::Class_0_16E4307DCC419505_384* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_65EF9EC87B818BF3* a3)
	{
		return ((::Class_0_16E4307DCC419505_384*(*)(::PVOID, ::Class_0_16E4307DCC419505_384*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_8169E1C66ABC1E44_METHOD_1_8164AB5D3C0F15EF_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_386* Method_1_F783C37F0A91489F(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::Class_0_16E4307DCC419505_386*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_8169E1C66ABC1E44_METHOD_1_F783C37F0A91489F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::EquipmentItemData* Method_1_30940FD2180FD049(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::RPG::Client::EquipmentItemData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_8169E1C66ABC1E44_METHOD_1_30940FD2180FD049_OFFSET))(this, a1, a2);
	}

	::RPG::Client::EquipmentItemData* Method_1_61F3B3EBCA3BDE1A(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::EquipmentItemData* a2, ::Class_1_65EF9EC87B818BF3* a3)
	{
		return ((::RPG::Client::EquipmentItemData*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::EquipmentItemData*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_8169E1C66ABC1E44_METHOD_1_61F3B3EBCA3BDE1A_OFFSET))(this, a1, a2, a3);
	}
};
