#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTBGMSTATE_STATEGROUPWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1684F520)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetCurrentBGMState_StateGroupWrapper_TypeDefinitionIndex = 81599;

	class LD_GetCurrentBGMState_StateGroupWrapper : public ::System::Object
	{
	public:
		::System::String* GroupName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETCURRENTBGMSTATE_STATEGROUPWRAPPER__CTOR_OFFSET))(this);
		}
	};
}
