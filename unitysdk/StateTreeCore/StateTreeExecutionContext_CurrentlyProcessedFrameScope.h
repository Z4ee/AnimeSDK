#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionFrame.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/RawPtr_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"

#define STATETREECORE_STATETREEEXECUTIONCONTEXT_CURRENTLYPROCESSEDFRAMESCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5D3B0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_CURRENTLYPROCESSEDFRAMESCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D360)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExecutionContext_CurrentlyProcessedFrameScope_TypeDefinitionIndex = 30928;

	struct alignas(8) StateTreeExecutionContext_CurrentlyProcessedFrameScope
	{
		::UnrealTypes::RawPtr_1<::StateTreeCore::StateTreeExecutionContext> _context; // 0x10
		::UnrealTypes::RawPtr_1<::StateTreeCore::StateTreeInstanceData> _savedSharedInstanceData; // 0x18
		::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> _savedFrame; // 0x20
		::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> _savedParentFrame; // 0x28

		::System::Void _ctor(::StateTreeCore::StateTreeExecutionContext& context, ::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> currentParentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExecutionContext&, ::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_CURRENTLYPROCESSEDFRAMESCOPE__CTOR_OFFSET))(this, context, currentParentFrame, currentFrame);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_CURRENTLYPROCESSEDFRAMESCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
