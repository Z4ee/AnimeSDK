#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigUIWeaponGacha_KeyValueInfo_GAE; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUIWEAPONGACHA_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x162672E0)
#define MOLEMOLE_CONFIG_CONFIGUIWEAPONGACHA_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16267120)
#define MOLEMOLE_CONFIG_CONFIGUIWEAPONGACHA__CTOR_OFFSET UNITYSDK_OFFSET(0x16267550)
#define MOLEMOLE_CONFIG_CONFIGUIWEAPONGACHA___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x162676E0)
#define MOLEMOLE_CONFIG_CONFIGUIWEAPONGACHA___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x162676F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIWeaponGacha_TypeDefinitionIndex = 40967;

	class ConfigUIWeaponGacha : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::UnityEngine::Vector3 GachaInitEuler; // 0x58
		::UnityEngine::Vector3 GachaStayEuler; // 0x64
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* GachaAdditionalEulers; // 0x70
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIWeaponGacha_KeyValueInfo_GAE*>* KeyValueInfoList; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPONGACHA__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPONGACHA_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPONGACHA_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPONGACHA___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIWEAPONGACHA___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
