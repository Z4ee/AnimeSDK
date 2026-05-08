#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode_1.h"

namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16B79DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B79E60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_B__2_0_OFFSET UNITYSDK_OFFSET(0x16B79E80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_B__2_1_OFFSET UNITYSDK_OFFSET(0x16B79E90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCloseLoadingBuddyNode_TypeDefinitionIndex = 71567;

	class LDCloseLoadingBuddyNode : public ::FlowCanvas::Nodes::LatentActionNode_1<::System::Single>
	{
	public:
		::System::Boolean _fadeDone; // 0x60
		::System::Boolean instant; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Invoke(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE_INVOKE_OFFSET))(this, time);
		}

		::System::Void _Invoke_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_B__2_0_OFFSET))(this);
		}

		::System::Void _Invoke_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCLOSELOADINGBUDDYNODE__INVOKE_B__2_1_OFFSET))(this);
		}
	};
}
