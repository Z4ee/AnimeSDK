#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNodeBase.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND_INVOKE_OFFSET UNITYSDK_OFFSET(0x17E685E0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND_ONREGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x17E683B0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x17E68720)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameBound_TypeDefinitionIndex = 85087;

	class HackerGameBound : public ::FlowCanvas::Nodes::CallableFunctionNodeBase
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* _bound; // 0x38
		::System::Int32 maxY; // 0x40
		::System::Int32 minY; // 0x44
		::System::Int32 minX; // 0x48
		::System::Int32 maxX; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND__CTOR_OFFSET))(this);
		}

		::System::Void OnRegisterPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND_ONREGISTERPORTS_OFFSET))(this, node);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEBOUND_INVOKE_OFFSET))(this);
		}
	};
}
