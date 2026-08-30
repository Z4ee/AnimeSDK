#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }

#define BATCHANIMATIONCLIPGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C65FC10)

inline static constexpr unsigned int BatchAnimationClipGroup_TypeDefinitionIndex = 36795;

class BatchAnimationClipGroup : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Rendering::BatchAnimationClip*>* clips; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONCLIPGROUP__CTOR_OFFSET))(this);
	}
};
