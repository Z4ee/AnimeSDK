#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Animator; }

#define CLASS_1_4D3FA2DF8EFA3BF8__CTOR_OFFSET UNITYSDK_OFFSET(0x14D78CF0)

inline static constexpr unsigned int Class_1_4D3FA2DF8EFA3BF8_TypeDefinitionIndex = 80419;

class Class_1_4D3FA2DF8EFA3BF8 : public ::System::Object
{
public:
	::UnityEngine::Animator* Field_1_7; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::Int16 Field_1_5; // 0x1C
	::System::Int32 Field_1_6; // 0x20
	::System::Single Field_1_4; // 0x24

	::System::Void _ctor(::UnityEngine::Animator* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_4D3FA2DF8EFA3BF8__CTOR_OFFSET))(this, a1, a2);
	}
};
