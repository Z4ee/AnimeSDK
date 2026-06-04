#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGrowthGuideItem.h"

class Class_0_16E4307DCC419505_797;

#define RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_GOACQUIRE_OFFSET UNITYSDK_OFFSET(0xB3AD6C0)
#define RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_HASACQUIRECOMMAND_OFFSET UNITYSDK_OFFSET(0xB3AD810)
#define RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_SETACQUIRECOMMAND_OFFSET UNITYSDK_OFFSET(0xB3AD7C0)
#define RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AD860)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLightConeRecommendGuideItem_TypeDefinitionIndex = 61282;

	class BaseLightConeRecommendGuideItem : public ::RPG::Client::BaseGrowthGuideItem
	{
	public:
		::Class_0_16E4307DCC419505_797* _AcquireCommand; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM__CTOR_OFFSET))(this);
		}

		::System::Void GoAcquire()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_GOACQUIRE_OFFSET))(this);
		}

		::System::Void SetAcquireCommand(::Class_0_16E4307DCC419505_797* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_797*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_SETACQUIRECOMMAND_OFFSET))(this, a1);
		}

		::System::Boolean HasAcquireCommand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_HASACQUIRECOMMAND_OFFSET))(this);
		}
	};
}
