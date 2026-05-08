#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraModuleIdentifier_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace PipelineCamera::Detail
{
	inline static constexpr unsigned int CameraModuleTracker_2_TypeDefinitionIndex = 36428;

	template <typename TCameraController, typename TPlayerController>
	class CameraModuleTracker_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::PipelineCamera::CameraModuleIdentifier_2<TCameraController, TPlayerController>>*>* _trackedModules; // 0x0
		::System::Collections::Generic::List_1<::PipelineCamera::CameraModuleIdentifier_2<TCameraController, TPlayerController>>* _trackedModuleList; // 0x0
	};
}
