#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"

namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x1912B980)
#define RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x1912B6F0)
#define RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_FF35922B674791EC_OFFSET UNITYSDK_OFFSET(0x1912B340)
#define RPG_CLIENT_MONOEFFECTPLUGINDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1912BA10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDither_TypeDefinitionIndex = 66866;

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

		::System::Void Method_8_FF35922B674791EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_FF35922B674791EC_OFFSET))(this);
		}

		::System::Void Method_8_3E586421BA588EFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_3E586421BA588EFD_OFFSET))(this);
		}

		::System::Void Method_8_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER_METHOD_8_0BDFAC56E6B704CB_OFFSET))(this);
		}
	};
}
