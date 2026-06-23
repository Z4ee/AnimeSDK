#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class LDReadBlockConfig; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B24B10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x18B24B60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x18B24BA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x18B24BD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__3_OFFSET UNITYSDK_OFFSET(0x18B24C00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__4_OFFSET UNITYSDK_OFFSET(0x18B24C40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__5_OFFSET UNITYSDK_OFFSET(0x18B24C70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__6_OFFSET UNITYSDK_OFFSET(0x18B24CA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__7_OFFSET UNITYSDK_OFFSET(0x18B24CD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__8_OFFSET UNITYSDK_OFFSET(0x18B24D10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReadBlockConfig___c__DisplayClass1_0_TypeDefinitionIndex = 41968;

	class LDReadBlockConfig___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* p1; // 0x10
		::FlowCanvas::FlowOutput* o; // 0x18
		::MoleMole::FlowCanvas::Nodes::LDReadBlockConfig* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__0_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__1_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__2_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__3_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__4_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__5_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__6_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> _RegisterPorts_b__7()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__7_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__8(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADBLOCKCONFIG___C__DISPLAYCLASS1_0__REGISTERPORTS_B__8_OFFSET))(this, f);
		}
	};
}
