#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvSystemResult.h"
#include "unitysdk/System/Object.h"

class Class_2_ED5B635C4D775055;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_D6EFBA9480DF920D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D1F1A0)
#define CLASS_1_D6EFBA9480DF920D_METHOD_1_17ED140344A778CC_OFFSET UNITYSDK_OFFSET(0x15D1F1E0)
#define CLASS_1_D6EFBA9480DF920D_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15D1F2C0)
#define CLASS_1_D6EFBA9480DF920D_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15D1F320)
#define CLASS_1_D6EFBA9480DF920D_METHOD_1_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0x15D1F3D0)
#define CLASS_1_D6EFBA9480DF920D_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15D1F270)
#define CLASS_1_D6EFBA9480DF920D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15D1F220)
#define CLASS_1_D6EFBA9480DF920D__CTOR_OFFSET UNITYSDK_OFFSET(0x15D1F480)

inline static constexpr unsigned int Class_1_D6EFBA9480DF920D_TypeDefinitionIndex = 52261;

class Class_1_D6EFBA9480DF920D : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x10
	::Class_2_ED5B635C4D775055* PMLJACBLHCI; // 0x18
	::RPG::GameCore::AdventureCharacterController* GPACEDIFLNG; // 0x20
	::RPG::GameCore::TransformComponent* BFIGIFDJOIE; // 0x28
	::RPG::GameCore::AdvSystemResult GNOEGILFEMD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EFBA9480DF920D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EFBA9480DF920D_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AdvSystemResult Method_1_17ED140344A778CC()
	{
		return ((::RPG::GameCore::AdvSystemResult(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EFBA9480DF920D_METHOD_1_17ED140344A778CC_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EFBA9480DF920D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EFBA9480DF920D_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D6EFBA9480DF920D_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EFBA9480DF920D_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_7003271FF3C0F5CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D6EFBA9480DF920D_METHOD_1_7003271FF3C0F5CC_OFFSET))(this, a1);
	}
};
