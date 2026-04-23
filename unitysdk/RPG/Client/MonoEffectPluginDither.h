#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"

namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xA990800)
#define RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0xA9902C0)
#define RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0xA990530)
#define RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xA990740)
#define RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xA990860)
#define RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xA9907F0)
#define RPG_CLIENT_MONOEFFECTPLUGINDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0xA9907E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDither_TypeDefinitionIndex = 64532;

	class MonoEffectPluginDither : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::System::Boolean EnableDither; // 0x170
		::System::Single DitherAlpha; // 0x174
		::System::Boolean DitherFadeIn; // 0x178
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* Field_8_3; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_276036CDF4BFF5A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_276036CDF4BFF5A6_OFFSET))(this);
		}

		::System::Void Method_8_9D8CB5E47C1952BD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_9D8CB5E47C1952BD_OFFSET))(this);
		}

		::System::Void Method_8_E41B6A823556FEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_E41B6A823556FEEA_OFFSET))(this);
		}

		::System::Void Method_8_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void Method_8_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_092CD57850778EFC_OFFSET))(this);
		}

		::System::Void Method_8_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_F4ADC37B63F4E9EF_OFFSET))(this);
		}
	};
}
