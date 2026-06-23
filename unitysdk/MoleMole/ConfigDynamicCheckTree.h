#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/DynamicCheckTreeDataEntry.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGDYNAMICCHECKTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x157D4230)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDynamicCheckTree_TypeDefinitionIndex = 64895;

	class ConfigDynamicCheckTree : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::DynamicCheckTreeDataEntry>* settings; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDYNAMICCHECKTREE__CTOR_OFFSET))(this);
		}
	};
}
