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

#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB0C0130)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_CREATEDATA_OFFSET UNITYSDK_OFFSET(0xB0B9400)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_DIFFCOMPS_OFFSET UNITYSDK_OFFSET(0xB0C0480)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB0C0470)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_HASSUBLEVEL_OFFSET UNITYSDK_OFFSET(0xB0C0550)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0xB0C0490)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_ROMANNUMBER_OFFSET UNITYSDK_OFFSET(0xB0C04A0)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_GET_SUBLEVELNUMBER_OFFSET UNITYSDK_OFFSET(0xB0C0560)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB0C01C0)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C00E0)
#define RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB0C05B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDiffCompDifficultyData_TypeDefinitionIndex = 62282;

	class RogueTournDiffCompDifficultyData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournDifficultyCompData*>* _DiffComps; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournDiffCompDifficultyData* CreateData(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* diffCompIDs)
		{
			return ((::RPG::Client::RogueTournDiffCompDifficultyData*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_CREATEDATA_OFFSET))(diffCompIDs);
		}

		::System::Int32 CompareTo(::RPG::Client::IRogueTournDifficulty* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA_COMPARETO_OFFSET))(this, other);
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

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFCOMPDIFFICULTYDATA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
