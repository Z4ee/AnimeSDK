#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_663AFC2250EC21C9;
class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;

#define MOLEMOLE_CONFIGPHOTOFRAMEDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B21D1B0)
#define MOLEMOLE_CONFIGPHOTOFRAMEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B21D230)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPhotoFrameDynamicCheckTreeNode_TypeDefinitionIndex = 83361;

	class ConfigPhotoFrameDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::ValueCompareType CompareType; // 0x10
		::System::Int32 CompareArg; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPHOTOFRAMEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPHOTOFRAMEDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
