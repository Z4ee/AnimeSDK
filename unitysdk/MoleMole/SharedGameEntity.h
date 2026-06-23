#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/SharedVariable_1.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_SHAREDGAMEENTITY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18CFEA30)
#define MOLEMOLE_SHAREDGAMEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFEB00)

namespace MoleMole
{
	inline static constexpr unsigned int SharedGameEntity_TypeDefinitionIndex = 41589;

	class SharedGameEntity : public ::BehaviorDesigner::Runtime::SharedVariable_1<::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHAREDGAMEENTITY__CTOR_OFFSET))(this);
		}

		static ::MoleMole::SharedGameEntity* op_Implicit(::MoleMole::Battle::Entity* value)
		{
			return ((::MoleMole::SharedGameEntity*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHAREDGAMEENTITY_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
