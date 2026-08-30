#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AE4CA5FB1615574B___c__DisplayClass47_0;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class FiveDimEffectItem; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_AE4CA5FB1615574B___C__DISPLAYCLASS47_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16285AC0)
#define CLASS_1_AE4CA5FB1615574B___C__DISPLAYCLASS47_1___FIREPLAYEREFFECTWITHGLOBALEFFECTNAME_B__0_OFFSET UNITYSDK_OFFSET(0x16286C70)

inline static constexpr unsigned int Class_1_AE4CA5FB1615574B___c__DisplayClass47_1_TypeDefinitionIndex = 76236;

class Class_1_AE4CA5FB1615574B___c__DisplayClass47_1 : public ::System::Object
{
public:
	::Class_1_AE4CA5FB1615574B___c__DisplayClass47_0* CS___8__locals1; // 0x10
	::RPG::GameCore::FiveDimEffectItem* effectItem; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B___C__DISPLAYCLASS47_1__CTOR_OFFSET))(this);
	}

	::System::Void __FirePlayerEffectWithGlobalEffectName_b__0(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B___C__DISPLAYCLASS47_1___FIREPLAYEREFFECTWITHGLOBALEFFECTNAME_B__0_OFFSET))(this, a1, a2);
	}
};
