#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_2.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_HACKERSUMVIRUS_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DAA1D0)
#define MOLEMOLE_FLOWCANVAS_HACKERSUMVIRUS__CTOR_OFFSET UNITYSDK_OFFSET(0x19DAA290)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerSumVirus_TypeDefinitionIndex = 70580;

	class HackerSumVirus : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_2<::System::Int32, ::MoleMole::ChessEntity*>
	{
	public:
		::System::Int32 _count; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERSUMVIRUS__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::ChessEntity* a)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERSUMVIRUS_INVOKE_OFFSET))(this, a);
		}
	};
}
