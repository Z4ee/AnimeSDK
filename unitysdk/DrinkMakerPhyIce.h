#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class DrinkMakerDrinkState; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Rigidbody; }

#define DRINKMAKERPHYICE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xC722940)
#define DRINKMAKERPHYICE_METHOD_5_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xC721DD0)
#define DRINKMAKERPHYICE_METHOD_5_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xC7227E0)
#define DRINKMAKERPHYICE_METHOD_5_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xC721FB0)
#define DRINKMAKERPHYICE_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xC721CE0)
#define DRINKMAKERPHYICE_METHOD_5_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xC722480)
#define DRINKMAKERPHYICE_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xC722A50)
#define DRINKMAKERPHYICE_START_OFFSET UNITYSDK_OFFSET(0xC721B50)
#define DRINKMAKERPHYICE__CTOR_OFFSET UNITYSDK_OFFSET(0xC7231B0)

inline static constexpr unsigned int DrinkMakerPhyIce_TypeDefinitionIndex = 43980;

class DrinkMakerPhyIce : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Rigidbody* Field_5_0; // 0x18
	::UnityEngine::BoxCollider* Field_5_1; // 0x20
	::System::Single Field_5_2; // 0x28
	::System::Single Field_5_3; // 0x2C
	::UnityEngine::Vector3 Field_5_4; // 0x30
	::UnityEngine::Vector3 Field_5_5; // 0x3C
	::UnityEngine::Vector3 Field_5_6; // 0x48
	::UnityEngine::Vector3 Field_5_7; // 0x54
	::UnityEngine::Vector3 Field_5_8; // 0x60
	::RPG::GameCore::DrinkMakerDrinkState* Drink; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_START_OFFSET))(this);
	}

	::System::Void Method_5_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_5_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_METHOD_5_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_5_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_METHOD_5_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_5_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_METHOD_5_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_5_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_METHOD_5_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}
};
