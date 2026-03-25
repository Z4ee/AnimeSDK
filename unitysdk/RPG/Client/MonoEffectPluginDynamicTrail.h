#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase.h"

namespace RPG::Client { class DynamicTrailModule; }

#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x9CCE930)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x9CCE850)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x9CCE8E0)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0x9CCE800)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x9CCE7A0)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x9CCE990)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDynamicTrail_TypeDefinitionIndex = 57279;

	class MonoEffectPluginDynamicTrail : public ::RPG::Client::MonoEffectPluginCharaEffectBase
	{
	public:
		::RPG::Client::DynamicTrailModule* DynamicTrail; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL__CTOR_OFFSET))(this);
		}

		::System::Void Method_7_ED65AE7582736594()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_ED65AE7582736594_OFFSET))(this);
		}

		::System::Boolean Method_7_A86A455D6AB5B836(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_A86A455D6AB5B836_OFFSET))(this, a1);
		}

		::System::Void Method_7_3B258437A86233AC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_3B258437A86233AC_OFFSET))(this);
		}

		::System::Void Method_7_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Void Method_7_078D85152011B919()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_078D85152011B919_OFFSET))(this);
		}
	};
}
