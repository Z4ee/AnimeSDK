#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigDebugSound_WatchStatesBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGDEBUGSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x183D4A80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDebugSound_TypeDefinitionIndex = 58211;

	class ConfigDebugSound : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigDebugSound_WatchStatesBlock*>* watchStatesBlocks; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDEBUGSOUND__CTOR_OFFSET))(this);
		}
	};
}
