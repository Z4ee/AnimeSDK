#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class HollowMap; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCITYHOLLOWMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4CFB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCityHollowMap_TypeDefinitionIndex = 54587;

	class ConfigCityHollowMap : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::HollowMap*>* groups; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCITYHOLLOWMAP__CTOR_OFFSET))(this);
		}
	};
}
