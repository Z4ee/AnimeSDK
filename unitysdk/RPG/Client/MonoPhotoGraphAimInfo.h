#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoPhotoGraphAimInfo_KeyPointType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOPHOTOGRAPHAIMINFO_GETCOLLIDERAIMPOS_OFFSET UNITYSDK_OFFSET(0xA9EA570)
#define RPG_CLIENT_MONOPHOTOGRAPHAIMINFO_ISBOXCOLLIDER_OFFSET UNITYSDK_OFFSET(0xA9EA410)
#define RPG_CLIENT_MONOPHOTOGRAPHAIMINFO_ISCAPSULECOLLIDER_OFFSET UNITYSDK_OFFSET(0xA9EA4C0)
#define RPG_CLIENT_MONOPHOTOGRAPHAIMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA9EA600)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPhotoGraphAimInfo_TypeDefinitionIndex = 63278;

	class MonoPhotoGraphAimInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* Collider; // 0x18
		::System::Boolean IsDynamic; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPHOTOGRAPHAIMINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean IsBoxCollider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPHOTOGRAPHAIMINFO_ISBOXCOLLIDER_OFFSET))(this);
		}

		::System::Boolean IsCapsuleCollider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPHOTOGRAPHAIMINFO_ISCAPSULECOLLIDER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetColliderAimPos(::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::MonoPhotoGraphAimInfo_KeyPointType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPHOTOGRAPHAIMINFO_GETCOLLIDERAIMPOS_OFFSET))(this, a1);
		}
	};
}
