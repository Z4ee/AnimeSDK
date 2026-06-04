#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournMiracleDataBase.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xC8246C0)
#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_CREATEDATA_OFFSET UNITYSDK_OFFSET(0xC824620)
#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_ISBROKEN_OFFSET UNITYSDK_OFFSET(0xC8247C0)
#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC824710)
#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8246B0)
#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC824800)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournMockBrokenMiracleData_TypeDefinitionIndex = 63320;

	class RogueTournMockBrokenMiracleData : public ::RPG::Client::RogueTournMiracleDataBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournMockBrokenMiracleData* CreateData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournMockBrokenMiracleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_CREATEDATA_OFFSET))(a1);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_CLONE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsBroken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_ISBROKEN_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
