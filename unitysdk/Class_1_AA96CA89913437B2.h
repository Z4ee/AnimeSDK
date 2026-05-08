#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_AA96CA89913437B2_METHOD_1_8CE42FB28CD066CA_OFFSET UNITYSDK_OFFSET(0x1461DBD0)
#define CLASS_1_AA96CA89913437B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1461DBC0)

inline static constexpr unsigned int Class_1_AA96CA89913437B2_TypeDefinitionIndex = 38465;

class Class_1_AA96CA89913437B2 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_AA96CA89913437B2__CTOR_OFFSET))(this, a1);
	}

	::MoleMole::UIBaseController* Method_1_8CE42FB28CD066CA(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_AA96CA89913437B2_METHOD_1_8CE42FB28CD066CA_OFFSET))(this, a1, a2);
	}
};
