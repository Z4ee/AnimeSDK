#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class Rigidbody; }

#define ENABLEIFFSLEEPING_START_OFFSET UNITYSDK_OFFSET(0x161C7910)
#define ENABLEIFFSLEEPING_UPDATE_OFFSET UNITYSDK_OFFSET(0x161C79E0)
#define ENABLEIFFSLEEPING__CTOR_OFFSET UNITYSDK_OFFSET(0x161C7CE0)

inline static constexpr unsigned int EnableIffSleeping_TypeDefinitionIndex = 46581;

class EnableIffSleeping : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Behaviour* m_Behaviour; // 0x18
	::UnityEngine::Rigidbody* m_Rigidbody; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENABLEIFFSLEEPING__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENABLEIFFSLEEPING_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENABLEIFFSLEEPING_UPDATE_OFFSET))(this);
	}
};
