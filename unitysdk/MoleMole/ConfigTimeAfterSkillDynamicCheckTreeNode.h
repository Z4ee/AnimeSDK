#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
class Class_1_BFC2F9D5895EB2FB;

#define MOLEMOLE_CONFIGTIMEAFTERSKILLDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1C486290)
#define MOLEMOLE_CONFIGTIMEAFTERSKILLDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C486370)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTimeAfterSkillDynamicCheckTreeNode_TypeDefinitionIndex = 88122;

	class ConfigTimeAfterSkillDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::System::Single Duration; // 0x10
		::MoleMole::Config::EntitySkillType EntitySkillType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMEAFTERSKILLDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_BFC2F9D5895EB2FB* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_BFC2F9D5895EB2FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMEAFTERSKILLDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
