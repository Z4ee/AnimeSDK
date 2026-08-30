#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_6BCEA20C85FCAC30;

#define ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15344730)
#define ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15344640)
#define ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15344780)
#define ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x15344840)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int AsyncHelper_TypeDefinitionIndex = 49662;

	class AsyncHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_6BCEA20C85FCAC30* OLHFONMBLOE; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER_UPDATE_OFFSET))(this);
		}
	};
}
