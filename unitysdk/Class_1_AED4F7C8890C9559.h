#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_AED4F7C8890C9559_METHOD_1_346403FC4419FC9F_1_OFFSET UNITYSDK_OFFSET(0xA98BB80)
#define CLASS_1_AED4F7C8890C9559_METHOD_1_346403FC4419FC9F_OFFSET UNITYSDK_OFFSET(0xA98BB20)
#define CLASS_1_AED4F7C8890C9559_METHOD_1_B504D86BB8C676B8_1_OFFSET UNITYSDK_OFFSET(0xA98BD30)
#define CLASS_1_AED4F7C8890C9559_METHOD_1_B504D86BB8C676B8_OFFSET UNITYSDK_OFFSET(0xA98BBE0)
#define CLASS_1_AED4F7C8890C9559_METHOD_1_C7A3DF8C7FFE6E5E_OFFSET UNITYSDK_OFFSET(0xA98BE80)
#define CLASS_1_AED4F7C8890C9559__CTOR_OFFSET UNITYSDK_OFFSET(0xA98BEF0)

inline static constexpr unsigned int Class_1_AED4F7C8890C9559_TypeDefinitionIndex = 55156;

class Class_1_AED4F7C8890C9559 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED4F7C8890C9559__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_346403FC4419FC9F(::RPG::GameCore::AetherSpiritType a1, ::RPG::GameCore::AetherSpiritType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AetherSpiritType, ::RPG::GameCore::AetherSpiritType))((::PBYTE)hIl2Cpp + CLASS_1_AED4F7C8890C9559_METHOD_1_346403FC4419FC9F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_346403FC4419FC9F_1(::RPG::GameCore::AetherSpiritType a1, ::RPG::GameCore::AetherSpiritType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AetherSpiritType, ::RPG::GameCore::AetherSpiritType))((::PBYTE)hIl2Cpp + CLASS_1_AED4F7C8890C9559_METHOD_1_346403FC4419FC9F_1_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::AetherSpiritType Method_1_B504D86BB8C676B8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::AetherSpiritType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AED4F7C8890C9559_METHOD_1_B504D86BB8C676B8_OFFSET))(a1);
	}

	static ::RPG::GameCore::AetherSpiritType Method_1_B504D86BB8C676B8_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::AetherSpiritType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AED4F7C8890C9559_METHOD_1_B504D86BB8C676B8_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::AetherSpiritType Method_1_C7A3DF8C7FFE6E5E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::AetherSpiritType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AED4F7C8890C9559_METHOD_1_C7A3DF8C7FFE6E5E_OFFSET))(a1);
	}
};
