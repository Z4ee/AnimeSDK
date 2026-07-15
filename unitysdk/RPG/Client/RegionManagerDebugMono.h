#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_REGIONMANAGERDEBUGMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x19866CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RegionManagerDebugMono_TypeDefinitionIndex = 59428;

	class RegionManagerDebugMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* CameraRegion; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CurrentRegions; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CurrentConnection; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* CurrentActiveRegionIDs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONMANAGERDEBUGMONO__CTOR_OFFSET))(this);
		}
	};
}
