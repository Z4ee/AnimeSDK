#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesAvatarData; }
namespace RPG::Client { class PlanetFesBuffSource; }
namespace RPG::GameCore { class PlanetFesEffectRow; }
namespace RPG::GameCore { class PlanetFesEffectTypeConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_BASEPLANETFESBUFF_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC8CE240)
#define RPG_CLIENT_BASEPLANETFESBUFF_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xC8CE3A0)
#define RPG_CLIENT_BASEPLANETFESBUFF_GET_ICON_OFFSET UNITYSDK_OFFSET(0xC8CE190)
#define RPG_CLIENT_BASEPLANETFESBUFF_GET_ID_OFFSET UNITYSDK_OFFSET(0xC8CE150)
#define RPG_CLIENT_BASEPLANETFESBUFF_GET_LARGEICON_OFFSET UNITYSDK_OFFSET(0xC8CE2F0)
#define RPG_CLIENT_BASEPLANETFESBUFF_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xC8CE170)
#define RPG_CLIENT_BASEPLANETFESBUFF_INITBYCONFIG_OFFSET UNITYSDK_OFFSET(0xC8CE430)
#define RPG_CLIENT_BASEPLANETFESBUFF_INITSOURCE_OFFSET UNITYSDK_OFFSET(0xC8CE540)
#define RPG_CLIENT_BASEPLANETFESBUFF_ISAVATARBUFF_OFFSET UNITYSDK_OFFSET(0xC8CE3F0)
#define RPG_CLIENT_BASEPLANETFESBUFF_SET_ID_OFFSET UNITYSDK_OFFSET(0xC8CE160)
#define RPG_CLIENT_BASEPLANETFESBUFF_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xC8CE180)
#define RPG_CLIENT_BASEPLANETFESBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0xC8CE950)
#define RPG_CLIENT_BASEPLANETFESBUFF__GETDESC_OFFSET UNITYSDK_OFFSET(0xC8CE630)
#define RPG_CLIENT_BASEPLANETFESBUFF__GETICONPATH_OFFSET UNITYSDK_OFFSET(0xC8CE590)
#define RPG_CLIENT_BASEPLANETFESBUFF__GETLARGEICONPATH_OFFSET UNITYSDK_OFFSET(0xC8CE5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BasePlanetFesBuff_TypeDefinitionIndex = 66566;

	class BasePlanetFesBuff : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesBuffSource* _Source_k__BackingField; // 0x10
		::RPG::GameCore::PlanetFesEffectTypeConfigRow* _TypeRow; // 0x18
		::RPG::GameCore::PlanetFesEffectRow* _Row; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesBuffSource* get_Source()
		{
			return ((::RPG::Client::PlanetFesBuffSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::RPG::Client::PlanetFesBuffSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesBuffSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_SET_SOURCE_OFFSET))(this, a1);
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

		::System::Void InitByConfig(::RPG::GameCore::PlanetFesEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_INITBYCONFIG_OFFSET))(this, a1);
		}

		::System::Void InitSource(::RPG::Client::PlanetFesBuffSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesBuffSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEPLANETFESBUFF_INITSOURCE_OFFSET))(this, a1);
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
