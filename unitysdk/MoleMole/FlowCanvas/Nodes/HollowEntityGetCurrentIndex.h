#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCURRENTINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x118B1300)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCURRENTINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x118B15A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityGetCurrentIndex_TypeDefinitionIndex = 50626;

	class HollowEntityGetCurrentIndex : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_2<::System::Int32, ::System::UInt32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCURRENTINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::UInt32 entityRuntimeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCURRENTINDEX_INVOKE_OFFSET))(this, entityRuntimeID);
		}
	};
}
