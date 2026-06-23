#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

namespace MoleMole { class AbyssS2_DefaultRng; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2CREATEAREARNG_INVOKE_OFFSET UNITYSDK_OFFSET(0x16CA8C90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2CREATEAREARNG__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA8EC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2CreateAreaRNG_TypeDefinitionIndex = 44937;

	class LD_AbyssS2CreateAreaRNG : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::MoleMole::AbyssS2_DefaultRng*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2CREATEAREARNG__CTOR_OFFSET))(this);
		}

		::MoleMole::AbyssS2_DefaultRng* Invoke()
		{
			return ((::MoleMole::AbyssS2_DefaultRng*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2CREATEAREARNG_INVOKE_OFFSET))(this);
		}
	};
}
