#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

namespace MoleMole { class ChessEntityCollection; }
namespace MoleMole::FlowCanvas { class HackModify; }

#define MOLEMOLE_FLOWCANVAS_ADDHACKENTITYMODIFY_INVOKE_OFFSET UNITYSDK_OFFSET(0x19238ED0)
#define MOLEMOLE_FLOWCANVAS_ADDHACKENTITYMODIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x19238F60)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int AddHackEntityModify_TypeDefinitionIndex = 87754;

	class AddHackEntityModify : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::MoleMole::FlowCanvas::HackModify*, ::MoleMole::ChessEntityCollection*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_ADDHACKENTITYMODIFY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::HackModify* a, ::MoleMole::ChessEntityCollection* b)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::HackModify*, ::MoleMole::ChessEntityCollection*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_ADDHACKENTITYMODIFY_INVOKE_OFFSET))(this, a, b);
		}
	};
}
