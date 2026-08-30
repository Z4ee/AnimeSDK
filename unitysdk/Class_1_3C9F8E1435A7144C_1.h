#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_419;
class Class_1_65EF9EC87B818BF3;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_3C9F8E1435A7144C_1_METHOD_1_0DA02645F51F0244_OFFSET UNITYSDK_OFFSET(0x152520C0)
#define CLASS_1_3C9F8E1435A7144C_1_METHOD_1_1AAD44583682E08B_OFFSET UNITYSDK_OFFSET(0x15252740)
#define CLASS_1_3C9F8E1435A7144C_1_METHOD_1_46369BE1A4560428_OFFSET UNITYSDK_OFFSET(0x152521D0)
#define CLASS_1_3C9F8E1435A7144C_1_METHOD_1_5AD5F03CA0118D30_OFFSET UNITYSDK_OFFSET(0x15252270)
#define CLASS_1_3C9F8E1435A7144C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x152527F0)

inline static constexpr unsigned int Class_1_3C9F8E1435A7144C_1_TypeDefinitionIndex = 62924;

class Class_1_3C9F8E1435A7144C_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9F8E1435A7144C_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_0DA02645F51F0244()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9F8E1435A7144C_1_METHOD_1_0DA02645F51F0244_OFFSET))(this);
	}

	::System::Boolean Method_1_46369BE1A4560428(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_3C9F8E1435A7144C_1_METHOD_1_46369BE1A4560428_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_419* Method_1_5AD5F03CA0118D30(::Class_0_16E4307DCC419505_419* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_65EF9EC87B818BF3* a3)
	{
		return ((::Class_0_16E4307DCC419505_419*(*)(::PVOID, ::Class_0_16E4307DCC419505_419*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_3C9F8E1435A7144C_1_METHOD_1_5AD5F03CA0118D30_OFFSET))(this, a1, a2, a3);
	}

	static ::System::UInt32 Method_1_1AAD44583682E08B(::System::UInt32 a1, ::RPG::GameCore::RelicType a2, ::RPG::GameCore::CombatPowerRelicRarityType a3)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + CLASS_1_3C9F8E1435A7144C_1_METHOD_1_1AAD44583682E08B_OFFSET))(a1, a2, a3);
	}
};
