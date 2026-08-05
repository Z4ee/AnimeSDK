#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_MoveReason.h"
#include "unitysdk/NAPScrollView/Plugin/BasePlugin.h"

namespace NAPScrollView::Plugin { template <typename T> class IRolling_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace NAPScrollView::Plugin
{
	inline static constexpr unsigned int Plugin_Rolling_1_TypeDefinitionIndex = 41630;

	template <typename T>
	class Plugin_Rolling_1 : public ::NAPScrollView::Plugin::BasePlugin
	{
	public:
		::NAPScrollView::Plugin::IRolling_1<T>* _owner; // 0x0
		::System::Single _rollingTimer; // 0x0
		T _RollingStart_k__BackingField; // 0x0
		T _RollingCurrent_k__BackingField; // 0x0
		T _RollingTarget_k__BackingField; // 0x0
		T _lastFrameScrollDistance_k__BackingField; // 0x0
		T _Velocity_k__BackingField; // 0x0
		::System::Collections::Generic::Queue_1<T>* _VelocityList_k__BackingField; // 0x0
	};
}
