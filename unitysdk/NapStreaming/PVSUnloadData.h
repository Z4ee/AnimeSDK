#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NapStreaming
{
	inline static constexpr unsigned int PVSUnloadData_TypeDefinitionIndex = 43789;

	struct alignas(8) PVSUnloadData
	{
		::UnityEngine::Bounds cellBounds; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Bounds>* unloadBounds; // 0x28
	};
}
