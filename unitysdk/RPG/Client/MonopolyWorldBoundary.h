#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONOPOLYWORLDBOUNDARY_GETWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0xD8B8F40)
#define RPG_CLIENT_MONOPOLYWORLDBOUNDARY_START_OFFSET UNITYSDK_OFFSET(0xD8B8DD0)
#define RPG_CLIENT_MONOPOLYWORLDBOUNDARY__CTOR_OFFSET UNITYSDK_OFFSET(0xD8B8FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyWorldBoundary_TypeDefinitionIndex = 72767;

	class MonopolyWorldBoundary : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* OFFPODABAEC; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* NKAAOPLPBMN; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYWORLDBOUNDARY__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYWORLDBOUNDARY_START_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetWorldCorners()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYWORLDBOUNDARY_GETWORLDCORNERS_OFFSET))(this);
		}
	};
}
