#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;
class Class_1_BFC2F9D5895EB2FB;

#define MOLEMOLE_CONFIGPHOTOFRAMEDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1C528310)
#define MOLEMOLE_CONFIGPHOTOFRAMEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C528390)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPhotoFrameDynamicCheckTreeNode_TypeDefinitionIndex = 85017;

	class ConfigPhotoFrameDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::System::Int32 CompareArg; // 0x10
		::MoleMole::Config::ValueCompareType CompareType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPHOTOFRAMEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_BFC2F9D5895EB2FB* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_BFC2F9D5895EB2FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPHOTOFRAMEDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
