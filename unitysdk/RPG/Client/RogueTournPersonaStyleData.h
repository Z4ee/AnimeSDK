#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaStyleDataBase.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xC851960)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC851D80)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xC8519F0)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8517E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleData_TypeDefinitionIndex = 63377;

	class RogueTournPersonaStyleData : public ::RPG::Client::RogueTournPersonaStyleDataBase
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaStyleData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournPersonaStyleData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaStyleData_TypeDefinitionIndex)->GetStaticField(0x42770);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournPersonaStyleData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaStyleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournPersonaStyleData* _CreateData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournPersonaStyleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEDATA__CREATEDATA_OFFSET))(a1);
		}
	};
}
