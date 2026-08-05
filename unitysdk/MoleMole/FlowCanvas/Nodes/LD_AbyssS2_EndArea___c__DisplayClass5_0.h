#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_87492AF8E794E45E_58;
namespace MoleMole { class UIInLevelMainPageController; }
namespace MoleMole::FlowCanvas::Nodes { class LD_AbyssS2_EndArea; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B149B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS5_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x19B149C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_EndArea___c__DisplayClass5_0_TypeDefinitionIndex = 87241;

	class LD_AbyssS2_EndArea___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelMainPageController* main; // 0x10
		::MoleMole::FlowCanvas::Nodes::LD_AbyssS2_EndArea* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1(::System::Boolean isOk, ::Class_3_87492AF8E794E45E_58* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_87492AF8E794E45E_58*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ENDAREA___C__DISPLAYCLASS5_0__REGISTERPORTS_B__1_OFFSET))(this, isOk, rsp);
		}
	};
}
