#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GETALLDATABYTOURN_OFFSET UNITYSDK_OFFSET(0xDF9CB10)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xDF9CA60)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GET_DIFFICULTYCOMPID_OFFSET UNITYSDK_OFFSET(0xDF9D100)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDF9D120)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_SET_DIFFICULTYCOMPID_OFFSET UNITYSDK_OFFSET(0xDF9D110)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xDF9D130)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xDF9D140)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xDF9CFA0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDF9CA50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDifficultyCompData_TypeDefinitionIndex = 67582;

	class RogueTournDifficultyCompData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournDifficultyCompData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournDifficultyCompData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournDifficultyCompData_TypeDefinitionIndex)->GetStaticField(0x6C8D0);
		}
		::System::UInt32 _Level_k__BackingField; // 0x10
		::System::UInt32 _DifficultyCompID_k__BackingField; // 0x14

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
