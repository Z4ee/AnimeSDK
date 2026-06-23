#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Func_9; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Func_8; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Func_7; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D4CCCE0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CCD80)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEnvironment_TypeDefinitionIndex = 37946;

	class CameraSequenceEnvironment : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Object*>* _data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENT__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEENVIRONMENT_CLEAR_OFFSET))(this);
		}
	};
}
