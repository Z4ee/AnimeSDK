#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPGCamera/BaseCameraStateRunner_1.h"

class Class_1_5B0B78CFE6F65A6A;
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int PipelineCameraStateBaseRunner_1_TypeDefinitionIndex = 64274;

	template <typename CameraStateType>
	class PipelineCameraStateBaseRunner_1 : public ::RPGCamera::BaseCameraStateRunner_1<CameraStateType>
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_5B0B78CFE6F65A6A*>* _CameraModuleList; // 0x0
	};
}
