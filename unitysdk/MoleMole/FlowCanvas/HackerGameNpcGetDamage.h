#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"
#include "unitysdk/MoleMole/FlowCanvas/HackerGameNpcDamageType.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class HackerGameBaseDamage; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETDAMAGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A37FA0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A38060)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcGetDamage_TypeDefinitionIndex = 50682;

	class HackerGameNpcGetDamage : public ::FlowCanvas::Nodes::PureFunctionNode_3<::MoleMole::HackerGameBaseDamage*, ::MoleMole::ChessEntity*, ::MoleMole::FlowCanvas::HackerGameNpcDamageType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETDAMAGE__CTOR_OFFSET))(this);
		}

		::MoleMole::HackerGameBaseDamage* Invoke(::MoleMole::ChessEntity* npcEntity, ::MoleMole::FlowCanvas::HackerGameNpcDamageType damageType)
		{
			return ((::MoleMole::HackerGameBaseDamage*(*)(::PVOID, ::MoleMole::ChessEntity*, ::MoleMole::FlowCanvas::HackerGameNpcDamageType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCGETDAMAGE_INVOKE_OFFSET))(this, npcEntity, damageType);
		}
	};
}
