#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS144_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17621770)
#define CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS144_0__FIREEFFECTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1762C020)

inline static constexpr unsigned int Class_3_001D9EA49F6215B6___c__DisplayClass144_0_TypeDefinitionIndex = 72775;

class Class_3_001D9EA49F6215B6___c__DisplayClass144_0 : public ::System::Object
{
public:
	::System::Action* loadedCallback; // 0x10
	::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* __9__0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS144_0__CTOR_OFFSET))(this);
	}

	::System::Void _FireEffectList_b__0(::Entitas::IEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_001D9EA49F6215B6___C__DISPLAYCLASS144_0__FIREEFFECTLIST_B__0_OFFSET))(this, a1, a2);
	}
};
