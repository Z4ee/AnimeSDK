#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MAPCHANGELAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14188830)

namespace MoleMole
{
	inline static constexpr unsigned int MapChangeLayerConfig_TypeDefinitionIndex = 78672;

	class MapChangeLayerConfig : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Root; // 0x10
		::Il2CppArray<::UnityEngine::Transform*>* ShowOnlyInMoveAnim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAPCHANGELAYERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
