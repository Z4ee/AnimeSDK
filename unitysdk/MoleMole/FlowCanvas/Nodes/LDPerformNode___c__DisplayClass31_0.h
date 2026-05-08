#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class Class_1_D65512A83CF70AB7;
namespace MoleMole::FlowCanvas::Nodes { class LDPerformNode; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA7310)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__0_OFFSET UNITYSDK_OFFSET(0x10BA7320)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__1_OFFSET UNITYSDK_OFFSET(0x10BA75C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__2_OFFSET UNITYSDK_OFFSET(0x10BA7690)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__3_OFFSET UNITYSDK_OFFSET(0x10BA75A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__4_OFFSET UNITYSDK_OFFSET(0x10BA7760)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPerformNode___c__DisplayClass31_0_TypeDefinitionIndex = 54582;

	class LDPerformNode___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDPerformNode* __4__this; // 0x10
		::System::Action_1<::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF>* __9__3; // 0x18
		::FlowCanvas::Flow f; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _Old_Play_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__0_OFFSET))(this);
		}

		::System::Void _Old_Play_b__3(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__3_OFFSET))(this, reason);
		}

		::System::Void _Old_Play_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__1_OFFSET))(this);
		}

		::System::Void _Old_Play_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__2_OFFSET))(this);
		}

		::System::Void _Old_Play_b__4(::Class_1_D65512A83CF70AB7* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__4_OFFSET))(this, chatSyncData);
		}
	};
}
