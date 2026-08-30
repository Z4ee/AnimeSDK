#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_AED4F7C8890C9559_METHOD_1_346403FC4419FC9F_1_OFFSET UNITYSDK_OFFSET(0x1A44FB50)
#define CLASS_1_AED4F7C8890C9559_METHOD_1_346403FC4419FC9F_OFFSET UNITYSDK_OFFSET(0x1A44FAF0)
#define CLASS_1_AED4F7C8890C9559_METHOD_1_9D2D8547F62E9E67_OFFSET UNITYSDK_OFFSET(0x1A44FFD0)
#define CLASS_1_AED4F7C8890C9559_METHOD_1_ACFF7D0E8D17C528_1_OFFSET UNITYSDK_OFFSET(0x1A44FDC0)
#define CLASS_1_AED4F7C8890C9559_METHOD_1_ACFF7D0E8D17C528_OFFSET UNITYSDK_OFFSET(0x1A44FBB0)
#define CLASS_1_AED4F7C8890C9559__CTOR_OFFSET UNITYSDK_OFFSET(0x1A450040)

inline static constexpr unsigned int Class_1_AED4F7C8890C9559_TypeDefinitionIndex = 59173;

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

	static ::RPG::GameCore::AetherSpiritType Method_1_ACFF7D0E8D17C528(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::AetherSpiritType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AED4F7C8890C9559_METHOD_1_ACFF7D0E8D17C528_OFFSET))(a1);
	}

	static ::RPG::GameCore::AetherSpiritType Method_1_ACFF7D0E8D17C528_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::AetherSpiritType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AED4F7C8890C9559_METHOD_1_ACFF7D0E8D17C528_1_OFFSET))(a1);
	}

	static ::RPG::GameCore::AetherSpiritType Method_1_9D2D8547F62E9E67(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::AetherSpiritType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AED4F7C8890C9559_METHOD_1_9D2D8547F62E9E67_OFFSET))(a1);
	}
};
