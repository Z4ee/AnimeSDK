#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageBudgetTool/VolumeToBlock.h"
#include "unitysdk/StageBudgetTool/VolumeToRoomConnnectivity.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define STAGEBUDGETTOOL_VOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x197E56B0)

namespace StageBudgetTool
{
	inline static constexpr unsigned int Volume_TypeDefinitionIndex = 48179;

	class Volume : public ::System::Object
	{
	public:
		::System::String* Alias; // 0x10
		::System::Collections::Generic::List_1<::StageBudgetTool::VolumeToRoomConnnectivity>* NeighborRooms; // 0x18
		::System::Boolean Active; // 0x20
		::UnityEngine::Transform* Transform; // 0x28
		::System::Collections::Generic::List_1<::StageBudgetTool::VolumeToBlock>* VolumeToBlockQualityList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEBUDGETTOOL_VOLUME__CTOR_OFFSET))(this);
		}
	};
}
