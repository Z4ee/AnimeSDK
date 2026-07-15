#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPGCamera/BaseCameraStateRunner_1.h"

class Class_1_4A7F3B1CD6560F7E;
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int PipelineCameraStateBaseRunner_1_TypeDefinitionIndex = 66605;

	template <typename CameraStateType>
	class PipelineCameraStateBaseRunner_1 : public ::RPGCamera::BaseCameraStateRunner_1<CameraStateType>
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_4A7F3B1CD6560F7E*>* _CameraModuleList; // 0x0
	};
}
