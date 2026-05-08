#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"
#include "unitysdk/MoleMole/StatusEffectType.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEENTITYGETEFFECTTYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10E027C0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEENTITYGETEFFECTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E02870)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameEntityGetEffectType_TypeDefinitionIndex = 71775;

	class HackerGameEntityGetEffectType : public ::FlowCanvas::Nodes::PureFunctionNode_2<::MoleMole::StatusEffectType, ::MoleMole::ChessEntity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEENTITYGETEFFECTTYPE__CTOR_OFFSET))(this);
		}

		::MoleMole::StatusEffectType Invoke(::MoleMole::ChessEntity* a)
		{
			return ((::MoleMole::StatusEffectType(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEENTITYGETEFFECTTYPE_INVOKE_OFFSET))(this, a);
		}
	};
}
