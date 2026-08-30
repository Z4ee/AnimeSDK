#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAffixRarityType.h"
#include "unitysdk/System/Object.h"

class Class_1_09E0962946DC82E9;
class Class_1_32161F1E0F11BEF4;
class Class_1_47FACC21020F8B69;
class Class_1_F9FBCC956DFCF137_18;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_BUILDMONSTERSPOOLED_OFFSET UNITYSDK_OFFSET(0x1C182D90)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1C182720)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_AFFIXID_OFFSET UNITYSDK_OFFSET(0x1C1831C0)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_EFFECTDESC_OFFSET UNITYSDK_OFFSET(0x1C1835E0)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x1C183860)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_IDFORSORT_OFFSET UNITYSDK_OFFSET(0x1C183240)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_ISDEACTIVATED_OFFSET UNITYSDK_OFFSET(0x1C183910)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C1832A0)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1C183540)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C183200)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET__MAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0x1C183470)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET__MONSTERSDEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0x1C183950)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1C182CB0)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x1C182D10)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1826C0)
#define RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM__GETTEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1C183000)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterAffixInfoItem_TypeDefinitionIndex = 64148;

	class FateGameMasterAffixInfoItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _MonsterIDs; // 0x10
		::Class_1_32161F1E0F11BEF4* _DynamicParamTextData; // 0x18
		::System::Boolean _IsDeactivated; // 0x20
		::System::UInt32 _AffixID; // 0x24
		::System::UInt32 _UniqueID; // 0x28

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateGameMasterAffixInfoItem* Create(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_F9FBCC956DFCF137_18* a3)
		{
			return ((::RPG::Client::FateGameMasterAffixInfoItem*(*)(::System::UInt32, ::System::UInt32, ::Class_1_F9FBCC956DFCF137_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void Sync(::Class_1_47FACC21020F8B69* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_47FACC21020F8B69*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_SYNC_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::RPG::Client::MonsterData*>* BuildMonstersPooled(::System::UInt32 a1)
		{
			return ((::RPG::PoolList_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_BUILDMONSTERSPOOLED_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* _GetTextParamList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM__GETTEXTPARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_AffixID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_AFFIXID_OFFSET))(this);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_UNIQUEID_OFFSET))(this);
		}

		::System::UInt32 get_IDForSort()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_IDFORSORT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::FateAffixRarityType get_Rarity()
		{
			return ((::RPG::GameCore::FateAffixRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_RARITY_OFFSET))(this);
		}

		::System::String* get_EffectDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_EFFECTDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}

		::System::Boolean get_IsDeactivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET_ISDEACTIVATED_OFFSET))(this);
		}

		::Class_1_09E0962946DC82E9* get__Row()
		{
			return ((::Class_1_09E0962946DC82E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get__MazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET__MAZEBUFFROW_OFFSET))(this);
		}

		::System::String* get__MonstersDebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERAFFIXINFOITEM_GET__MONSTERSDEBUGGERDISPLAY_OFFSET))(this);
		}
	};
}
