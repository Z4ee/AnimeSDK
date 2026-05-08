#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_SUMINT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x170CE690)
#define MOLEMOLE_FLOWCANVAS_SUMINT__CTOR_OFFSET UNITYSDK_OFFSET(0x170CE920)
#define MOLEMOLE_FLOWCANVAS_SUMINT__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x170CE960)
#define MOLEMOLE_FLOWCANVAS_SUMINT__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x170CE970)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int SumInt_TypeDefinitionIndex = 60077;

	class SumInt : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* selector; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Int32>* _sum; // 0xB0
		::Il2CppArray<::FlowCanvas::ValueInput_1<::System::Int32>*>* inputs; // 0xB8
		::System::Int32 _sumValue; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SUMINT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SUMINT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SUMINT__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SUMINT__REGISTERPORTS_B__4_1_OFFSET))(this, f);
		}
	};
}
