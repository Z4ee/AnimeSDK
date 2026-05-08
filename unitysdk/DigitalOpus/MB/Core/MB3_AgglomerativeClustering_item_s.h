#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_ITEM_S__CTOR_OFFSET UNITYSDK_OFFSET(0x1B59F450)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_AgglomerativeClustering_item_s_TypeDefinitionIndex = 85042;

	class MB3_AgglomerativeClustering_item_s : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* go; // 0x10
		::UnityEngine::Vector3 coord; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_AGGLOMERATIVECLUSTERING_ITEM_S__CTOR_OFFSET))(this);
		}
	};
}
