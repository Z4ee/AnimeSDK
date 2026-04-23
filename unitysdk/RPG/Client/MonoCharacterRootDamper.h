#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOCHARACTERROOTDAMPER_ADDHEIGHT_OFFSET UNITYSDK_OFFSET(0xA9137D0)
#define RPG_CLIENT_MONOCHARACTERROOTDAMPER_CRITICALSPRINGDAMPERIMPLICIT_OFFSET UNITYSDK_OFFSET(0xA913930)
#define RPG_CLIENT_MONOCHARACTERROOTDAMPER_HALFLIFETODAMPING_OFFSET UNITYSDK_OFFSET(0xA913AD0)
#define RPG_CLIENT_MONOCHARACTERROOTDAMPER_RESET_OFFSET UNITYSDK_OFFSET(0xA913780)
#define RPG_CLIENT_MONOCHARACTERROOTDAMPER_UPDATEROOT_OFFSET UNITYSDK_OFFSET(0xA913830)
#define RPG_CLIENT_MONOCHARACTERROOTDAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0xA913B50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCharacterRootDamper_TypeDefinitionIndex = 63199;

	class MonoCharacterRootDamper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* root; // 0x18
		::System::Single height; // 0x20
		::System::Single speed; // 0x24
		::System::Single halfTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCHARACTERROOTDAMPER__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCHARACTERROOTDAMPER_RESET_OFFSET))(this);
		}

		::System::Void AddHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCHARACTERROOTDAMPER_ADDHEIGHT_OFFSET))(this, a1);
		}

		::System::Void UpdateRoot(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCHARACTERROOTDAMPER_UPDATEROOT_OFFSET))(this, a1);
		}

		::System::Void CriticalSpringDamperImplicit(::System::Single& a1, ::System::Single& a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCHARACTERROOTDAMPER_CRITICALSPRINGDAMPERIMPLICIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single HalflifeToDamping(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCHARACTERROOTDAMPER_HALFLIFETODAMPING_OFFSET))(this, a1, a2);
		}
	};
}
