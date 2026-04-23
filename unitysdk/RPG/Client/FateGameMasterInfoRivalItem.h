#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_30.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateClazzType.h"
#include "unitysdk/System/Object.h"

class Class_1_1244640A944D6EC9;
class Class_1_34449C8C9E6814FD;
class Class_1_47FACC21020F8B69;
class Class_1_6BEDC8B44117355B;
class Class_1_F3CA30716D4FAF92_10;
class Class_1_F9FBCC956DFCF137_10;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateGameMasterAffixInfoItem; }
namespace RPG::Client { class FateGameMasterBattleInfo; }
namespace RPG::Client { class FateGameMasterReijuAffixInfoItem; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MonsterData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CLEARRECENTMARK_OFFSET UNITYSDK_OFFSET(0xA3431C0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA340EF0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GETMONSTERS_OFFSET UNITYSDK_OFFSET(0xA342A20)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_AFFIXES_OFFSET UNITYSDK_OFFSET(0xA345DD0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_AVATARREALID_OFFSET UNITYSDK_OFFSET(0xA345D80)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAMEICONPATH_OFFSET UNITYSDK_OFFSET(0xA343AD0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAMESMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xA343BF0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAME_OFFSET UNITYSDK_OFFSET(0xA343880)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZSMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xA3439B0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZ_OFFSET UNITYSDK_OFFSET(0xA3436F0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_HP_OFFSET UNITYSDK_OFFSET(0xA345DA0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xA343630)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERICONPATH_OFFSET UNITYSDK_OFFSET(0xA3433C0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERNAME_OFFSET UNITYSDK_OFFSET(0xA343300)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xA343520)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xA345DB0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_PASSIVEDESC_OFFSET UNITYSDK_OFFSET(0xA343F30)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_PASSIVENAME_OFFSET UNITYSDK_OFFSET(0xA343E00)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_RANKING_OFFSET UNITYSDK_OFFSET(0xA345DC0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_REIJUAFFIXES_OFFSET UNITYSDK_OFFSET(0xA345DE0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA345D90)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET__CLZROW_OFFSET UNITYSDK_OFFSET(0xA344830)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA3447D0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_ISRECENTLYBANNED_OFFSET UNITYSDK_OFFSET(0xA343110)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_ISSHOWPASSIVEPOPUP_OFFSET UNITYSDK_OFFSET(0xA342DD0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_SETPASSIVEPOPUPSEEN_OFFSET UNITYSDK_OFFSET(0xA342F40)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xA3449B0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA344740)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__GETPASSIVETEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xA345BC0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__REFRESHAVATARDATA_OFFSET UNITYSDK_OFFSET(0xA344AB0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__SYNCAFFIXES_OFFSET UNITYSDK_OFFSET(0xA344B20)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__SYNCREIJUAFFIXES_OFFSET UNITYSDK_OFFSET(0xA345090)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterInfoRivalItem_TypeDefinitionIndex = 58960;

	class FateGameMasterInfoRivalItem : public ::System::Object
	{
	public:
		::RPG::Client::FateGameMasterBattleInfo* _OwnerRef; // 0x10
		::RPG::Client::IAvatarInfoProvider* _AvatarData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterAffixInfoItem*>* _Affixes; // 0x20
		::Class_1_F9FBCC956DFCF137_10* _ParameterProxyFactory; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterReijuAffixInfoItem*>* _ReijuAffixes; // 0x30
		::Class_1_1244640A944D6EC9* _DynamicParamTextData; // 0x38
		::Enum_3_DB663931210BBC27_30 _Status; // 0x40
		::System::Int32 _HP; // 0x44
		::System::Boolean _IsRecentlyBanned; // 0x48
		::System::UInt32 _AvatarRealID; // 0x4C
		::System::UInt32 _Ranking; // 0x50
		::System::UInt32 _MaxHP; // 0x54

		::System::Void _ctor(::System::UInt32 avatarRealID, ::RPG::Client::FateGameMasterBattleInfo* owner, ::Class_1_F9FBCC956DFCF137_10* factory)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::FateGameMasterBattleInfo*, ::Class_1_F9FBCC956DFCF137_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__CTOR_OFFSET))(this, avatarRealID, owner, factory);
		}

		static ::RPG::Client::FateGameMasterInfoRivalItem* Create(::System::UInt32 avatarRealID, ::RPG::Client::FateGameMasterBattleInfo* owner, ::Class_1_F9FBCC956DFCF137_10* factory)
		{
			return ((::RPG::Client::FateGameMasterInfoRivalItem*(*)(::System::UInt32, ::RPG::Client::FateGameMasterBattleInfo*, ::Class_1_F9FBCC956DFCF137_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CREATE_OFFSET))(avatarRealID, owner, factory);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsters(::System::UInt32 worldLevel)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GETMONSTERS_OFFSET))(this, worldLevel);
		}

		::System::Boolean IsShowPassivePopUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_ISSHOWPASSIVEPOPUP_OFFSET))(this);
		}

		::System::Void SetPassivePopUpSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_SETPASSIVEPOPUPSEEN_OFFSET))(this);
		}

		::System::Boolean IsRecentlyBanned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_ISRECENTLYBANNED_OFFSET))(this);
		}

		::System::Void ClearRecentMark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CLEARRECENTMARK_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F3CA30716D4FAF92_10* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_SYNC_OFFSET))(this, proto);
		}

		::System::Void _RefreshAvatarData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__REFRESHAVATARDATA_OFFSET))(this);
		}

		::System::Void _SyncAffixes(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_47FACC21020F8B69*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_47FACC21020F8B69*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__SYNCAFFIXES_OFFSET))(this, proto);
		}

		::System::Void _SyncReijuAffixes(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_47FACC21020F8B69*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_47FACC21020F8B69*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__SYNCREIJUAFFIXES_OFFSET))(this, proto);
		}

		::Il2CppArray<::System::Object*>* _GetPassiveTextParamList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__GETPASSIVETEXTPARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_AvatarRealID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_AVATARREALID_OFFSET))(this);
		}

		::System::String* get_MasterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERNAME_OFFSET))(this);
		}

		::System::String* get_MasterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERICONPATH_OFFSET))(this);
		}

		::System::String* get_MasterRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_MasterFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERFIGUREPATH_OFFSET))(this);
		}

		::RPG::GameCore::FateClazzType get_Clazz()
		{
			return ((::RPG::GameCore::FateClazzType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZ_OFFSET))(this);
		}

		::RPG::Client::TextID get_ClazzName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAME_OFFSET))(this);
		}

		::System::String* get_ClazzSmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZSMALLICONPATH_OFFSET))(this);
		}

		::System::String* get_ClazzNameIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAMEICONPATH_OFFSET))(this);
		}

		::System::String* get_ClazzNameSmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAMESMALLICONPATH_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_30 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_30(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_STATUS_OFFSET))(this);
		}

		::System::Int32 get_HP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_HP_OFFSET))(this);
		}

		::System::UInt32 get_MaxHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MAXHP_OFFSET))(this);
		}

		::System::UInt32 get_Ranking()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_RANKING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterAffixInfoItem*>* get_Affixes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterAffixInfoItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_AFFIXES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterReijuAffixInfoItem*>* get_ReijuAffixes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterReijuAffixInfoItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_REIJUAFFIXES_OFFSET))(this);
		}

		::RPG::Client::TextID get_PassiveName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_PASSIVENAME_OFFSET))(this);
		}

		::System::String* get_PassiveDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_PASSIVEDESC_OFFSET))(this);
		}

		::Class_1_6BEDC8B44117355B* get__Row()
		{
			return ((::Class_1_6BEDC8B44117355B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET__ROW_OFFSET))(this);
		}

		::Class_1_34449C8C9E6814FD* get__ClzRow()
		{
			return ((::Class_1_34449C8C9E6814FD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET__CLZROW_OFFSET))(this);
		}
	};
}
