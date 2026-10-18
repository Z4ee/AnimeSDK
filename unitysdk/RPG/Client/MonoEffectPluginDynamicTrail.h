#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase.h"

namespace RPG::Client { class DynamicTrailModule; }

#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xD7F1D40)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xD7F1CF0)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0xD7F1C60)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0xD7F1C10)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0xD7F1BB0)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F1DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDynamicTrail_TypeDefinitionIndex = 70003;

	class MonoEffectPluginDynamicTrail : public ::RPG::Client::MonoEffectPluginCharaEffectBase
	{
	public:
		::RPG::Client::DynamicTrailModule* DynamicTrail; // 0x158

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

		::System::Void Method_7_652F3820D8B242FF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_652F3820D8B242FF_OFFSET))(this);
		}

		::System::Void Method_7_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Void Method_7_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_METHOD_7_06330CD58CB602B6_OFFSET))(this);
		}
	};
}
