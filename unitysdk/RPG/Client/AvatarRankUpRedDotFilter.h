#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class AvatarRankConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1866E640)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1866E5E0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x1866E0A0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1866F050)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARCANRANKUP_OFFSET UNITYSDK_OFFSET(0x1866EAE0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARRANKUPCOSTENOUGH_OFFSET UNITYSDK_OFFSET(0x1866EED0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONHEROBASICTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x1866EA80)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYALL_OFFSET UNITYSDK_OFFSET(0x1866E8F0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYONE_OFFSET UNITYSDK_OFFSET(0x1866E940)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEALLAVATAR_OFFSET UNITYSDK_OFFSET(0x1866E0F0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET UNITYSDK_OFFSET(0x1866EDA0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEONEAVATAR_OFFSET UNITYSDK_OFFSET(0x1866EA00)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarRankUpRedDotFilter_TypeDefinitionIndex = 63836;

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

		::System::Void _OnNotifyAll(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYALL_OFFSET))(this, a1);
		}

		::System::Void _OnNotifyOne(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYONE_OFFSET))(this, a1);
		}

		::System::Void _OnHeroBasicTypeChanged(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONHEROBASICTYPECHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateAllAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEALLAVATAR_OFFSET))(this);
		}

		::System::Void _UpdateOneAvatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEONEAVATAR_OFFSET))(this, a1);
		}

		::System::Void _UpdateAvatarRedDot(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsAvatarCanRankUp(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARCANRANKUP_OFFSET))(this, a1);
		}

		::System::Boolean _IsAvatarRankUpCostEnough(::RPG::GameCore::AvatarRankConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARRANKUPCOSTENOUGH_OFFSET))(this, a1);
		}
	};
}
