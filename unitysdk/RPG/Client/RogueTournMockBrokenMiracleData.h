#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournMiracleDataBase.h"

namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x19C37B10)
#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_CREATEDATA_OFFSET UNITYSDK_OFFSET(0x19C37A70)
#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_ISBROKEN_OFFSET UNITYSDK_OFFSET(0x19C37C10)
#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C37B60)
#define RPG_CLIENT_ROGUETOURNMOCKBROKENMIRACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19C37B00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournMockBrokenMiracleData_TypeDefinitionIndex = 64687;

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
