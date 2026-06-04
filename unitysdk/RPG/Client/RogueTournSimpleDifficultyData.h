#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC860810)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xC8606F0)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xC860920)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_HASSUBLEVEL_OFFSET UNITYSDK_OFFSET(0xC860970)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0xC860940)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_ROMANNUMBER_OFFSET UNITYSDK_OFFSET(0xC860950)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_SUBLEVELNUMBER_OFFSET UNITYSDK_OFFSET(0xC860980)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xC860930)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_SET_ROMANNUMBER_OFFSET UNITYSDK_OFFSET(0xC860960)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC8608A0)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC860990)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xC860780)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8606E0)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC860A10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournSimpleDifficultyData_TypeDefinitionIndex = 63226;

	class RogueTournSimpleDifficultyData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::RPG::GameCore::RogueTournDifficultyType, ::RPG::Client::RogueTournSimpleDifficultyData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::RPG::GameCore::RogueTournDifficultyType, ::RPG::Client::RogueTournSimpleDifficultyData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournSimpleDifficultyData_TypeDefinitionIndex)->GetStaticField(0x43050);
		}
		::RPG::Client::TextID _RomanNumber_k__BackingField; // 0x10
		::RPG::GameCore::RogueTournDifficultyType _Difficulty_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournSimpleDifficultyData* GetData(::RPG::GameCore::RogueTournDifficultyType a1)
		{
			return ((::RPG::Client::RogueTournSimpleDifficultyData*(*)(::RPG::GameCore::RogueTournDifficultyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GETDATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournSimpleDifficultyData* _CreateData(::RPG::GameCore::RogueTournDifficultyType a1)
		{
			return ((::RPG::Client::RogueTournSimpleDifficultyData*(*)(::RPG::GameCore::RogueTournDifficultyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA__CREATEDATA_OFFSET))(a1);
		}

		::System::Int32 CompareTo(::RPG::Client::IRogueTournDifficulty* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_TOSTRING_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournDifficultyType get_Difficulty()
		{
			return ((::RPG::GameCore::RogueTournDifficultyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::RPG::GameCore::RogueTournDifficultyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournDifficultyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_SET_DIFFICULTY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_ISHARD_OFFSET))(this);
		}

		::RPG::Client::TextID get_RomanNumber()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_ROMANNUMBER_OFFSET))(this);
		}

		::System::Void set_RomanNumber(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_SET_ROMANNUMBER_OFFSET))(this, a1);
		}

		::System::Boolean get_HasSubLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_HASSUBLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_SubLevelNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_SUBLEVELNUMBER_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
