#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

class Class_1_FC3A9C07FC781527;
namespace MoleMole::Config { class ScenePerformConfig; }
namespace MoleMole::FlowCanvas::Nodes { class LDLevelEndNode___c__DisplayClass18_0; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS18_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1540F7C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS18_1___TRYPLAYDYNAMICENDPERFORMS_B__0_OFFSET UNITYSDK_OFFSET(0x1540F7D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelEndNode___c__DisplayClass18_1_TypeDefinitionIndex = 51719;

	class LDLevelEndNode___c__DisplayClass18_1 : public ::System::Object
	{
	public:
		::MoleMole::Config::ScenePerformConfig* scenePerformConfig; // 0x10
		::Class_1_FC3A9C07FC781527* blackCurtain; // 0x18
		::MoleMole::FlowCanvas::Nodes::LDLevelEndNode___c__DisplayClass18_0* CS___8__locals1; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* performIDs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS18_1__CTOR_OFFSET))(this);
		}

		::System::Void __TryPlayDynamicEndPerforms_b__0(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELENDNODE___C__DISPLAYCLASS18_1___TRYPLAYDYNAMICENDPERFORMS_B__0_OFFSET))(this, _);
		}
	};
}
