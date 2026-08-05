#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/VirtualProxy_StateTreeCommonTaskBase.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALPROXY_UPDATEVALUEFLOATTASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x1E509470)
#define STATETREEGAMEPLAY_VIRTUALPROXY_UPDATEVALUEFLOATTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1E509550)
#define STATETREEGAMEPLAY_VIRTUALPROXY_UPDATEVALUEFLOATTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1E5095C0)
#define STATETREEGAMEPLAY_VIRTUALPROXY_UPDATEVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1E5094F0)
#define STATETREEGAMEPLAY_VIRTUALPROXY_UPDATEVALUEFLOATTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1E509630)
#define STATETREEGAMEPLAY_VIRTUALPROXY_UPDATEVALUEFLOATTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5096B0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualProxy_UpdateValueFloatTask_TypeDefinitionIndex = 81464;

	class VirtualProxy_UpdateValueFloatTask : public ::StateTreeGameplay::VirtualProxy_StateTreeCommonTaskBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_UPDATEVALUEFLOATTASK__CTOR_OFFSET))(this);
		}

		::UnrealTypes::DataValidationResult Compile(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_UPDATEVALUEFLOATTASK_COMPILE_OFFSET))(this, self, instanceDataView);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::UnrealTypes::FReadOnlyStructView& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_UPDATEVALUEFLOATTASK_GETINSTANCEDATATYPE_OFFSET))(this, self);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_UPDATEVALUEFLOATTASK_ENTERSTATE_OFFSET))(this, self, context, transition);
		}

		::System::Void ExitState(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_UPDATEVALUEFLOATTASK_EXITSTATE_OFFSET))(this, self, context, transition);
		}

		::StateTreeCore::StateTreeRunStatus Tick(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_UPDATEVALUEFLOATTASK_TICK_OFFSET))(this, self, context, deltaTime);
		}
	};
}
