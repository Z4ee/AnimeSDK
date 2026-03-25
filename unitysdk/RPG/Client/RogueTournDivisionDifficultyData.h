#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA38AF50)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xA36BCB0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA38B070)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA38B080)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_HASSUBLEVEL_OFFSET UNITYSDK_OFFSET(0xA38B130)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0xA38B0A0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_ROMANNUMBER_OFFSET UNITYSDK_OFFSET(0xA38B0B0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_SUBLEVELNUMBER_OFFSET UNITYSDK_OFFSET(0xA38B140)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA38B090)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA38AFE0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA38B150)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xA38AEF0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA38AEE0)
#define RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA38B1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDivisionDifficultyData_TypeDefinitionIndex = 55103;

	class RogueTournDivisionDifficultyData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournDivisionDifficultyData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::RPG::Client::RogueTournDivisionDifficultyData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournDivisionDifficultyData_TypeDefinitionIndex)->GetStaticField(0x1D9F0);
		}
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournDivisionDifficultyData* GetData(::System::UInt32 divisionLevel)
		{
			return ((::RPG::Client::RogueTournDivisionDifficultyData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GETDATA_OFFSET))(divisionLevel);
		}

		static ::RPG::Client::RogueTournDivisionDifficultyData* _CreateData(::System::UInt32 divisionLevel)
		{
			return ((::RPG::Client::RogueTournDivisionDifficultyData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA__CREATEDATA_OFFSET))(divisionLevel);
		}

		::System::Int32 CompareTo(::RPG::Client::IRogueTournDifficulty* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_COMPARETO_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_TOSTRING_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournDifficultyType get_Difficulty()
		{
			return ((::RPG::GameCore::RogueTournDifficultyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_SET_DIVISIONLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_ISHARD_OFFSET))(this);
		}

		::RPG::Client::TextID get_RomanNumber()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_ROMANNUMBER_OFFSET))(this);
		}

		::System::Boolean get_HasSubLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_HASSUBLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_SubLevelNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA_GET_SUBLEVELNUMBER_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONDIFFICULTYDATA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
