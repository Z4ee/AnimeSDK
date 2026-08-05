#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSUMMERSHOOTWEAPONLIST_GETWEAPONLIST_OFFSET UNITYSDK_OFFSET(0x13690BA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSUMMERSHOOTWEAPONLIST_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13690AF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSUMMERSHOOTWEAPONLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x13690CB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetSummerShootWeaponList_TypeDefinitionIndex = 51060;

	class LDGetSummerShootWeaponList : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::System::String*>*>* weaponListOutput; // 0xA8
		::System::Collections::Generic::List_1<::System::String*>* list; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSUMMERSHOOTWEAPONLIST__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSUMMERSHOOTWEAPONLIST_REGISTERPORTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetWeaponList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSUMMERSHOOTWEAPONLIST_GETWEAPONLIST_OFFSET))(this);
		}
	};
}
