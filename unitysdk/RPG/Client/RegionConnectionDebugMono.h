#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class StageRegionConnection; }

#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_INIT_OFFSET UNITYSDK_OFFSET(0x1B6579B0)
#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_METHOD_5_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x1B657950)
#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_METHOD_5_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1B657900)
#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1B657780)
#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B657A00)

namespace RPG::Client
{
	inline static constexpr unsigned int RegionConnectionDebugMono_TypeDefinitionIndex = 62251;

	class RegionConnectionDebugMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::StageRegionConnection* OFKGLJOAMLD; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONCONNECTIONDEBUGMONO__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::StageRegionConnection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRegionConnection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_INIT_OFFSET))(this, a1);
		}

		::System::Single Method_5_FF7B2911BBACA4A9()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_METHOD_5_FF7B2911BBACA4A9_OFFSET))(this);
		}

		::System::Single Method_5_D64FD9A228A1C4E0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_METHOD_5_D64FD9A228A1C4E0_OFFSET))(this);
		}
	};
}
