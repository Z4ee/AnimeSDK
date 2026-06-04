#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceEffectDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CAKERACEEFFECTINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xB494B30)
#define RPG_CLIENT_CAKERACEEFFECTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB494F20)
#define RPG_CLIENT_CAKERACEEFFECTINFO_GETEFFECTDATAITEM_OFFSET UNITYSDK_OFFSET(0xB494FB0)
#define RPG_CLIENT_CAKERACEEFFECTINFO_HASEFFECTDATAITEM_OFFSET UNITYSDK_OFFSET(0xB495060)
#define RPG_CLIENT_CAKERACEEFFECTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB494CA0)
#define RPG_CLIENT_CAKERACEEFFECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB494C20)
#define RPG_CLIENT_CAKERACEEFFECTINFO__INITEFFECTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xB494CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceEffectInfo_TypeDefinitionIndex = 58956;

	class CakeRaceEffectInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceEffectDataItem*>* _EffectDataItems; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceEffectInfo* Create()
		{
			return ((::RPG::Client::CakeRaceEffectInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTINFO_CREATE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::CakeRaceEffectDataItem* GetEffectDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceEffectDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTINFO_GETEFFECTDATAITEM_OFFSET))(this, a1);
		}

		::System::Boolean HasEffectDataItem(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTINFO_HASEFFECTDATAITEM_OFFSET))(this, a1);
		}

		::System::Void _InitEffectDataItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEEFFECTINFO__INITEFFECTDATAITEMS_OFFSET))(this);
		}
	};
}
