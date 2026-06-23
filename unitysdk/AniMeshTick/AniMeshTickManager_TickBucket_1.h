#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AniMeshTick/AniMeshTickManager_LodLevel.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace AniMeshTick
{
	inline static constexpr unsigned int AniMeshTickManager_TickBucket_1_TypeDefinitionIndex = 86578;

	template <typename T>
	class AniMeshTickManager_TickBucket_1 : public ::System::Object
	{
	public:
		::AniMeshTick::AniMeshTickManager_LodLevel _Level_k__BackingField; // 0x0
		::System::Collections::Generic::List_1<T>* Targets; // 0x0
		::System::Collections::Generic::List_1<T>* PendingAdds; // 0x0
		::System::Single Interval; // 0x0
		::System::Single Accumulator; // 0x0
		::System::Int32 Cursor; // 0x0
	};
}
