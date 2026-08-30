#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_912CC478F2B21832___C__DISPLAYCLASS200_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16B396A0)
#define CLASS_3_912CC478F2B21832___C__DISPLAYCLASS200_0__FIREEFFECTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x16B45850)

inline static constexpr unsigned int Class_3_912CC478F2B21832___c__DisplayClass200_0_TypeDefinitionIndex = 76218;

class Class_3_912CC478F2B21832___c__DisplayClass200_0 : public ::System::Object
{
public:
	::System::Action* loadedCallback; // 0x10
	::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* __9__0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832___C__DISPLAYCLASS200_0__CTOR_OFFSET))(this);
	}

	::System::Void _FireEffectList_b__0(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_912CC478F2B21832___C__DISPLAYCLASS200_0__FIREEFFECTLIST_B__0_OFFSET))(this, a1, a2);
	}
};
