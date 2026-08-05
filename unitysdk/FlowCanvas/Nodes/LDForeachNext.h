#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { class Port; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_LDFOREACHNEXT_ENUMERATORELEMENTS_OFFSET UNITYSDK_OFFSET(0x17F27D60)
#define FLOWCANVAS_NODES_LDFOREACHNEXT_GETNODEWILDDEFINITIONTYPE_OFFSET UNITYSDK_OFFSET(0x17F28070)
#define FLOWCANVAS_NODES_LDFOREACHNEXT_ONPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x17F280D0)
#define FLOWCANVAS_NODES_LDFOREACHNEXT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x17F27B50)
#define FLOWCANVAS_NODES_LDFOREACHNEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F282D0)
#define FLOWCANVAS_NODES_LDFOREACHNEXT__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x17F28310)
#define FLOWCANVAS_NODES_LDFOREACHNEXT__REGISTERPORTS_B__8_1_OFFSET UNITYSDK_OFFSET(0x17F28320)
#define FLOWCANVAS_NODES_LDFOREACHNEXT__REGISTERPORTS_B__8_2_OFFSET UNITYSDK_OFFSET(0x17F28330)
#define FLOWCANVAS_NODES_LDFOREACHNEXT__REGISTERPORTS_B__8_3_OFFSET UNITYSDK_OFFSET(0x17F285B0)
#define FLOWCANVAS_NODES_LDFOREACHNEXT__REGISTERPORTS_B__8_4_OFFSET UNITYSDK_OFFSET(0x17F285F0)
#define FLOWCANVAS_NODES_LDFOREACHNEXT__REGISTERPORTS_B__8_5_OFFSET UNITYSDK_OFFSET(0x17F285A0)
#define FLOWCANVAS_NODES_LDFOREACHNEXT___BASE_GETNODEWILDDEFINITIONTYPE_OFFSET UNITYSDK_OFFSET(0x17F28630)
#define FLOWCANVAS_NODES_LDFOREACHNEXT___BASE_ONPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x17F28690)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDForeachNext_TypeDefinitionIndex = 68687;

	class LDForeachNext : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Object* currentObject; // 0xA8
		::FlowCanvas::FlowOutput* fFinish; // 0xB0
		::System::Collections::IEnumerator* enumerator; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Collections::IEnumerable*>* enumerableInput; // 0xC0
		::FlowCanvas::FlowOutput* fCurrent; // 0xC8
		::System::Boolean suspend; // 0xD0
		::System::Boolean broken; // 0xD1
		::System::Int32 currentIndex; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFOREACHNEXT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFOREACHNEXT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void EnumeratorElements(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFOREACHNEXT_ENUMERATORELEMENTS_OFFSET))(this, f);
		}

		::System::Type* GetNodeWildDefinitionType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFOREACHNEXT_GETNODEWILDDEFINITIONTYPE_OFFSET))(this);
		}

		::System::Void OnPortConnected(::FlowCanvas::Port* port, ::FlowCanvas::Port* otherPort)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFOREACHNEXT_ONPORTCONNECTED_OFFSET))(this, port, otherPort);
		}

		::System::Object* _RegisterPorts_b__8_0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFOREACHNEXT__REGISTERPORTS_B__8_0_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__8_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFOREACHNEXT__REGISTERPORTS_B__8_1_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__8_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFOREACHNEXT__REGISTERPORTS_B__8_2_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__8_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFOREACHNEXT__REGISTERPORTS_B__8_5_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__8_3(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFOREACHNEXT__REGISTERPORTS_B__8_3_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__8_4(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFOREACHNEXT__REGISTERPORTS_B__8_4_OFFSET))(this, f);
		}

		::System::Type* __base_GetNodeWildDefinitionType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFOREACHNEXT___BASE_GETNODEWILDDEFINITIONTYPE_OFFSET))(this);
		}

		::System::Void __base_OnPortConnected(::FlowCanvas::Port* P0, ::FlowCanvas::Port* P1)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDFOREACHNEXT___BASE_ONPORTCONNECTED_OFFSET))(this, P0, P1);
		}
	};
}
