#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace MoleMole { class LevelSectionGroupData; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDISSECTIONNAMEVALID_INVOKE_OFFSET UNITYSDK_OFFSET(0x1160C9B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDISSECTIONNAMEVALID__CTOR_OFFSET UNITYSDK_OFFSET(0x1160CA80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDIsSectionNameValid_TypeDefinitionIndex = 71639;

	class LDIsSectionNameValid : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::MoleMole::LevelSectionGroupData*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISSECTIONNAMEVALID__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::LevelSectionGroupData* levelProcessData, ::System::String* sectionName)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::LevelSectionGroupData*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDISSECTIONNAMEVALID_INVOKE_OFFSET))(this, levelProcessData, sectionName);
		}
	};
}
