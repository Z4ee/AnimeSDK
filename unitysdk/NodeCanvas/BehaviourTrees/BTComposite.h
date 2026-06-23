#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTNode.h"
#include "unitysdk/ParadoxNotion/Alignment2x2.h"

namespace System { class String; }

#define NODECANVAS_BEHAVIOURTREES_BTCOMPOSITE_GET_COMMENTSALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1D803FA0)
#define NODECANVAS_BEHAVIOURTREES_BTCOMPOSITE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1D803F90)
#define NODECANVAS_BEHAVIOURTREES_BTCOMPOSITE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D803E50)
#define NODECANVAS_BEHAVIOURTREES_BTCOMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D803FB0)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int BTComposite_TypeDefinitionIndex = 30838;

	class BTComposite : public ::NodeCanvas::BehaviourTrees::BTNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTCOMPOSITE__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTCOMPOSITE_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTCOMPOSITE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::ParadoxNotion::Alignment2x2 get_commentsAlignment()
		{
			return ((::ParadoxNotion::Alignment2x2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTCOMPOSITE_GET_COMMENTSALIGNMENT_OFFSET))(this);
		}
	};
}
