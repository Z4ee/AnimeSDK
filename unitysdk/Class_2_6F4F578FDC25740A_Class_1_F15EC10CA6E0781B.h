#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_6F4F578FDC25740A_CLASS_1_F15EC10CA6E0781B_METHOD_1_D896F3BEF6536882_OFFSET UNITYSDK_OFFSET(0x135B49C0)
#define CLASS_2_6F4F578FDC25740A_CLASS_1_F15EC10CA6E0781B__CTOR_OFFSET UNITYSDK_OFFSET(0x135B49B0)

inline static constexpr unsigned int Class_2_6F4F578FDC25740A_Class_1_F15EC10CA6E0781B_TypeDefinitionIndex = 64553;

class Class_2_6F4F578FDC25740A_Class_1_F15EC10CA6E0781B : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F4F578FDC25740A_CLASS_1_F15EC10CA6E0781B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D896F3BEF6536882(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_6F4F578FDC25740A_CLASS_1_F15EC10CA6E0781B_METHOD_1_D896F3BEF6536882_OFFSET))(this, a1);
	}
};
