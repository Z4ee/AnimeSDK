#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

namespace MoleMole { class LevelSectionGroupData; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_DOUBLEELITESECTIONDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1780DFE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DOUBLEELITESECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1780E220)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_DoubleEliteSectionData_TypeDefinitionIndex = 66767;

	class LD_DoubleEliteSectionData : public ::FlowCanvas::Nodes::PureFunctionNode_1<::MoleMole::LevelSectionGroupData*>
	{
	public:
		// static const ::System::String* DefaultSectionNam; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DOUBLEELITESECTIONDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::LevelSectionGroupData* Invoke()
		{
			return ((::MoleMole::LevelSectionGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DOUBLEELITESECTIONDATA_INVOKE_OFFSET))(this);
		}
	};
}
