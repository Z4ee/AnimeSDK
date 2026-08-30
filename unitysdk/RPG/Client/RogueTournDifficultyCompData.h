#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GETALLDATABYTOURN_OFFSET UNITYSDK_OFFSET(0xDF4C6A0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xDF4C5F0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GET_DIFFICULTYCOMPID_OFFSET UNITYSDK_OFFSET(0xDF4CC90)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDF4CCB0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_SET_DIFFICULTYCOMPID_OFFSET UNITYSDK_OFFSET(0xDF4CCA0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDF4CCC0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xDF4CCD0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xDF4CB30)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDF4C5E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDifficultyCompData_TypeDefinitionIndex = 67580;

	class RogueTournDifficultyCompData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournDifficultyCompData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournDifficultyCompData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournDifficultyCompData_TypeDefinitionIndex)->GetStaticField(0x11670);
		}
		::System::UInt32 _DifficultyCompID_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournDifficultyCompData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournDifficultyCompData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GETDATA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>* GetAllDataByTourn(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>*(*)(::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GETALLDATABYTOURN_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournDifficultyCompData* _CreateData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournDifficultyCompData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA__CREATEDATA_OFFSET))(a1);
		}

		::System::UInt32 get_DifficultyCompID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GET_DIFFICULTYCOMPID_OFFSET))(this);
		}

		::System::Void set_DifficultyCompID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_SET_DIFFICULTYCOMPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_SET_LEVEL_OFFSET))(this, a1);
		}
	};
}
