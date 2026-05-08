#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUPV2_STATEGROUPKEYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x170CA7F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetInLevelStateGroupV2_StateGroupKeyValue_TypeDefinitionIndex = 47651;

	class LDSetInLevelStateGroupV2_StateGroupKeyValue : public ::System::Object
	{
	public:
		::System::String* StateGroup; // 0x10
		::System::String* StateValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUPV2_STATEGROUPKEYVALUE__CTOR_OFFSET))(this);
		}
	};
}
