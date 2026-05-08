#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ETickingGroup.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class ITickService_1; }
namespace Foundation { template <typename T> class TickFunction_1; }

#define FOUNDATION_TICKSERVICE_FOUNDATION_IGAMESERVICE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A5C8110)
#define FOUNDATION_TICKSERVICE_FOUNDATION_IGAMESERVICE_ONREADYTODESTROY_OFFSET UNITYSDK_OFFSET(0x1A5C8100)
#define FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__ADDTICKFUNCTION_OFFSET UNITYSDK_OFFSET(0x1A5C7CD0)
#define FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__ENDSUBFRAME_OFFSET UNITYSDK_OFFSET(0x1A5C7B90)
#define FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__HASTICKFUNCTION_OFFSET UNITYSDK_OFFSET(0x1A5C7BE0)
#define FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__MARKDEPENDENCYGRAPHDIRTY_OFFSET UNITYSDK_OFFSET(0x1A5C8020)
#define FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__REMOVETICKFUNCTION_OFFSET UNITYSDK_OFFSET(0x1A5C7F40)
#define FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__RUNTTICKGROUP_OFFSET UNITYSDK_OFFSET(0x1A5C7B40)
#define FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__STARTFRAME_OFFSET UNITYSDK_OFFSET(0x1A5C7AA0)
#define FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__STARTNEXTSUBFRAME_OFFSET UNITYSDK_OFFSET(0x1A5C7AF0)
#define FOUNDATION_TICKSERVICE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A5C7800)
#define FOUNDATION_TICKSERVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A5C74A0)
#define FOUNDATION_TICKSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C8120)

namespace Foundation
{
	inline static constexpr unsigned int TickService_TypeDefinitionIndex = 9180;

	class TickService : public ::System::Object
	{
	public:
		::Foundation::ITickService_1<::Foundation::ETickingGroup>* _impl; // 0x10
		::System::Boolean _hasTick; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICE_LATEUPDATE_OFFSET))(this);
		}

		::System::Boolean Foundation_ITickService_Foundation_ETickingGroup__StartFrame(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__STARTFRAME_OFFSET))(this, deltaTime);
		}

		::System::Void Foundation_ITickService_Foundation_ETickingGroup__StartNextSubframe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__STARTNEXTSUBFRAME_OFFSET))(this);
		}

		::System::Void Foundation_ITickService_Foundation_ETickingGroup__RuntTickGroup(::Foundation::ETickingGroup tickingGroup)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ETickingGroup))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__RUNTTICKGROUP_OFFSET))(this, tickingGroup);
		}

		::System::Boolean Foundation_ITickService_Foundation_ETickingGroup__EndSubframe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__ENDSUBFRAME_OFFSET))(this);
		}

		::System::Boolean Foundation_ITickService_Foundation_ETickingGroup__HasTickFunction(::Foundation::TickFunction_1<::Foundation::ETickingGroup>* function)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::TickFunction_1<::Foundation::ETickingGroup>*))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__HASTICKFUNCTION_OFFSET))(this, function);
		}

		::System::Void Foundation_ITickService_Foundation_ETickingGroup__AddTickFunction(::Foundation::TickFunction_1<::Foundation::ETickingGroup>* function)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::TickFunction_1<::Foundation::ETickingGroup>*))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__ADDTICKFUNCTION_OFFSET))(this, function);
		}

		::System::Void Foundation_ITickService_Foundation_ETickingGroup__RemoveTickFunction(::Foundation::TickFunction_1<::Foundation::ETickingGroup>* function)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::TickFunction_1<::Foundation::ETickingGroup>*))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__REMOVETICKFUNCTION_OFFSET))(this, function);
		}

		::System::Void Foundation_ITickService_Foundation_ETickingGroup__MarkDependencyGraphDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICE_FOUNDATION_ITICKSERVICE_FOUNDATION_ETICKINGGROUP__MARKDEPENDENCYGRAPHDIRTY_OFFSET))(this);
		}

		::System::Void Foundation_IGameService_OnReadyToDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICE_FOUNDATION_IGAMESERVICE_ONREADYTODESTROY_OFFSET))(this);
		}

		::System::Void Foundation_IGameService_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TICKSERVICE_FOUNDATION_IGAMESERVICE_ONDESTROY_OFFSET))(this);
		}
	};
}
