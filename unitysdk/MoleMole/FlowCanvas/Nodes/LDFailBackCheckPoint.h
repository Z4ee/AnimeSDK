#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDCheckPoint.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT_ISFAILBACK_OFFSET UNITYSDK_OFFSET(0x1603E220)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT_PARSEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x1603E260)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1603E3E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT___BASE_ISFAILBACK_OFFSET UNITYSDK_OFFSET(0x1603E460)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT___BASE_PARSEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x1603E4F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDFailBackCheckPoint_TypeDefinitionIndex = 61728;

	class LDFailBackCheckPoint : public ::MoleMole::FlowCanvas::Nodes::LDCheckPoint
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsFailBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT_ISFAILBACK_OFFSET))(this);
		}

		::System::Boolean ParserExpression()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT_PARSEREXPRESSION_OFFSET))(this);
		}

		::System::Boolean __base_IsFailBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT___BASE_ISFAILBACK_OFFSET))(this);
		}

		::System::Boolean __base_ParserExpression()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFAILBACKCHECKPOINT___BASE_PARSEREXPRESSION_OFFSET))(this);
		}
	};
}
