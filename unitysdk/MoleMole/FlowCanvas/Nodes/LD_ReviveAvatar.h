#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_REVIVEAVATAR_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D482E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_REVIVEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x10D48390)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ReviveAvatar_TypeDefinitionIndex = 49397;

	class LD_ReviveAvatar : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REVIVEAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* TargetAvatarIndices, ::System::Single HPRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REVIVEAVATAR_INVOKE_OFFSET))(this, TargetAvatarIndices, HPRatio);
		}
	};
}
