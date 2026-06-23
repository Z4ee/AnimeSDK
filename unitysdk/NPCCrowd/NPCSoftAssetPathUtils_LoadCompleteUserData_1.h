#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace NPCCrowd { template <typename T> class NPCSoftAssetPathUtils_CancelCaptureData_1; }
namespace UnityEngine { class Object; }

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSoftAssetPathUtils_LoadCompleteUserData_1_TypeDefinitionIndex = 53416;

	template <typename T>
	class NPCSoftAssetPathUtils_LoadCompleteUserData_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* Source; // 0x0
		::UnityEngine::Object* Asset; // 0x0
		::NPCCrowd::NPCSoftAssetPathUtils_CancelCaptureData_1<T>* CaptureState; // 0x0
		::System::Threading::CancellationTokenRegistration CancellationHandle; // 0x0
	};
}
