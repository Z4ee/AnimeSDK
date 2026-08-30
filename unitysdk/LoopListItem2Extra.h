#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }

#define LOOPLISTITEM2EXTRA_AWAKE_OFFSET UNITYSDK_OFFSET(0xB983D60)
#define LOOPLISTITEM2EXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0xB983E20)

inline static constexpr unsigned int LoopListItem2Extra_TypeDefinitionIndex = 48086;

class LoopListItem2Extra : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* mContentRootObj; // 0x18
	::UnityEngine::CanvasGroup* canvasGroup; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPLISTITEM2EXTRA__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOPLISTITEM2EXTRA_AWAKE_OFFSET))(this);
	}
};
