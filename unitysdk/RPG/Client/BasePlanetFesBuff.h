#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAvatarData; }
namespace RPG::Client { class PlanetFesBuffSource; }
namespace RPG::GameCore { class PlanetFesEffectRow; }
namespace RPG::GameCore { class PlanetFesEffectTypeConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_BASEPLANETFESBUFF_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9DDCDA0)
#define RPG_CLIENT_BASEPLANETFESBUFF_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x9DDCDC0)
#define RPG_CLIENT_BASEPLANETFESBUFF_GET_ICON_OFFSET UNITYSDK_OFFSET(0x9DDCD90)
#define RPG_CLIENT_BASEPLANETFESBUFF_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DDCD50)
#define RPG_CLIENT_BASEPLANETFESBUFF_GET_LARGEICON_OFFSET UNITYSDK_OFFSET(0x9DDCDB0)
#define RPG_CLIENT_BASEPLANETFESBUFF_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x9DDCD70)
#define RPG_CLIENT_BASEPLANETFESBUFF_INITBYCONFIG_OFFSET UNITYSDK_OFFSET(0x9DDCE20)
#define RPG_CLIENT_BASEPLANETFESBUFF_INITSOURCE_OFFSET UNITYSDK_OFFSET(0x9DDCED0)
#define RPG_CLIENT_BASEPLANETFESBUFF_ISAVATARBUFF_OFFSET UNITYSDK_OFFSET(0x9DDCDE0)
#define RPG_CLIENT_BASEPLANETFESBUFF_SET_ID_OFFSET UNITYSDK_OFFSET(0x9DDCD60)
#define RPG_CLIENT_BASEPLANETFESBUFF_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x9DDCD80)
#define RPG_CLIENT_BASEPLANETFESBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x9DDD240)
#define RPG_CLIENT_BASEPLANETFESBUFF__GETDESC_OFFSET UNITYSDK_OFFSET(0x9DDCFC0)
#define RPG_CLIENT_BASEPLANETFESBUFF__GETICONPATH_OFFSET UNITYSDK_OFFSET(0x9DDCF20)
#define RPG_CLIENT_BASEPLANETFESBUFF__GETLARGEICONPATH_OFFSET UNITYSDK_OFFSET(0x9DDCF70)

namespace RPG::Client
{
	inline static constexpr unsigned int BasePlanetFesBuff_TypeDefinitionIndex = 61291;

	class BasePlanetFesBuff : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesEffectRow* _Row; // 0x10
		::RPG::Client::PlanetFesBuffSource* _Source_k__BackingField; // 0x18
		::RPG::GameCore::PlanetFesEffectTypeConfigRow* _TypeRow; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::PlanetFesBuffSource* get_Source()
		{
			return ((::RPG::Client::PlanetFesBuffSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::RPG::Client::PlanetFesBuffSource* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesBuffSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_SET_SOURCE_OFFSET))(this, value);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_GET_ICON_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_GET_DESC_OFFSET))(this);
		}

		::System::String* get_LargeIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_GET_LARGEICON_OFFSET))(this);
		}

		::System::UInt32 get_Duration()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_GET_DURATION_OFFSET))(this);
		}

		::System::Boolean IsAvatarBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_ISAVATARBUFF_OFFSET))(this);
		}

		::System::Void InitByConfig(::RPG::GameCore::PlanetFesEffectRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_INITBYCONFIG_OFFSET))(this, row);
		}

		::System::Void InitSource(::RPG::Client::PlanetFesBuffSource* source)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesBuffSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_INITSOURCE_OFFSET))(this, source);
		}

		::System::String* _GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF__GETICONPATH_OFFSET))(this);
		}

		::System::String* _GetLargeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF__GETLARGEICONPATH_OFFSET))(this);
		}

		::System::String* _GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF__GETDESC_OFFSET))(this);
		}
	};
}
