#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
class Class_1_BFC2F9D5895EB2FB;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGBIGSCENETIMERCOMPAREDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x19214A60)
#define MOLEMOLE_CONFIGBIGSCENETIMERCOMPAREDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19214B90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBigSceneTimerCompareDynamicCheckTreeNode_TypeDefinitionIndex = 44089;

	class ConfigBigSceneTimerCompareDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicFloat* CompareArg; // 0x10
		::MoleMole::Config::DynamicString* TimerName; // 0x18
		::MoleMole::Config::DynamicString* CompareType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBIGSCENETIMERCOMPAREDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_BFC2F9D5895EB2FB* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_BFC2F9D5895EB2FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBIGSCENETIMERCOMPAREDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
