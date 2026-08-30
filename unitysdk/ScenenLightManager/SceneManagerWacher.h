#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_E4CB20B056222958;

#define SCENENLIGHTMANAGER_SCENEMANAGERWACHER_GET_SLIGHT_OFFSET UNITYSDK_OFFSET(0x1BF46190)
#define SCENENLIGHTMANAGER_SCENEMANAGERWACHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF461A0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int SceneManagerWacher_TypeDefinitionIndex = 49611;

	class SceneManagerWacher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_E4CB20B056222958* ODEHJOOPKPJ; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGERWACHER__CTOR_OFFSET))(this);
		}

		::Class_1_E4CB20B056222958* get_Slight()
		{
			return ((::Class_1_E4CB20B056222958*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_SCENEMANAGERWACHER_GET_SLIGHT_OFFSET))(this);
		}
	};
}
