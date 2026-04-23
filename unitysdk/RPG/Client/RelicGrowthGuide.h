#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
class Class_1_65CDD49C6FE0B0D7;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0xAF92400)
#define RPG_CLIENT_RELICGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0xAF926C0)
#define RPG_CLIENT_RELICGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET UNITYSDK_OFFSET(0xAF92720)
#define RPG_CLIENT_RELICGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0xAF92510)
#define RPG_CLIENT_RELICGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xAF92780)
#define RPG_CLIENT_RELICGROWTHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xAF924C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicGrowthGuide_TypeDefinitionIndex = 60353;

	class RelicGrowthGuide : public ::System::Object
	{
	public:
		::RPG::Client::IAvatarInfoProvider* _Avatar; // 0x10
		::Class_1_65CDD49C6FE0B0D7* _Factory; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicGrowthGuide* Create(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::RPG::Client::RelicGrowthGuide*(*)(::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_CREATE_OFFSET))(avatar);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>* GetRecommendItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET))(this);
		}

		::System::Void RequestRecommendData(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET))(this, callback);
		}
	};
}
