#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ETickingGroup.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class ExclusiveResourceManager_3; }
namespace Foundation { template <typename T1, typename T2> class IDefaultResourceConstructor_2; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define FOUNDATION_EXCLUSIVERESOURCESERVICE_FOUNDATION_IGAMESERVICE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F5611E0)
#define FOUNDATION_EXCLUSIVERESOURCESERVICE_FOUNDATION_IGAMESERVICE_ONREADYTODESTROY_OFFSET UNITYSDK_OFFSET(0x1F5611F0)
#define FOUNDATION_EXCLUSIVERESOURCESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F561210)

namespace Foundation
{
	inline static constexpr unsigned int ExclusiveResourceService_TypeDefinitionIndex = 8892;

	class ExclusiveResourceService : public ::System::Object
	{
	public:
		::System::Action* _clearWork; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXCLUSIVERESOURCESERVICE__CTOR_OFFSET))(this);
		}

		::System::Void Foundation_IGameService_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXCLUSIVERESOURCESERVICE_FOUNDATION_IGAMESERVICE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Foundation_IGameService_OnReadyToDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EXCLUSIVERESOURCESERVICE_FOUNDATION_IGAMESERVICE_ONREADYTODESTROY_OFFSET))(this);
		}
	};
}
