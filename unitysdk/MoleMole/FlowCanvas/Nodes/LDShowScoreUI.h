#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/BubbleType.h"
#include "unitysdk/MoleMole/FairyTextUpdateType.h"
#include "unitysdk/Struct_2_D83DC7376F4C0DA0.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETFINALTEXTWITHCACHE_OFFSET UNITYSDK_OFFSET(0x13A87B60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONCLOSEPARAM_OFFSET UNITYSDK_OFFSET(0x13A876B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONGRAPHSTOPEDPARAM_OFFSET UNITYSDK_OFFSET(0x13A87200)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONRESTARTPARAM_OFFSET UNITYSDK_OFFSET(0x13A878A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONSTARTPARAM_OFFSET UNITYSDK_OFFSET(0x13A873F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x13A86F00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x13A86C00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONRESTART_OFFSET UNITYSDK_OFFSET(0x13A87080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONSTART_OFFSET UNITYSDK_OFFSET(0x13A86D80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13A868B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__CTOR_OFFSET UNITYSDK_OFFSET(0x13A88380)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x13A884B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x13A88500)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__REGISTERPORTS_B__11_2_OFFSET UNITYSDK_OFFSET(0x13A88510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x13A88520)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowScoreUI_TypeDefinitionIndex = 59299;

	class LDShowScoreUI : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::Il2CppArray<::FlowCanvas::ValueInput_1<::System::String*>*>* paramInputs; // 0xA8
		::System::String* cachedKey; // 0xB0
		::System::Collections::Generic::List_1<::System::String*>* paramList; // 0xB8
		::System::Collections::Generic::List_1<::System::String*>* cachedParam; // 0xC0
		::FlowCanvas::ValueInput_1<::MoleMole::FairyTextUpdateType>* UpdateType; // 0xC8
		::FlowCanvas::FlowOutput* output; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Boolean>* ShowWhenMidText; // 0xD8
		::System::String* cachedFinalText; // 0xE0
		::FlowCanvas::ValueInput_1<::System::String*>* textMapKey; // 0xE8
		::FlowCanvas::ValueInput_1<::System::String*>* iconTextureKey; // 0xF0
		::FlowCanvas::ValueInput_1<::MoleMole::BubbleType>* bubbleType; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONSTART_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONCLOSE_OFFSET))(this);
		}

		::System::Void OnRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONRESTART_OFFSET))(this);
		}

		::System::Void GetOnGraphStopedParam(::Struct_2_D83DC7376F4C0DA0& arg)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D83DC7376F4C0DA0&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONGRAPHSTOPEDPARAM_OFFSET))(this, arg);
		}

		::System::Void GetOnStartParam(::Struct_2_D83DC7376F4C0DA0& arg)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D83DC7376F4C0DA0&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONSTARTPARAM_OFFSET))(this, arg);
		}

		::System::Void GetOnCloseParam(::Struct_2_D83DC7376F4C0DA0& arg)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D83DC7376F4C0DA0&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONCLOSEPARAM_OFFSET))(this, arg);
		}

		::System::Void GetOnRestartParam(::Struct_2_D83DC7376F4C0DA0& arg)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D83DC7376F4C0DA0&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONRESTARTPARAM_OFFSET))(this, arg);
		}

		::System::ValueTuple_2<::System::String*, ::MoleMole::FairyTextUpdateType> GetFinalTextWithCache()
		{
			return ((::System::ValueTuple_2<::System::String*, ::MoleMole::FairyTextUpdateType>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETFINALTEXTWITHCACHE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__REGISTERPORTS_B__11_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__11_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__REGISTERPORTS_B__11_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__11_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__REGISTERPORTS_B__11_2_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
