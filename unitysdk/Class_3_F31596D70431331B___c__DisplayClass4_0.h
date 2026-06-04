#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_3_F31596D70431331B___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1453E5B0)
#define CLASS_3_F31596D70431331B___C__DISPLAYCLASS4_0__ONPREFABCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x1453E5E0)

inline static constexpr unsigned int Class_3_F31596D70431331B___c__DisplayClass4_0_TypeDefinitionIndex = 46534;

class Class_3_F31596D70431331B___c__DisplayClass4_0 : public ::System::Object
{
public:
	::UnityEngine::GameObject* holder; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F31596D70431331B___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnPrefabChanged_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F31596D70431331B___C__DISPLAYCLASS4_0__ONPREFABCHANGED_B__0_OFFSET))(this);
	}
};
