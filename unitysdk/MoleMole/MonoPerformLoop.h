#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOPERFORMLOOP_AWAKE_OFFSET UNITYSDK_OFFSET(0x11D53B20)
#define MOLEMOLE_MONOPERFORMLOOP_START_OFFSET UNITYSDK_OFFSET(0x11D53C90)
#define MOLEMOLE_MONOPERFORMLOOP_UPDATE_OFFSET UNITYSDK_OFFSET(0x11D53B70)
#define MOLEMOLE_MONOPERFORMLOOP__CTOR_OFFSET UNITYSDK_OFFSET(0x11D53CD0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPerformLoop_TypeDefinitionIndex = 46671;

	class MonoPerformLoop : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Speed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPERFORMLOOP__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPERFORMLOOP_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPERFORMLOOP_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPERFORMLOOP_UPDATE_OFFSET))(this);
		}
	};
}
