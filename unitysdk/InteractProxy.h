#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WaveFloating;

#define INTERACTPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x111DEC50)
#define INTERACTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x111DEC30)

inline static constexpr unsigned int InteractProxy_TypeDefinitionIndex = 38355;

class InteractProxy : public ::System::Object
{
public:
	::UnityEngine::Vector3 position; // 0x10
	::System::Single radius; // 0x1C
	::WaveFloating* floatingObj; // 0x20
	::System::Boolean dirty; // 0x28

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + INTERACTPROXY__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + INTERACTPROXY__CTOR_1_OFFSET))(this, a1);
	}
};
