#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Sprite; }

#define RPG_CLIENT_MINIMAPVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9BB1AB0)
#define RPG_CLIENT_MINIMAPVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9BB19D0)
#define RPG_CLIENT_MINIMAPVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x9BB1C90)

namespace RPG::Client
{
	inline static constexpr unsigned int MinimapVolume_TypeDefinitionIndex = 55938;

	class MinimapVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 Center; // 0x18
		::UnityEngine::Vector3 Size; // 0x24
		::UnityEngine::Sprite* MiniMapImage; // 0x30
		::System::Single Scale; // 0x38
		::System::Boolean CombineLayerAutomatic; // 0x3C
		::System::Int32 Field_5_5; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPVOLUME__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPVOLUME_ONDISABLE_OFFSET))(this);
		}
	};
}
