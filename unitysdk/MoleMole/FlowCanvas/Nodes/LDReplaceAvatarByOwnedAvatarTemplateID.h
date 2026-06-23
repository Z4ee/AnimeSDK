#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYOWNEDAVATARTEMPLATEID_PROCESS_OFFSET UNITYSDK_OFFSET(0x12BB6F60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYOWNEDAVATARTEMPLATEID_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BB6DF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYOWNEDAVATARTEMPLATEID__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB7690)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYOWNEDAVATARTEMPLATEID__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x12BB76D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReplaceAvatarByOwnedAvatarTemplateID_TypeDefinitionIndex = 81209;

	class LDReplaceAvatarByOwnedAvatarTemplateID : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsMainCityPrefab; // 0xA8
		::FlowCanvas::FlowOutput* flowOut; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* targetAvatarTemplateID; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsHideHudBG; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Int32>* ReplaceAvatarTemplateId; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* IsKeepState; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYOWNEDAVATARTEMPLATEID__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYOWNEDAVATARTEMPLATEID_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYOWNEDAVATARTEMPLATEID_PROCESS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREPLACEAVATARBYOWNEDAVATARTEMPLATEID__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}
	};
}
