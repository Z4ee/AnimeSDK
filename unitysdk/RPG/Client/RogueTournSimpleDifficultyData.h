#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xA3D5530)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0xA3D5410)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA3D5640)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_HASSUBLEVEL_OFFSET UNITYSDK_OFFSET(0xA3D5690)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0xA3D5660)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_ROMANNUMBER_OFFSET UNITYSDK_OFFSET(0xA3D5670)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_SUBLEVELNUMBER_OFFSET UNITYSDK_OFFSET(0xA3D56A0)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA3D5650)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_SET_ROMANNUMBER_OFFSET UNITYSDK_OFFSET(0xA3D5680)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA3D55C0)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3D56B0)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA__CREATEDATA_OFFSET UNITYSDK_OFFSET(0xA3D54A0)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D5400)
#define RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA3D5720)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournSimpleDifficultyData_TypeDefinitionIndex = 55105;

	class RogueTournSimpleDifficultyData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueInstanceCacheManager_2<::RPG::GameCore::RogueTournDifficultyType, ::RPG::Client::RogueTournSimpleDifficultyData*>** StaticGet__CacheManager()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::RPG::GameCore::RogueTournDifficultyType, ::RPG::Client::RogueTournSimpleDifficultyData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournSimpleDifficultyData_TypeDefinitionIndex)->GetStaticField(0x1FB00);
		}
		::RPG::GameCore::RogueTournDifficultyType _Difficulty_k__BackingField; // 0x10
		::RPG::Client::TextID _RomanNumber_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::RogueTournSimpleDifficultyData* GetData(::RPG::GameCore::RogueTournDifficultyType difficulty)
		{
			return ((::RPG::Client::RogueTournSimpleDifficultyData*(*)(::RPG::GameCore::RogueTournDifficultyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GETDATA_OFFSET))(difficulty);
		}

		static ::RPG::Client::RogueTournSimpleDifficultyData* _CreateData(::RPG::GameCore::RogueTournDifficultyType difficulty)
		{
			return ((::RPG::Client::RogueTournSimpleDifficultyData*(*)(::RPG::GameCore::RogueTournDifficultyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA__CREATEDATA_OFFSET))(difficulty);
		}

		::System::Int32 CompareTo(::RPG::Client::IRogueTournDifficulty* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_COMPARETO_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_TOSTRING_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournDifficultyType get_Difficulty()
		{
			return ((::RPG::GameCore::RogueTournDifficultyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::RPG::GameCore::RogueTournDifficultyType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournDifficultyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_SET_DIFFICULTY_OFFSET))(this, value);
		}

		::System::Boolean get_IsHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_ISHARD_OFFSET))(this);
		}

		::RPG::Client::TextID get_RomanNumber()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_GET_ROMANNUMBER_OFFSET))(this);
		}

		::System::Void set_RomanNumber(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSIMPLEDIFFICULTYDATA_SET_ROMANNUMBER_OFFSET))(this, value);
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
