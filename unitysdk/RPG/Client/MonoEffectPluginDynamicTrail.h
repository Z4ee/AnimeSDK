#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase.h"

namespace RPG::Client { class DynamicTrailModule; }

#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xA990A00)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0xA990870)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0xA990920)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA9909B0)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0xA9908D0)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xA990A60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDynamicTrail_TypeDefinitionIndex = 64533;

	class MonoEffectPluginDynamicTrail : public ::RPG::Client::MonoEffectPluginCharaEffectBase
	{
	public:
		::RPG::Client::DynamicTrailModule* DynamicTrail; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL__CTOR_OFFSET))(this);
		}

		::System::Void Method_7_2CD6D17D088D5DB9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_2CD6D17D088D5DB9_OFFSET))(this);
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
