#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FrameSyncStepPhase.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { template <typename T> class IFrameSyncOperation_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseFrameSynchor_2_TypeDefinitionIndex = 51193;

	template <typename TContext, typename TInitParam>
	class BaseFrameSynchor_2 : public ::System::Object
	{
	public:
		TInitParam _InitParam; // 0x0
		TContext _Context; // 0x0
		::System::Single _FrameDeltaTime; // 0x0
		::RPG::GameCore::FixPoint _FrameDeltaTimeFix; // 0x0
		::System::Single _CurrentTime; // 0x0
		::System::Int32 _StepFrameCount; // 0x0
		::System::Int32 _CurrentFrame; // 0x0
		::RPG::GameCore::FrameSyncStepPhase _StepPahse; // 0x0
		::System::Int32 _CurrentOpIndex; // 0x0
		::System::Collections::Generic::List_1<::RPG::GameCore::IFrameSyncOperation_1<TContext>*>* _OpList; // 0x0
	};
}
