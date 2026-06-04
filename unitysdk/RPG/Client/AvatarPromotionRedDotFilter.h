#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3902D0)
#define RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xB390210)
#define RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0xB38FB00)
#define RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER__CANAVATARPROMOTE_OFFSET UNITYSDK_OFFSET(0xB38FE80)
#define RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xB3903B0)
#define RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB390470)
#define RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB390420)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPromotionRedDotFilter_TypeDefinitionIndex = 62468;

	class AvatarPromotionRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotAvatarIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateRedDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_UPDATEREDDOTS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean _CanAvatarPromote(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER__CANAVATARPROMOTE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
