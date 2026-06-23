#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

class Class_1_B0877C107BC7F2BF;
namespace MoleMole::FlowCanvas::Nodes { class LDEnableBlackCurtain; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13000CE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN___C__DISPLAYCLASS1_0__INVOKE_B__0_OFFSET UNITYSDK_OFFSET(0x13000CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN___C__DISPLAYCLASS1_0__INVOKE_B__1_OFFSET UNITYSDK_OFFSET(0x13000D50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN___C__DISPLAYCLASS1_0__INVOKE_B__2_OFFSET UNITYSDK_OFFSET(0x13000F40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN___C__DISPLAYCLASS1_0__INVOKE_B__3_OFFSET UNITYSDK_OFFSET(0x13000EF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnableBlackCurtain___c__DisplayClass1_0_TypeDefinitionIndex = 43906;

	class LDEnableBlackCurtain___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDEnableBlackCurtain* __4__this; // 0x18
		::System::Action_1<::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF>* callOnFinish; // 0x20
		::System::Single duration; // 0x28
		::System::Boolean isCalled; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _Invoke_b__0(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF r)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN___C__DISPLAYCLASS1_0__INVOKE_B__0_OFFSET))(this, r);
		}

		::System::Void _Invoke_b__1(::Class_1_B0877C107BC7F2BF* t)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B0877C107BC7F2BF*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN___C__DISPLAYCLASS1_0__INVOKE_B__1_OFFSET))(this, t);
		}

		::System::Void _Invoke_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN___C__DISPLAYCLASS1_0__INVOKE_B__3_OFFSET))(this);
		}

		::System::Void _Invoke_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN___C__DISPLAYCLASS1_0__INVOKE_B__2_OFFSET))(this);
		}
	};
}
