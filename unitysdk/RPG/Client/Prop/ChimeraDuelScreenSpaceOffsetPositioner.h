#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELSCREENSPACEOFFSETPOSITIONER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A8E2A20)
#define RPG_CLIENT_PROP_CHIMERADUELSCREENSPACEOFFSETPOSITIONER_START_OFFSET UNITYSDK_OFFSET(0x1A8E29B0)
#define RPG_CLIENT_PROP_CHIMERADUELSCREENSPACEOFFSETPOSITIONER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E2C30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelScreenSpaceOffsetPositioner_TypeDefinitionIndex = 77865;

	class ChimeraDuelScreenSpaceOffsetPositioner : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _Source; // 0x18
		::System::Single _Offset; // 0x20
		::UnityEngine::Camera* IEMGKEFBPCG; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSCREENSPACEOFFSETPOSITIONER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSCREENSPACEOFFSETPOSITIONER_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSCREENSPACEOFFSETPOSITIONER_LATEUPDATE_OFFSET))(this);
		}
	};
}
