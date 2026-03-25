#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class StageRegionConnection; }

#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_INIT_OFFSET UNITYSDK_OFFSET(0xA295FA0)
#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_METHOD_5_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xA295F40)
#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_METHOD_5_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xA295F20)
#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xA295DE0)
#define RPG_CLIENT_REGIONCONNECTIONDEBUGMONO__CTOR_OFFSET UNITYSDK_OFFSET(0xA295FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RegionConnectionDebugMono_TypeDefinitionIndex = 50481;

	class RegionConnectionDebugMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::StageRegionConnection* Field_5_0; // 0x18

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

		::System::Single Method_5_FB4BE762B6186C23()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_METHOD_5_FB4BE762B6186C23_OFFSET))(this);
		}

		::System::Single Method_5_D64FD9A228A1C4E0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONCONNECTIONDEBUGMONO_METHOD_5_D64FD9A228A1C4E0_OFFSET))(this);
		}
	};
}
