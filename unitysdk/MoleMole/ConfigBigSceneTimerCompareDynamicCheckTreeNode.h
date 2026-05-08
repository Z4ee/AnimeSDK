#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_663AFC2250EC21C9;
class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGBIGSCENETIMERCOMPAREDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x14259110)
#define MOLEMOLE_CONFIGBIGSCENETIMERCOMPAREDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14259240)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBigSceneTimerCompareDynamicCheckTreeNode_TypeDefinitionIndex = 58917;

	class ConfigBigSceneTimerCompareDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicString* CompareType; // 0x10
		::MoleMole::Config::DynamicFloat* CompareArg; // 0x18
		::MoleMole::Config::DynamicString* TimerName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBIGSCENETIMERCOMPAREDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBIGSCENETIMERCOMPAREDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
