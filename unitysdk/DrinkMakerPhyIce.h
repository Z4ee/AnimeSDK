#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class DrinkMakerDrinkState; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Rigidbody; }

#define DRINKMAKERPHYICE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12667EC0)
#define DRINKMAKERPHYICE_METHOD_5_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x12667380)
#define DRINKMAKERPHYICE_METHOD_5_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x12667D60)
#define DRINKMAKERPHYICE_METHOD_5_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x12667560)
#define DRINKMAKERPHYICE_METHOD_5_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x12667A30)
#define DRINKMAKERPHYICE_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x12667290)
#define DRINKMAKERPHYICE_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x12667FD0)
#define DRINKMAKERPHYICE_START_OFFSET UNITYSDK_OFFSET(0x12667100)
#define DRINKMAKERPHYICE__CTOR_OFFSET UNITYSDK_OFFSET(0x12668750)

inline static constexpr unsigned int DrinkMakerPhyIce_TypeDefinitionIndex = 47188;

class DrinkMakerPhyIce : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Rigidbody* DEHJMGGDCBK; // 0x18
	::UnityEngine::BoxCollider* CDFFODPBKCC; // 0x20
	::System::Single IKDOFKHFNNH; // 0x28
	::System::Single JAMFIIAGONP; // 0x2C
	::UnityEngine::Vector3 EJDHAEPMICP; // 0x30
	::UnityEngine::Vector3 JMNGMGDGKEH; // 0x3C
	::UnityEngine::Vector3 IPLPDEKFMOJ; // 0x48
	::UnityEngine::Vector3 BLOFEIMBLBG; // 0x54
	::UnityEngine::Vector3 KJGNPEDFOLD; // 0x60
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

	::System::Void Method_5_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_METHOD_5_1ABF1CBED7A4AF0A_OFFSET))(this);
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
