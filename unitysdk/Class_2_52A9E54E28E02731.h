#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CEAB4C068D9D9DB.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CC76D1702CC17C09_5;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_52A9E54E28E02731_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xAF4CB30)
#define CLASS_2_52A9E54E28E02731_METHOD_2_4B325E2272A25B4C_OFFSET UNITYSDK_OFFSET(0xAF4C510)
#define CLASS_2_52A9E54E28E02731_METHOD_2_B35628CD172F32F4_OFFSET UNITYSDK_OFFSET(0xAF4C100)
#define CLASS_2_52A9E54E28E02731_METHOD_2_BBE3E1E8BB1B6701_OFFSET UNITYSDK_OFFSET(0xAF4CB40)
#define CLASS_2_52A9E54E28E02731_METHOD_2_C2C495C915C952BA_OFFSET UNITYSDK_OFFSET(0xAF4CBA0)
#define CLASS_2_52A9E54E28E02731__CTOR_OFFSET UNITYSDK_OFFSET(0xAF4C0C0)

inline static constexpr unsigned int Class_2_52A9E54E28E02731_TypeDefinitionIndex = 53271;

class Class_2_52A9E54E28E02731 : public ::Class_1_9CEAB4C068D9D9DB
{
public:
	::Class_1_CC76D1702CC17C09_5* Field_2_0; // 0x68
	::RPG::GameCore::AdventureHitConfig* Field_2_1; // 0x70
	::RPG::GameCore::GameEntity* Field_2_2; // 0x78
	::UnityEngine::Transform* Field_2_3; // 0x80
	::System::Boolean Field_2_4; // 0x88
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x8C
	::System::Single Field_2_6; // 0x90
	::System::Single Field_2_7; // 0x94
	::System::Single Field_2_8; // 0x98
	::UnityEngine::Vector3 Field_2_9; // 0x9C
	::System::Single Field_2_10; // 0xA8
	::System::Single Field_2_11; // 0xAC
	::System::Single Field_2_12; // 0xB0
	::System::Single Field_2_13; // 0xB4
	::UnityEngine::Vector3 Field_2_14; // 0xB8
	::System::Single Field_2_15; // 0xC4
	::System::Single Field_2_16; // 0xC8
	::System::Single Field_2_17; // 0xCC

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_52A9E54E28E02731__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B35628CD172F32F4(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_52A9E54E28E02731_METHOD_2_B35628CD172F32F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4B325E2272A25B4C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_52A9E54E28E02731_METHOD_2_4B325E2272A25B4C_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_52A9E54E28E02731_GET_FLAG_OFFSET))(this);
	}

	::System::Void Method_2_BBE3E1E8BB1B6701(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_52A9E54E28E02731_METHOD_2_BBE3E1E8BB1B6701_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C2C495C915C952BA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_52A9E54E28E02731_METHOD_2_C2C495C915C952BA_OFFSET))(this, a1);
	}
};
