#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_3_47171E2F81FEA33B___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x91170C0)
#define CLASS_3_47171E2F81FEA33B___C__DISPLAYCLASS4_0__ONPREFABCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x91170F0)

inline static constexpr unsigned int Class_3_47171E2F81FEA33B___c__DisplayClass4_0_TypeDefinitionIndex = 45951;

class Class_3_47171E2F81FEA33B___c__DisplayClass4_0 : public ::System::Object
{
public:
	::UnityEngine::GameObject* holder; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47171E2F81FEA33B___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnPrefabChanged_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47171E2F81FEA33B___C__DISPLAYCLASS4_0__ONPREFABCHANGED_B__0_OFFSET))(this);
	}
};
