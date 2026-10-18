#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LookAtTargetData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class LookAtTargetConstraint; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0xD4D3F20)
#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4D41F0)
#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD4D3E60)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtIK_LookAtCacheData_TypeDefinitionIndex = 68469;

	class LookAtIK_LookAtCacheData : public ::System::Object
	{
	public:
		::RPG::Client::LookAtTargetData LookAtData; // 0x10
		::UnityEngine::Transform* LookAtTarget; // 0x98
		::RPG::Client::LookAtTargetConstraint* LookAtConstraint; // 0xA0
		::System::Single OverrideLookAtSpeed; // 0xA8
		::System::Single OverrideLookAtFadeInTime; // 0xAC
		::System::Single LeftRightFilterIntensity; // 0xB0
		::UnityEngine::Vector3 PrevTracePos; // 0xB4
		::System::Single FadeOutTime; // 0xC0
		::System::Single FadeInTime; // 0xC4
		::System::Single LookAtToTargetSpeed; // 0xC8
		::System::Single OverrideLookAtFadeOutTime; // 0xCC
		::System::Single UpDownFilterIntensity; // 0xD0
		::System::Single StopSpeed; // 0xD4
		::System::Single Speed; // 0xD8

		::System::Void _ctor(::RPG::Client::LookAtIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtIK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_COPYTO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_DISPOSE_OFFSET))(this);
		}
	};
}
