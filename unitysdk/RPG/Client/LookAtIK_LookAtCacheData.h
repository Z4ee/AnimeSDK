#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LookAtTargetData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class LookAtTargetConstraint; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0xA7154B0)
#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA715790)
#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA70C2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtIK_LookAtCacheData_TypeDefinitionIndex = 63134;

	class LookAtIK_LookAtCacheData : public ::System::Object
	{
	public:
		::UnityEngine::Transform* LookAtTarget; // 0x10
		::RPG::Client::LookAtTargetData LookAtData; // 0x18
		::RPG::Client::LookAtTargetConstraint* LookAtConstraint; // 0xA0
		::System::Single OverrideLookAtSpeed; // 0xA8
		::System::Single LeftRightFilterIntensity; // 0xAC
		::System::Single StopSpeed; // 0xB0
		::System::Single OverrideLookAtFadeInTime; // 0xB4
		::System::Single LookAtToTargetSpeed; // 0xB8
		::System::Single Speed; // 0xBC
		::System::Single FadeOutTime; // 0xC0
		::System::Single UpDownFilterIntensity; // 0xC4
		::System::Single OverrideLookAtFadeOutTime; // 0xC8
		::System::Single FadeInTime; // 0xCC
		::UnityEngine::Vector3 PrevTracePos; // 0xD0

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
