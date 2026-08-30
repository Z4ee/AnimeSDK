#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_887;
class Class_0_16E4307DCC419505_888;
class Class_1_53F03472530FDC1C;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0xD43E8E0)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0xD43EBC0)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET UNITYSDK_OFFSET(0xD43EC20)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0xD43E9F0)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xD43EC80)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xD43E9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeGrowthGuide_TypeDefinitionIndex = 65610;

	class LightConeGrowthGuide : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x10
		::Class_1_53F03472530FDC1C* _Factory; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LightConeGrowthGuide* Create(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::LightConeGrowthGuide*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_CREATE_OFFSET))(a1);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_887*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_887*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_888*>* GetRecommendItems(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_888*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET))(this, a1);
		}

		::System::Void RequestRecommendData(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET))(this, a1);
		}
	};
}
