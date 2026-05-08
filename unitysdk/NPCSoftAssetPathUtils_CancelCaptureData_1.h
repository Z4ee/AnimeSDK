#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
template <typename T> class NPCSoftAssetPathUtils_CancelCaptureData_1;

inline static constexpr unsigned int NPCSoftAssetPathUtils_CancelCaptureData_1_TypeDefinitionIndex = 40960;

template <typename T>
class NPCSoftAssetPathUtils_CancelCaptureData_1 : public ::System::Object
{
public:
	// static const ::System::Int32 MaxPoolSize = 0x400; // 0x0
	static ::System::Collections::Generic::Stack_1<::NPCSoftAssetPathUtils_CancelCaptureData_1<T>*>** StaticGet_Pool()
	{
		return (::System::Collections::Generic::Stack_1<::NPCSoftAssetPathUtils_CancelCaptureData_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCSoftAssetPathUtils_CancelCaptureData_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* Source; // 0x0
	::Foundation::AssetRequestHandle AssetHandle; // 0x0
	::System::Threading::CancellationToken CancellationToken; // 0x0
};
