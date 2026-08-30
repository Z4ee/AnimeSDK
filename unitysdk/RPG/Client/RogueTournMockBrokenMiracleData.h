#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournMiracleDataBase.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xDF64DA0)
#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_CREATEDATA_OFFSET UNITYSDK_OFFSET(0xDF64D00)
#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_ISBROKEN_OFFSET UNITYSDK_OFFSET(0xDF64EA0)
#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDF64DF0)
#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDF64D90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournMockBrokenMiracleData_TypeDefinitionIndex = 67683;

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
	};
}
