#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ETickingGroup.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ExclusiveResourceManager_Ticker; }

#define FOUNDATION_EXCLUSIVERESOURCEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F9BF900)
#define FOUNDATION_EXCLUSIVERESOURCEMANAGER_INITIALIZETICKER_OFFSET UNITYSDK_OFFSET(0x1F9BF950)
#define FOUNDATION_EXCLUSIVERESOURCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BF9C0)

namespace Foundation
{
	inline static constexpr unsigned int ExclusiveResourceManager_TypeDefinitionIndex = 8758;

	class ExclusiveResourceManager : public ::System::Object
	{
	public:
		::Foundation::ExclusiveResourceManager_Ticker* _ticker; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXCLUSIVERESOURCEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXCLUSIVERESOURCEMANAGER_DISPOSE_OFFSET))(this);
		}

		static ::Foundation::ExclusiveResourceManager_Ticker* InitializeTicker(::Foundation::ExclusiveResourceManager_Ticker* ticker, ::Foundation::ETickingGroup tickGroup, ::Foundation::ExclusiveResourceManager* manager)
		{
			return ((::Foundation::ExclusiveResourceManager_Ticker*(*)(::Foundation::ExclusiveResourceManager_Ticker*, ::Foundation::ETickingGroup, ::Foundation::ExclusiveResourceManager*))((::PBYTE)hIl2Cpp + FOUNDATION_EXCLUSIVERESOURCEMANAGER_INITIALIZETICKER_OFFSET))(ticker, tickGroup, manager);
		}
	};
}
