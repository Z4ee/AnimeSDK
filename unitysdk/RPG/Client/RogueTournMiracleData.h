#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournMiracleDataBase.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System { class Object; }

#define RPG_CLIENT_ROGUETOURNMIRACLEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xB0D2D40)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xB0D28C0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATA_ISBROKEN_OFFSET UNITYSDK_OFFSET(0xB0D2DA0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATA_ISMIRACLEEXISTS_OFFSET UNITYSDK_OFFSET(0xB0D2840)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0D2DE0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xB0D2950)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D2820)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournMiracleData_TypeDefinitionIndex = 62382;

	class RogueTournMiracleData : public ::RPG::Client::RogueTournMiracleDataBase
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournMiracleData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournMiracleData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiracleData_TypeDefinitionIndex)->GetStaticField(0x1A120);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATA__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsMiracleExists(::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATA_ISMIRACLEEXISTS_OFFSET))(miracleID);
		}

		static ::RPG::Client::RogueTournMiracleData* GetData(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::RogueTournMiracleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATA_GETDATA_OFFSET))(miracleID);
		}

		static ::RPG::Client::RogueTournMiracleData* _CreateData(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::RogueTournMiracleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATA__CREATEDATA_OFFSET))(miracleID);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATA_CLONE_OFFSET))(this);
		}

		::System::Boolean IsBroken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATA_ISBROKEN_OFFSET))(this);
		}
	};
}
