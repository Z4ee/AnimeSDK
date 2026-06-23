#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/MoleMole/MonoEffectPluginHitWall_Enum_3_85FB9B646D21EF58.h"
#include "unitysdk/MoleMole/MonoEffectPluginHitWall_Enum_3_EBC728A2A13E8767.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_MONOEFFECTPLUGINHITWALL_CALCHITDIR_OFFSET UNITYSDK_OFFSET(0x1A0420D0)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALL_GET_EFFECTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A041F80)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALL_METHOD_6_871AC6DBEB0AF4F3_OFFSET UNITYSDK_OFFSET(0x1A042470)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A042410)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginHitWall_TypeDefinitionIndex = 41408;

	class MonoEffectPluginHitWall : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::MoleMole::MonoEffectPluginHitWall_Enum_3_85FB9B646D21EF58 strategy; // 0x18
		::System::Int32 updateCounter; // 0x1C
		::UnityEngine::Vector3 effectStart; // 0x20
		::UnityEngine::Vector3 effectStop; // 0x2C
		::MoleMole::MonoEffectPluginHitWall_Enum_3_EBC728A2A13E8767 applyAxis; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALL__CTOR_OFFSET))(this);
		}

		::System::Single get_EffectLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALL_GET_EFFECTLENGTH_OFFSET))(this);
		}

		::System::Void CalcHitDir(::UnityEngine::Vector3 a1, ::MoleMole::Config::Vector3Range a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::Vector3Range))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALL_CALCHITDIR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_871AC6DBEB0AF4F3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALL_METHOD_6_871AC6DBEB0AF4F3_OFFSET))(this, a1, a2);
		}
	};
}
