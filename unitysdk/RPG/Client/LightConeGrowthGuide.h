#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
class Class_0_16E4307DCC419505_748;
class Class_1_4D4B477AFF56634F;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0xA66AE40)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0xA66B100)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET UNITYSDK_OFFSET(0xA66B160)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0xA66AF50)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA66B1C0)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xA66AF00)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeGrowthGuide_TypeDefinitionIndex = 60348;

	class LightConeGrowthGuide : public ::System::Object
	{
	public:
		::RPG::Client::IAvatarInfoProvider* _Avatar; // 0x10
		::Class_1_4D4B477AFF56634F* _Factory; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LightConeGrowthGuide* Create(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::RPG::Client::LightConeGrowthGuide*(*)(::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_CREATE_OFFSET))(avatar);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_748*>* GetRecommendItems(::System::Boolean excludeEquipped)
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_748*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET))(this, excludeEquipped);
		}

		::System::Void RequestRecommendData(::System::Action_1<::System::UInt32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET))(this, callback);
		}
	};
}
