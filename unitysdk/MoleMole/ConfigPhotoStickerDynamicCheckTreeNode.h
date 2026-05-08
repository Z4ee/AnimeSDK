#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class Class_1_663AFC2250EC21C9;
class Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7;

#define MOLEMOLE_CONFIGPHOTOSTICKERDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x16B53890)
#define MOLEMOLE_CONFIGPHOTOSTICKERDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B53910)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPhotoStickerDynamicCheckTreeNode_TypeDefinitionIndex = 41744;

	class ConfigPhotoStickerDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::System::Int32 CompareArg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPHOTOSTICKERDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7* Create(::Class_1_663AFC2250EC21C9* overrideMap)
		{
			return ((::Class_1_688FBF6C0FC439E7_Class_1_7E14AFCE0E4315E7*(*)(::PVOID, ::Class_1_663AFC2250EC21C9*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPHOTOSTICKERDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
