#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunProjectile.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class WolfBroGunPlayTarget; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_METHOD_6_290BD11329CA8210_OFFSET UNITYSDK_OFFSET(0xE433330)
#define RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_METHOD_6_91D0D9A56BCA1DE9_OFFSET UNITYSDK_OFFSET(0xE433710)
#define RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_METHOD_6_D2CE238054CB70B4_OFFSET UNITYSDK_OFFSET(0xE433A80)
#define RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0xE433C20)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayerProjectile_TypeDefinitionIndex = 68729;

	class WolfBroGunPlayerProjectile : public ::RPG::Client::WolfBroGunProjectile
	{
	public:
		// static const ::System::UInt32 BOAPMGKGGJA = 0x3DB1D1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_290BD11329CA8210(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_METHOD_6_290BD11329CA8210_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_91D0D9A56BCA1DE9(::RPG::Client::WolfBroGunPlayTarget* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTarget*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_METHOD_6_91D0D9A56BCA1DE9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_D2CE238054CB70B4(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_METHOD_6_D2CE238054CB70B4_OFFSET))(this, a1);
		}
	};
}
