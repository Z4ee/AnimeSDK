#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
class Class_1_EE101DEF3B255782;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0x9DA1210)
#define RPG_CLIENT_AVATARGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0x9DA14D0)
#define RPG_CLIENT_AVATARGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0x9DA1320)
#define RPG_CLIENT_AVATARGROWTHGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DA12D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGrowthGuide_TypeDefinitionIndex = 60342;

	class AvatarGrowthGuide : public ::System::Object
	{
	public:
		::RPG::Client::IAvatarInfoProvider* _Avatar; // 0x10
		::Class_1_EE101DEF3B255782* _Factory; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AvatarGrowthGuide* Create(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::RPG::Client::AvatarGrowthGuide*(*)(::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE_CREATE_OFFSET))(avatar);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}
	};
}
