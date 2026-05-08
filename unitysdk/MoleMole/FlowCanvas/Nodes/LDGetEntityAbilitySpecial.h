#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_5.h"
#include "unitysdk/MoleMole/Config/AbilitySpecialParamType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYABILITYSPECIAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1540B0D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYABILITYSPECIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1540B3D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetEntityAbilitySpecial_TypeDefinitionIndex = 54224;

	class LDGetEntityAbilitySpecial : public ::FlowCanvas::Nodes::CallableFunctionNode_5<::System::Object*, ::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::MoleMole::Config::AbilitySpecialParamType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYABILITYSPECIAL__CTOR_OFFSET))(this);
		}

		::System::Object* Invoke(::MoleMole::Battle::Entity* entity, ::System::String* abilityName, ::System::String* abilitySpecialName, ::MoleMole::Config::AbilitySpecialParamType abilitySpecialParamType)
		{
			return ((::System::Object*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::MoleMole::Config::AbilitySpecialParamType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETENTITYABILITYSPECIAL_INVOKE_OFFSET))(this, entity, abilityName, abilitySpecialName, abilitySpecialParamType);
		}
	};
}
