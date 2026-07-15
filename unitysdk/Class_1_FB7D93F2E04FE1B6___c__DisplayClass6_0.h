#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FB7D93F2E04FE1B6;
class Class_2_2661F5CE5402F421;
namespace UnityEngine { class GameObject; }

#define CLASS_1_FB7D93F2E04FE1B6___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x146D01F0)
#define CLASS_1_FB7D93F2E04FE1B6___C__DISPLAYCLASS6_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x146D85B0)

inline static constexpr unsigned int Class_1_FB7D93F2E04FE1B6___c__DisplayClass6_0_TypeDefinitionIndex = 72872;

class Class_1_FB7D93F2E04FE1B6___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_2_2661F5CE5402F421* item; // 0x10
	::Class_1_FB7D93F2E04FE1B6* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__0(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_FB7D93F2E04FE1B6___C__DISPLAYCLASS6_0__EXECUTE_B__0_OFFSET))(this, a1);
	}
};
