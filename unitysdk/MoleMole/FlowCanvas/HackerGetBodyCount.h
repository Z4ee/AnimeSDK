#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_2.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_HACKERGETBODYCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B5292D0)
#define MOLEMOLE_FLOWCANVAS_HACKERGETBODYCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B529380)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGetBodyCount_TypeDefinitionIndex = 76929;

	class HackerGetBodyCount : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_2<::System::Int32, ::MoleMole::ChessEntity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGETBODYCOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::ChessEntity* a)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGETBODYCOUNT_INVOKE_OFFSET))(this, a);
		}
	};
}
