#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace UnityEngine { class Object; }
template <typename T> class NPCSoftAssetPathUtils_CancelCaptureData_1;

inline static constexpr unsigned int NPCSoftAssetPathUtils_LoadCompleteUserData_1_TypeDefinitionIndex = 40961;

template <typename T>
class NPCSoftAssetPathUtils_LoadCompleteUserData_1 : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* source; // 0x0
	::UnityEngine::Object* asset; // 0x0
	::NPCSoftAssetPathUtils_CancelCaptureData_1<T>* captureState; // 0x0
	::System::Threading::CancellationTokenRegistration cancellationHandle; // 0x0
};
