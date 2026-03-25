#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LookAtTargetData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class LookAtTargetConstraint; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x9A68080)
#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A68360)
#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A5EED0)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtIK_LookAtCacheData_TypeDefinitionIndex = 55900;

	class LookAtIK_LookAtCacheData : public ::System::Object
	{
	public:
		::RPG::Client::LookAtTargetConstraint* LookAtConstraint; // 0x10
		::RPG::Client::LookAtTargetData LookAtData; // 0x18
		::UnityEngine::Transform* LookAtTarget; // 0xA0
		::System::Single FadeInTime; // 0xA8
		::UnityEngine::Vector3 PrevTracePos; // 0xAC
		::System::Single OverrideLookAtFadeOutTime; // 0xB8
		::System::Single StopSpeed; // 0xBC
		::System::Single UpDownFilterIntensity; // 0xC0
		::System::Single LeftRightFilterIntensity; // 0xC4
		::System::Single LookAtToTargetSpeed; // 0xC8
		::System::Single OverrideLookAtSpeed; // 0xCC
		::System::Single Speed; // 0xD0
		::System::Single OverrideLookAtFadeInTime; // 0xD4
		::System::Single FadeOutTime; // 0xD8

		::System::Void _ctor(::RPG::Client::LookAtIK* ik)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtIK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA__CTOR_OFFSET))(this, ik);
		}

		::System::Void CopyTo(::UnityEngine::MonoBehaviour* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_COPYTO_OFFSET))(this, data);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_DISPOSE_OFFSET))(this);
		}
	};
}
