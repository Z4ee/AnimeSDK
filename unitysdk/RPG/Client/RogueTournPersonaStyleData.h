#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaStyleDataBase.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xA3C7050)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3C7440)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xA3C70E0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C6FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleData_TypeDefinitionIndex = 55256;

	class RogueTournPersonaStyleData : public ::RPG::Client::RogueTournPersonaStyleDataBase
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaStyleData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaStyleData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaStyleData_TypeDefinitionIndex)->GetStaticField(0x1F620);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaStyleData* GetData(::System::UInt32 styleID)
		{
			return ((::RPG::Client::RogueTournPersonaStyleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA_GETDATA_OFFSET))(styleID);
		}

		static ::RPG::Client::RogueTournPersonaStyleData* _CreateData(::System::UInt32 styleID)
		{
			return ((::RPG::Client::RogueTournPersonaStyleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CREATEDATA_OFFSET))(styleID);
		}
	};
}
