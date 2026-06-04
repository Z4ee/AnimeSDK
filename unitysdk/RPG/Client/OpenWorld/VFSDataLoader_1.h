#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_271;
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StageVoxelDataIndex; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int VFSDataLoader_1_TypeDefinitionIndex = 69054;

	template <typename T>
	class VFSDataLoader_1 : public ::System::Object
	{
	public:
		::System::Int64 _LastPreloadIndex; // 0x0
		::System::Collections::Concurrent::ConcurrentQueue_1<::System::Int64>* _VFSDataRequestQueue; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int64, T>* _VFSDataCache; // 0x0
		::System::Collections::Generic::List_1<::System::Int64>* _VFSDataIndexLRU; // 0x0
		::System::Int32 _VFSDataCacheMaxCount; // 0x0
		::Class_0_16E4307DCC419505_271* _VFSFileSystem; // 0x0
		::RPG::GameCore::StageVoxelDataIndex* _VoxelDataIndex; // 0x0
	};
}
