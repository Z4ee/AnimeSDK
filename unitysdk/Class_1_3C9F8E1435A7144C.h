#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_360;
class Class_1_61097837E1D530F4;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_3C9F8E1435A7144C_METHOD_1_0DA02645F51F0244_OFFSET UNITYSDK_OFFSET(0x134FB890)
#define CLASS_1_3C9F8E1435A7144C_METHOD_1_1AAD44583682E08B_OFFSET UNITYSDK_OFFSET(0x134FBF10)
#define CLASS_1_3C9F8E1435A7144C_METHOD_1_46369BE1A4560428_OFFSET UNITYSDK_OFFSET(0x134FB9A0)
#define CLASS_1_3C9F8E1435A7144C_METHOD_1_5AD5F03CA0118D30_OFFSET UNITYSDK_OFFSET(0x134FBA40)
#define CLASS_1_3C9F8E1435A7144C__CTOR_OFFSET UNITYSDK_OFFSET(0x134FBFC0)

inline static constexpr unsigned int Class_1_3C9F8E1435A7144C_TypeDefinitionIndex = 58807;

class Class_1_3C9F8E1435A7144C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9F8E1435A7144C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_0DA02645F51F0244()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9F8E1435A7144C_METHOD_1_0DA02645F51F0244_OFFSET))(this);
	}

	::System::Boolean Method_1_46369BE1A4560428(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_3C9F8E1435A7144C_METHOD_1_46369BE1A4560428_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_360* Method_1_5AD5F03CA0118D30(::Class_0_16E4307DCC419505_360* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_61097837E1D530F4* a3)
	{
		return ((::Class_0_16E4307DCC419505_360*(*)(::PVOID, ::Class_0_16E4307DCC419505_360*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_3C9F8E1435A7144C_METHOD_1_5AD5F03CA0118D30_OFFSET))(this, a1, a2, a3);
	}

	static ::System::UInt32 Method_1_1AAD44583682E08B(::System::UInt32 a1, ::RPG::GameCore::RelicType a2, ::RPG::GameCore::CombatPowerRelicRarityType a3)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + CLASS_1_3C9F8E1435A7144C_METHOD_1_1AAD44583682E08B_OFFSET))(a1, a2, a3);
	}
};
