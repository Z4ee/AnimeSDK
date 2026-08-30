#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class RogueTournDifficultyCompData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1AF10060)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_CREATEDATA_OFFSET UNITYSDK_OFFSET(0x1AF07250)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_DIFFCOMPS_OFFSET UNITYSDK_OFFSET(0x1AF101B0)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1AF10420)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_HASSUBLEVEL_OFFSET UNITYSDK_OFFSET(0x1AF10560)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0x1AF10470)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_ROMANNUMBER_OFFSET UNITYSDK_OFFSET(0x1AF104B0)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_SUBLEVELNUMBER_OFFSET UNITYSDK_OFFSET(0x1AF105A0)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AF100F0)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF10010)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDiffCompDifficultyData_TypeDefinitionIndex = 67578;

	class RogueTournDiffCompDifficultyData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournDifficultyCompData*>* _DiffComps; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournDiffCompDifficultyData* CreateData(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::RogueTournDiffCompDifficultyData*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_CREATEDATA_OFFSET))(a1);
		}

		::System::Int32 CompareTo(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_TOSTRING_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournDifficultyType get_Difficulty()
		{
			return ((::RPG::GameCore::RogueTournDifficultyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>* get_DiffComps()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::RogueTournDifficultyCompData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_DIFFCOMPS_OFFSET))(this);
		}

		::System::Boolean get_IsHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_ISHARD_OFFSET))(this);
		}

		::RPG::Client::TextID get_RomanNumber()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_ROMANNUMBER_OFFSET))(this);
		}

		::System::Boolean get_HasSubLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_HASSUBLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_SubLevelNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_SUBLEVELNUMBER_OFFSET))(this);
		}
	};
}
