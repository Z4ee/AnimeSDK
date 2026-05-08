#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSUMMERSHOOTCURRENTUSEWEAPON_GETSUMMEREVENTSHOOTWEAPONKEY_OFFSET UNITYSDK_OFFSET(0x16D36BF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSUMMERSHOOTCURRENTUSEWEAPON_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16D36B40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSUMMERSHOOTCURRENTUSEWEAPON__CTOR_OFFSET UNITYSDK_OFFSET(0x16D36CA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetSummerShootCurrentUseWeapon_TypeDefinitionIndex = 56883;

	class LDGetSummerShootCurrentUseWeapon : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::String*>* valueOutput; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSUMMERSHOOTCURRENTUSEWEAPON__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSUMMERSHOOTCURRENTUSEWEAPON_REGISTERPORTS_OFFSET))(this);
		}

		::System::String* GetSummerEventShootWeaponKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSUMMERSHOOTCURRENTUSEWEAPON_GETSUMMEREVENTSHOOTWEAPONKEY_OFFSET))(this);
		}
	};
}
