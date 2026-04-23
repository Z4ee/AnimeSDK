#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonopolyAssetConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_ASSETDESC_OFFSET UNITYSDK_OFFSET(0xAA96D70)
#define RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0xAA96CA0)
#define RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_BONUSVALUE_OFFSET UNITYSDK_OFFSET(0xAA96AB0)
#define RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0xAA96BF0)
#define RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_ID_OFFSET UNITYSDK_OFFSET(0xAA969D0)
#define RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAA969F0)
#define RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xAA96B50)
#define RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_TAXVALUE_OFFSET UNITYSDK_OFFSET(0xAA96A10)
#define RPG_CLIENT_MONOPOLYASSETWRAPPER_GET__ROW_OFFSET UNITYSDK_OFFSET(0xAA96960)
#define RPG_CLIENT_MONOPOLYASSETWRAPPER_SET_ID_OFFSET UNITYSDK_OFFSET(0xAA969E0)
#define RPG_CLIENT_MONOPOLYASSETWRAPPER_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAA96A00)
#define RPG_CLIENT_MONOPOLYASSETWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA96950)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyAssetWrapper_TypeDefinitionIndex = 60970;

	class MonopolyAssetWrapper : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETWRAPPER__CTOR_OFFSET))(this, id, level);
		}

		::RPG::GameCore::MonopolyAssetConfigRow* get__Row()
		{
			return ((::RPG::GameCore::MonopolyAssetConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETWRAPPER_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETWRAPPER_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETWRAPPER_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_TaxValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_TAXVALUE_OFFSET))(this);
		}

		::System::UInt32 get_BonusValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_BONUSVALUE_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_PRICE_OFFSET))(this);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_FIGUREPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_AssetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_ASSETNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_AssetDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYASSETWRAPPER_GET_ASSETDESC_OFFSET))(this);
		}
	};
}
