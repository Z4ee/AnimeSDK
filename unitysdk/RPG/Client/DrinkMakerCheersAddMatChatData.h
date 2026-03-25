#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DrinkMakerCheersEngageRow; }
namespace System { class String; }

#define RPG_CLIENT_DRINKMAKERCHEERSADDMATCHATDATA_GET_CHATTEXT_OFFSET UNITYSDK_OFFSET(0x9503A60)
#define RPG_CLIENT_DRINKMAKERCHEERSADDMATCHATDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x95039A0)
#define RPG_CLIENT_DRINKMAKERCHEERSADDMATCHATDATA_GET_INGREDIENTID_OFFSET UNITYSDK_OFFSET(0x9503960)
#define RPG_CLIENT_DRINKMAKERCHEERSADDMATCHATDATA_GET_MATCHGROUPID_OFFSET UNITYSDK_OFFSET(0x9503980)
#define RPG_CLIENT_DRINKMAKERCHEERSADDMATCHATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9503950)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersAddMatChatData_TypeDefinitionIndex = 51658;

	class DrinkMakerCheersAddMatChatData : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerCheersEngageRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::DrinkMakerCheersEngageRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DrinkMakerCheersEngageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSADDMATCHATDATA__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_IngredientID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSADDMATCHATDATA_GET_INGREDIENTID_OFFSET))(this);
		}

		::System::UInt32 get_MatchGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSADDMATCHATDATA_GET_MATCHGROUPID_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSADDMATCHATDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChatText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSADDMATCHATDATA_GET_CHATTEXT_OFFSET))(this);
		}
	};
}
