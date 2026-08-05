#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class Class_1_5CFE684023F165BE;
class Class_2_CEC585D0736F3660;
namespace MoleMole::FlowCanvas::Nodes { class LDPerformNode; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A0F20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__0_OFFSET UNITYSDK_OFFSET(0x1B1A0F30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__1_OFFSET UNITYSDK_OFFSET(0x1B1A11E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__2_OFFSET UNITYSDK_OFFSET(0x1B1A12B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__3_OFFSET UNITYSDK_OFFSET(0x1B1A1380)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__4_OFFSET UNITYSDK_OFFSET(0x1B1A11C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__5_OFFSET UNITYSDK_OFFSET(0x1B1A13B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPerformNode___c__DisplayClass31_0_TypeDefinitionIndex = 91017;

	class LDPerformNode___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Flow f; // 0x10
		::System::Action_1<::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF>* __9__4; // 0x38
		::MoleMole::FlowCanvas::Nodes::LDPerformNode* __4__this; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _Old_Play_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__0_OFFSET))(this);
		}

		::System::Void _Old_Play_b__4(::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__4_OFFSET))(this, reason);
		}

		::System::Void _Old_Play_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__1_OFFSET))(this);
		}

		::System::Void _Old_Play_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__2_OFFSET))(this);
		}

		::System::Void _Old_Play_b__3(::Class_1_5CFE684023F165BE* galSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5CFE684023F165BE*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__3_OFFSET))(this, galSyncData);
		}

		::System::Void _Old_Play_b__5(::Class_2_CEC585D0736F3660* chatSyncData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CEC585D0736F3660*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPERFORMNODE___C__DISPLAYCLASS31_0__OLD_PLAY_B__5_OFFSET))(this, chatSyncData);
		}
	};
}
