#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MONOETHEREYESOBJECTOVERLAPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x10A24200)

inline static constexpr unsigned int MonoEtherEyesObjectOverlapTrigger_TypeDefinitionIndex = 54473;

class MonoEtherEyesObjectOverlapTrigger : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* OverlapTriggers; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOETHEREYESOBJECTOVERLAPTRIGGER__CTOR_OFFSET))(this);
	}
};
