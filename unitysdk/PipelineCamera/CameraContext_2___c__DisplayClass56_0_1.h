#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class WeakReference_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraContext_2___c__DisplayClass56_0_1_TypeDefinitionIndex = 37486;

	template <typename TCameraController, typename TPlayerController, typename T>
	class CameraContext_2___c__DisplayClass56_0_1 : public ::System::Object
	{
	public:
		::System::WeakReference_1<T>* weakReference; // 0x0
		::System::Func_2<T, ::System::Action*>* eventGenerator; // 0x0
	};
}
