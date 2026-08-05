#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/PatternMonsterCreate.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_ABYSSS2PATTERNMONSTERCREATE__CTOR_OFFSET UNITYSDK_OFFSET(0x149D5A80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AbyssS2PatternMonsterCreate_TypeDefinitionIndex = 40457;

	class AbyssS2PatternMonsterCreate : public ::MoleMole::FlowCanvas::Nodes::PatternMonsterCreate
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* AbilityList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ABYSSS2PATTERNMONSTERCREATE__CTOR_OFFSET))(this);
		}
	};
}
