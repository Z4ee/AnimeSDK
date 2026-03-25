#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGrowthGuideItem.h"

class Class_0_16E4307DCC419505_647;

#define RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_GOACQUIRE_OFFSET UNITYSDK_OFFSET(0x9172BA0)
#define RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_HASACQUIRECOMMAND_OFFSET UNITYSDK_OFFSET(0x9172CF0)
#define RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_SETACQUIRECOMMAND_OFFSET UNITYSDK_OFFSET(0x9172CA0)
#define RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9172D40)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLightConeRecommendGuideItem_TypeDefinitionIndex = 53220;

	class BaseLightConeRecommendGuideItem : public ::RPG::Client::BaseGrowthGuideItem
	{
	public:
		::Class_0_16E4307DCC419505_647* _AcquireCommand; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM__CTOR_OFFSET))(this);
		}

		::System::Void GoAcquire()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_GOACQUIRE_OFFSET))(this);
		}

		::System::Void SetAcquireCommand(::Class_0_16E4307DCC419505_647* command)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_647*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_SETACQUIRECOMMAND_OFFSET))(this, command);
		}

		::System::Boolean HasAcquireCommand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELIGHTCONERECOMMENDGUIDEITEM_HASACQUIRECOMMAND_OFFSET))(this);
		}
	};
}
