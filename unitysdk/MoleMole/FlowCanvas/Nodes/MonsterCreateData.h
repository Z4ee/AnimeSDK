#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataAnimatorParam.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERCREATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16E554D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterCreateData_TypeDefinitionIndex = 62002;

	class MonsterCreateData : public ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase
	{
	public:
		::System::Single CreatePossibility; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* InitAnimatorParams; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERCREATEDATA__CTOR_OFFSET))(this);
		}
	};
}
