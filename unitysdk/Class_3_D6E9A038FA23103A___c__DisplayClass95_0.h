#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS95_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9561420)
#define CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS95_0__FIREEFFECTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x956B490)

inline static constexpr unsigned int Class_3_D6E9A038FA23103A___c__DisplayClass95_0_TypeDefinitionIndex = 70446;

class Class_3_D6E9A038FA23103A___c__DisplayClass95_0 : public ::System::Object
{
public:
	::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* __9__0; // 0x10
	::System::Action* loadedCallback; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS95_0__CTOR_OFFSET))(this);
	}

	::System::Void _FireEffectList_b__0(::Entitas::IEntity* entity1, ::UnityEngine::GameObject* o)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__DISPLAYCLASS95_0__FIREEFFECTLIST_B__0_OFFSET))(this, entity1, o);
	}
};
