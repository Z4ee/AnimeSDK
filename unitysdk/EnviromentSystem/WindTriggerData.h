#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/WindTriggerBufferData.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ENVIROMENTSYSTEM_WINDTRIGGERDATA_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x2DE6750)
#define ENVIROMENTSYSTEM_WINDTRIGGERDATA_METHOD_2_DFCBD1685FB122E4_OFFSET UNITYSDK_OFFSET(0x2DE6740)

namespace EnviromentSystem
{
	inline static constexpr unsigned int WindTriggerData_TypeDefinitionIndex = 50055;

	struct alignas(8) WindTriggerData
	{
		::EnviromentSystem::WindTriggerBufferData bufferData; // 0x10
		::UnityEngine::GameObject* _HandleGO; // 0x68

		::System::Void Method_2_DFCBD1685FB122E4(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_WINDTRIGGERDATA_METHOD_2_DFCBD1685FB122E4_OFFSET))(this, a1);
		}

		::System::Void Method_2_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_WINDTRIGGERDATA_METHOD_2_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
