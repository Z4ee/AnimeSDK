#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CUSTOMATTACHPOINT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB72A040)
#define RPG_CLIENT_CUSTOMATTACHPOINT_REFRESH_OFFSET UNITYSDK_OFFSET(0xB729E50)
#define RPG_CLIENT_CUSTOMATTACHPOINT_RESETORIGINY_OFFSET UNITYSDK_OFFSET(0xB729D90)
#define RPG_CLIENT_CUSTOMATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xB72A090)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomAttachPoint_TypeDefinitionIndex = 63990;

	class CustomAttachPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* RootNode; // 0x18
		::UnityEngine::Vector3 Offset; // 0x20
		::System::Boolean X; // 0x2C
		::System::Boolean Y; // 0x2D
		::System::Boolean Z; // 0x2E
		::System::Boolean FollowRotation; // 0x2F
		::System::Boolean IsFreeze; // 0x30
		::UnityEngine::Vector3 Field_5_7; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMATTACHPOINT__CTOR_OFFSET))(this);
		}

		::System::Void ResetOriginY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMATTACHPOINT_RESETORIGINY_OFFSET))(this, a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMATTACHPOINT_REFRESH_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMATTACHPOINT_LATEUPDATE_OFFSET))(this);
		}
	};
}
