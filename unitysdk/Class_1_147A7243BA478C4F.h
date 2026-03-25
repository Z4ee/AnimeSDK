#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
class Class_1_06CDCC6A0A66BA0A;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_147A7243BA478C4F_METHOD_1_09D6C8EEF8BCCB85_OFFSET UNITYSDK_OFFSET(0xA1F1F80)
#define CLASS_1_147A7243BA478C4F_METHOD_1_0DA02645F51F0244_OFFSET UNITYSDK_OFFSET(0xA1F1810)
#define CLASS_1_147A7243BA478C4F_METHOD_1_46369BE1A4560428_OFFSET UNITYSDK_OFFSET(0xA1F1920)
#define CLASS_1_147A7243BA478C4F_METHOD_1_E7F1A9C8ADF0D0DD_OFFSET UNITYSDK_OFFSET(0xA1F19C0)
#define CLASS_1_147A7243BA478C4F__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F2060)

inline static constexpr unsigned int Class_1_147A7243BA478C4F_TypeDefinitionIndex = 51015;

class Class_1_147A7243BA478C4F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_147A7243BA478C4F__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_0DA02645F51F0244()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_147A7243BA478C4F_METHOD_1_0DA02645F51F0244_OFFSET))(this);
	}

	::System::Boolean Method_1_46369BE1A4560428(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_06CDCC6A0A66BA0A* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_147A7243BA478C4F_METHOD_1_46369BE1A4560428_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_341* Method_1_E7F1A9C8ADF0D0DD(::Class_0_16E4307DCC419505_341* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_06CDCC6A0A66BA0A* a3)
	{
		return ((::Class_0_16E4307DCC419505_341*(*)(::PVOID, ::Class_0_16E4307DCC419505_341*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_147A7243BA478C4F_METHOD_1_E7F1A9C8ADF0D0DD_OFFSET))(this, a1, a2, a3);
	}

	static ::System::UInt32 Method_1_09D6C8EEF8BCCB85(::System::UInt32 a1, ::RPG::GameCore::RelicType a2, ::RPG::GameCore::CombatPowerRelicRarityType a3)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + CLASS_1_147A7243BA478C4F_METHOD_1_09D6C8EEF8BCCB85_OFFSET))(a1, a2, a3);
	}
};
