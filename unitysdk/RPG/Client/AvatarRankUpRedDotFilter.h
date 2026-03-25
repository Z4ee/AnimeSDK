#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class AvatarRankConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9156220)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9156180)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x9155E10)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9156B10)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARCANRANKUP_OFFSET UNITYSDK_OFFSET(0x9156630)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARRANKUPCOSTENOUGH_OFFSET UNITYSDK_OFFSET(0x9156980)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONHEROBASICTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x91565D0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYALL_OFFSET UNITYSDK_OFFSET(0x9156420)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYONE_OFFSET UNITYSDK_OFFSET(0x9156470)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEALLAVATAR_OFFSET UNITYSDK_OFFSET(0x9155E90)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET UNITYSDK_OFFSET(0x91568D0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEONEAVATAR_OFFSET UNITYSDK_OFFSET(0x9156550)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9156C70)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9156BF0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9156B70)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarRankUpRedDotFilter_TypeDefinitionIndex = 54374;

	class AvatarRankUpRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotAvatarIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnNotifyAll(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYALL_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyOne(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYONE_OFFSET))(this, arg);
		}

		::System::Void _OnHeroBasicTypeChanged(::System::UInt16 cmd, ::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONHEROBASICTYPECHANGED_OFFSET))(this, cmd, arg);
		}

		::System::Void _UpdateAllAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEALLAVATAR_OFFSET))(this);
		}

		::System::Void _UpdateOneAvatar(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEONEAVATAR_OFFSET))(this, avatar);
		}

		::System::Void _UpdateAvatarRedDot(::System::UInt32 avatarID, ::System::Boolean isRedDot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET))(this, avatarID, isRedDot);
		}

		::System::Boolean _IsAvatarCanRankUp(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARCANRANKUP_OFFSET))(this, avatar);
		}

		::System::Boolean _IsAvatarRankUpCostEnough(::RPG::GameCore::AvatarRankConfigRow* rankConfigRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARRANKUPCOSTENOUGH_OFFSET))(this, rankConfigRow);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
