#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvSystemResult.h"
#include "unitysdk/System/Object.h"

class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_D6EFBA9480DF920D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B8A940)
#define CLASS_1_D6EFBA9480DF920D_METHOD_1_17ED140344A778CC_OFFSET UNITYSDK_OFFSET(0x13B8A980)
#define CLASS_1_D6EFBA9480DF920D_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x13B8AA60)
#define CLASS_1_D6EFBA9480DF920D_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13B8AAC0)
#define CLASS_1_D6EFBA9480DF920D_METHOD_1_7003271FF3C0F5CC_OFFSET UNITYSDK_OFFSET(0x13B8AB70)
#define CLASS_1_D6EFBA9480DF920D_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13B8AA10)
#define CLASS_1_D6EFBA9480DF920D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13B8A9C0)
#define CLASS_1_D6EFBA9480DF920D__CTOR_OFFSET UNITYSDK_OFFSET(0x13B8AC20)

inline static constexpr unsigned int Class_1_D6EFBA9480DF920D_TypeDefinitionIndex = 48870;

class Class_1_D6EFBA9480DF920D : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::TransformComponent* Field_1_1; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_2; // 0x20
	::Class_2_A0580152EB393340* Field_1_3; // 0x28
	::RPG::GameCore::AdvSystemResult Field_1_4; // 0x30

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
