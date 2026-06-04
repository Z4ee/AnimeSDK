#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildProtductType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildShopRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_BGPATH_OFFSET UNITYSDK_OFFSET(0xB954560)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xB954580)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0xB94A350)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB9545E0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB954540)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ID_OFFSET UNITYSDK_OFFSET(0xB94B8A0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB954910)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISLEVELRECOMMENDED_OFFSET UNITYSDK_OFFSET(0xB9548B0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0xB954870)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVELDOWNPRICE_OFFSET UNITYSDK_OFFSET(0xB954490)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVELUPPRICE_OFFSET UNITYSDK_OFFSET(0xB9543E0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB954850)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xB954470)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xB9543B0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB9545B0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_PRICES_OFFSET UNITYSDK_OFFSET(0xB9543D0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0xB954890)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xB94B3B0)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xB954520)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYTITLE_OFFSET UNITYSDK_OFFSET(0xB954610)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYVALUEFORMAT_OFFSET UNITYSDK_OFFSET(0xB954640)
#define RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYVALUEPARAMS_OFFSET UNITYSDK_OFFSET(0xB954670)
#define RPG_CLIENT_EVOLVEBUILDSKILL_SET_ISRECOMMENDED_OFFSET UNITYSDK_OFFSET(0xB954880)
#define RPG_CLIENT_EVOLVEBUILDSKILL_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB954860)
#define RPG_CLIENT_EVOLVEBUILDSKILL_SET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0xB9548A0)
#define RPG_CLIENT_EVOLVEBUILDSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xB94ECE0)
#define RPG_CLIENT_EVOLVEBUILDSKILL__ISREMOVESKILL_OFFSET UNITYSDK_OFFSET(0xB954E10)
#define RPG_CLIENT_EVOLVEBUILDSKILL__ISRESETSKILL_OFFSET UNITYSDK_OFFSET(0xB954D90)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildSkill_TypeDefinitionIndex = 59730;

	class EvolveBuildSkill : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _Prices_k__BackingField; // 0x10
		::RPG::GameCore::EvolveBuildShopRow* _Row; // 0x18
		::System::UInt32 _RecommendLevel_k__BackingField; // 0x20
		::System::UInt32 _Level_k__BackingField; // 0x24
		::System::Boolean _IsRecommended_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::GameCore::EvolveBuildShopRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildShopRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Prices()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_PRICES_OFFSET))(this);
		}

		::System::UInt32 get_LevelUpPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVELUPPRICE_OFFSET))(this);
		}

		::System::UInt32 get_LevelDownPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVELDOWNPRICE_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_MAXLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildProtductType get_SkillType()
		{
			return ((::RPG::GameCore::EvolveBuildProtductType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SKILLTYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_BgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_BGPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Category()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_DESCPARAMS_OFFSET))(this);
		}

		::RPG::Client::TextID get_SummaryTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_SummaryValueFormat()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYVALUEFORMAT_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SEASON_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_SummaryValueParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_SUMMARYVALUEPARAMS_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRecommended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISRECOMMENDED_OFFSET))(this);
		}

		::System::Void set_IsRecommended(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_SET_ISRECOMMENDED_OFFSET))(this, a1);
		}

		::System::UInt32 get_RecommendLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_RECOMMENDLEVEL_OFFSET))(this);
		}

		::System::Void set_RecommendLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_SET_RECOMMENDLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLevelRecommended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISLEVELRECOMMENDED_OFFSET))(this);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Boolean _IsResetSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL__ISRESETSKILL_OFFSET))(this);
		}

		::System::Boolean _IsRemoveSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSKILL__ISREMOVESKILL_OFFSET))(this);
		}
	};
}
