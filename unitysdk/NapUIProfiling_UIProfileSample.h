#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapUIProfiling_UIFuncionType.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

#define NAPUIPROFILING_UIPROFILESAMPLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F8A0140)
#define NAPUIPROFILING_UIPROFILESAMPLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB6C10)

inline static constexpr unsigned int NapUIProfiling_UIProfileSample_TypeDefinitionIndex = 19184;

struct alignas(1) NapUIProfiling_UIProfileSample
{
	::System::Boolean _active; // 0x10

	static ::NapUIProfiling_UIProfileSample Create(::NapUIProfiling_UIFuncionType type, ::UnityEngine::Transform* uiTransform)
	{
		return ((::NapUIProfiling_UIProfileSample(*)(::NapUIProfiling_UIFuncionType, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NAPUIPROFILING_UIPROFILESAMPLE_CREATE_OFFSET))(type, uiTransform);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPUIPROFILING_UIPROFILESAMPLE_DISPOSE_OFFSET))(this);
	}
};
