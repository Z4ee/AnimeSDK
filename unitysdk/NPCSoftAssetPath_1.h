#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int NPCSoftAssetPath_1_TypeDefinitionIndex = 40980;

template <typename T>
class NPCSoftAssetPath_1 : public ::System::Object
{
public:
	::Foundation::AssetPath path; // 0x0
	T _assetRef; // 0x0
	::Foundation::AssetRequestHandle _assetHandleSync; // 0x0
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _assetHandlesAsync; // 0x0
};
