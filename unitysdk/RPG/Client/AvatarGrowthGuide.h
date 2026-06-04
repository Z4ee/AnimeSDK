#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_798;
class Class_1_EA6A2942A1B10F0A;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0xB383AA0)
#define RPG_CLIENT_AVATARGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0xB383D80)
#define RPG_CLIENT_AVATARGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0xB383BB0)
#define RPG_CLIENT_AVATARGROWTHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xB383B60)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGrowthGuide_TypeDefinitionIndex = 61277;

	class AvatarGrowthGuide : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x10
		::Class_1_EA6A2942A1B10F0A* _Factory; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AvatarGrowthGuide* Create(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::AvatarGrowthGuide*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE_CREATE_OFFSET))(a1);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_798*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_798*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}
	};
}
