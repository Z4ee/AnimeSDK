#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_887;
class Class_1_61593EC35C5C173D;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B665D30)
#define RPG_CLIENT_RELICGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0x1B666010)
#define RPG_CLIENT_RELICGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET UNITYSDK_OFFSET(0x1B666070)
#define RPG_CLIENT_RELICGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0x1B665E40)
#define RPG_CLIENT_RELICGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0x1B6660D0)
#define RPG_CLIENT_RELICGROWTHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B665DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicGrowthGuide_TypeDefinitionIndex = 65615;

	class RelicGrowthGuide : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x10
		::Class_1_61593EC35C5C173D* _Factory; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicGrowthGuide* Create(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::RelicGrowthGuide*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_CREATE_OFFSET))(a1);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_887*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_887*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_887*>* GetRecommendItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_887*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET))(this);
		}

		::System::Void RequestRecommendData(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET))(this, a1);
		}
	};
}
