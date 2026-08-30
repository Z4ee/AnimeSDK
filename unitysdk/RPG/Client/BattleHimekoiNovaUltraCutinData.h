#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEHIMEKOINOVAULTRACUTINDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19F66090)
#define RPG_CLIENT_BATTLEHIMEKOINOVAULTRACUTINDATA_GET_HEADICONLIST_OFFSET UNITYSDK_OFFSET(0x19F66380)
#define RPG_CLIENT_BATTLEHIMEKOINOVAULTRACUTINDATA_SET_HEADICONLIST_OFFSET UNITYSDK_OFFSET(0x19F66390)
#define RPG_CLIENT_BATTLEHIMEKOINOVAULTRACUTINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F66120)
#define RPG_CLIENT_BATTLEHIMEKOINOVAULTRACUTINDATA__INITHEADICONLIST_OFFSET UNITYSDK_OFFSET(0x19F66160)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleHimekoiNovaUltraCutinData_TypeDefinitionIndex = 71421;

	class BattleHimekoiNovaUltraCutinData : public ::System::Object
	{
	public:
		// static const ::System::String* _RANK_4_TEXTURE_PATH; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* _HeadIconList_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEHIMEKOINOVAULTRACUTINDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleHimekoiNovaUltraCutinData* Create(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::RPG::Client::BattleHimekoiNovaUltraCutinData*(*)(::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEHIMEKOINOVAULTRACUTINDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _InitHeadIconList(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEHIMEKOINOVAULTRACUTINDATA__INITHEADICONLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_HeadIconList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEHIMEKOINOVAULTRACUTINDATA_GET_HEADICONLIST_OFFSET))(this);
		}

		::System::Void set_HeadIconList(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEHIMEKOINOVAULTRACUTINDATA_SET_HEADICONLIST_OFFSET))(this, a1);
		}
	};
}
