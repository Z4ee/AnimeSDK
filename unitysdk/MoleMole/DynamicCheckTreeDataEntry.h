#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigLevelConditionDynamicWrapper.h"
#include "unitysdk/MoleMole/LevelDynamicCheckTree_Template.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class ConfigBaseDynamicCheckTreeNode; }
namespace System { class String; }

#define MOLEMOLE_DYNAMICCHECKTREEDATAENTRY_GETEXPAND_OFFSET UNITYSDK_OFFSET(0x7D9710)
#define MOLEMOLE_DYNAMICCHECKTREEDATAENTRY_ISVALID_OFFSET UNITYSDK_OFFSET(0x7D9760)

namespace MoleMole
{
	inline static constexpr unsigned int DynamicCheckTreeDataEntry_TypeDefinitionIndex = 66357;

	struct alignas(8) DynamicCheckTreeDataEntry
	{
		::System::Int32 ID; // 0x10
		::MoleMole::LevelDynamicCheckTree_Template TID; // 0x14
		::System::String* Remarks; // 0x18
		::Il2CppArray<::MoleMole::ConfigBaseDynamicCheckTreeNode*>* nodeConfigs; // 0x20
		::MoleMole::ConfigLevelConditionDynamicWrapper dynamicWrapperConfig; // 0x28

		::System::Boolean GetExpand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICCHECKTREEDATAENTRY_GETEXPAND_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICCHECKTREEDATAENTRY_ISVALID_OFFSET))(this);
		}
	};
}
