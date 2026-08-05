#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }

#define CLASS_3_802D369924D6F6CB_CLASS_1_2D209C9C6887C5F6_METHOD_1_D92CC5AEA222AFEC_OFFSET UNITYSDK_OFFSET(0x1751AA80)
#define CLASS_3_802D369924D6F6CB_CLASS_1_2D209C9C6887C5F6_METHOD_1_EDD42FDC5A576BD5_OFFSET UNITYSDK_OFFSET(0x1751AB30)
#define CLASS_3_802D369924D6F6CB_CLASS_1_2D209C9C6887C5F6__CTOR_OFFSET UNITYSDK_OFFSET(0x1751AA70)

inline static constexpr unsigned int Class_3_802D369924D6F6CB_Class_1_2D209C9C6887C5F6_TypeDefinitionIndex = 53673;

class Class_3_802D369924D6F6CB_Class_1_2D209C9C6887C5F6 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_802D369924D6F6CB_CLASS_1_2D209C9C6887C5F6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D92CC5AEA222AFEC(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_802D369924D6F6CB_CLASS_1_2D209C9C6887C5F6_METHOD_1_D92CC5AEA222AFEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDD42FDC5A576BD5(::MoleMole::Battle::Entity* a1, ::UnityEngine::Collider* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_802D369924D6F6CB_CLASS_1_2D209C9C6887C5F6_METHOD_1_EDD42FDC5A576BD5_OFFSET))(this, a1, a2, a3);
	}
};
