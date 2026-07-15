#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_10.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_861;
class Class_1_08BB447FCC3DEB30;
class Class_1_667AAF86D0A761FB;
class Class_1_73F64B93A3CFE81A;
class Class_1_7FF19F6206AF6DD7_59;
class Class_1_946C8BC94E6B6DA1_8;
class Class_1_A2967FAA88DD8F73;
class Class_1_A2967FAA88DD8F73_1;
class Class_1_B87B938F2BCBD84D_7;
class Class_1_BFE5EE5C9B965FB7;
class Class_1_CA0C5075F115F37C;
class Class_1_CDDAD0E904A274CD;
class Class_1_D17272E82AE804C2_840;
class Class_1_D40936EF3BF54118_75;
class Class_1_E577B5580A99D425_3;
namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class PlanetFesRankDataItem; }
namespace RPG::Client { class PlanetFesTradingCardApplyItem; }
namespace RPG::Client { class PlanetFesTradingCardFriendsItem; }
namespace RPG::Client { class PlanetFesTradingCardOfferItem; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections { class ICollection; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F8232DFF934E6733_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14A5ACD0)
#define CLASS_1_F8232DFF934E6733_GETALLAPPLYLIST_OFFSET UNITYSDK_OFFSET(0x14A595B0)
#define CLASS_1_F8232DFF934E6733_GETALLFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x14A586A0)
#define CLASS_1_F8232DFF934E6733_GETAPPLYLIST_OFFSET UNITYSDK_OFFSET(0x14A59210)
#define CLASS_1_F8232DFF934E6733_GETDEMANDCARDPIECELIST_OFFSET UNITYSDK_OFFSET(0x14A58B30)
#define CLASS_1_F8232DFF934E6733_GETEXTRALCARDPIECESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x14A52120)
#define CLASS_1_F8232DFF934E6733_GETFREEAPPLYLIST_OFFSET UNITYSDK_OFFSET(0x14A598E0)
#define CLASS_1_F8232DFF934E6733_GETFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x14A58A60)
#define CLASS_1_F8232DFF934E6733_GETOFFERLISTWITHOUTCHECK_OFFSET UNITYSDK_OFFSET(0x14A5A050)
#define CLASS_1_F8232DFF934E6733_GETOFFERLIST_OFFSET UNITYSDK_OFFSET(0x14A59D00)
#define CLASS_1_F8232DFF934E6733_GETPERMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0x14A58660)
#define CLASS_1_F8232DFF934E6733_GETPERSONALRANK_OFFSET UNITYSDK_OFFSET(0x14A5A4C0)
#define CLASS_1_F8232DFF934E6733_GETPRESENTCARDPIECELIST_OFFSET UNITYSDK_OFFSET(0x14A58D80)
#define CLASS_1_F8232DFF934E6733_GETPRESENTLISTWITHOUTCHECK_OFFSET UNITYSDK_OFFSET(0x14A59180)
#define CLASS_1_F8232DFF934E6733_GETPRESENTLIST_OFFSET UNITYSDK_OFFSET(0x14A58F30)
#define CLASS_1_F8232DFF934E6733_GETRANK_OFFSET UNITYSDK_OFFSET(0x14A5A230)
#define CLASS_1_F8232DFF934E6733_GETTODAYAPPLYCOUNT_OFFSET UNITYSDK_OFFSET(0x14A5A1B0)
#define CLASS_1_F8232DFF934E6733_GETTODAYPRESENTCOUNT_OFFSET UNITYSDK_OFFSET(0x14A5A1F0)
#define CLASS_1_F8232DFF934E6733_GETTOTALCARDPIECESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x14A520B0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0x14A53640)
#define CLASS_1_F8232DFF934E6733_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x14A57C20)
#define CLASS_1_F8232DFF934E6733_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x14A52010)
#define CLASS_1_F8232DFF934E6733_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x14A58520)
#define CLASS_1_F8232DFF934E6733_METHOD_1_44196695CAF284A8_1_OFFSET UNITYSDK_OFFSET(0x14A55CE0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_44196695CAF284A8_OFFSET UNITYSDK_OFFSET(0x14A540E0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_4998A2FE6843B16A_OFFSET UNITYSDK_OFFSET(0x14A568F0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_5A087A5D69501C87_OFFSET UNITYSDK_OFFSET(0x14A56B70)
#define CLASS_1_F8232DFF934E6733_METHOD_1_6965D73485510063_OFFSET UNITYSDK_OFFSET(0x14A57C80)
#define CLASS_1_F8232DFF934E6733_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0x14A59BF0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x14A5AC80)
#define CLASS_1_F8232DFF934E6733_METHOD_1_875768E9C85840D0_OFFSET UNITYSDK_OFFSET(0x14A575C0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_9256187B0678FF24_OFFSET UNITYSDK_OFFSET(0x14A54B00)
#define CLASS_1_F8232DFF934E6733_METHOD_1_9A15ED11F14BB6DC_1_OFFSET UNITYSDK_OFFSET(0x14A55980)
#define CLASS_1_F8232DFF934E6733_METHOD_1_9A15ED11F14BB6DC_OFFSET UNITYSDK_OFFSET(0x14A556D0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_A2CD2A2CB00FD598_OFFSET UNITYSDK_OFFSET(0x14A546E0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_A50644E3F2AAFB35_OFFSET UNITYSDK_OFFSET(0x14A52190)
#define CLASS_1_F8232DFF934E6733_METHOD_1_B214F97C7AAA732F_OFFSET UNITYSDK_OFFSET(0x14A57510)
#define CLASS_1_F8232DFF934E6733_METHOD_1_B2E4ED44D097E972_OFFSET UNITYSDK_OFFSET(0x14A54A40)
#define CLASS_1_F8232DFF934E6733_METHOD_1_BA1BB49741CFDFE1_1_OFFSET UNITYSDK_OFFSET(0x14A5A7E0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_BA1BB49741CFDFE1_2_OFFSET UNITYSDK_OFFSET(0x14A5AA30)
#define CLASS_1_F8232DFF934E6733_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x14A5A590)
#define CLASS_1_F8232DFF934E6733_METHOD_1_BDC48CF715149E5A_OFFSET UNITYSDK_OFFSET(0x14A58870)
#define CLASS_1_F8232DFF934E6733_METHOD_1_C72B6075E813AC45_OFFSET UNITYSDK_OFFSET(0x14A5A500)
#define CLASS_1_F8232DFF934E6733_METHOD_1_C88D7CA1372C568F_OFFSET UNITYSDK_OFFSET(0x14A55C30)
#define CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_1_OFFSET UNITYSDK_OFFSET(0x14A53FE0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_OFFSET UNITYSDK_OFFSET(0x14A53EF0)
#define CLASS_1_F8232DFF934E6733__CTOR_OFFSET UNITYSDK_OFFSET(0x14A51D30)

inline static constexpr unsigned int Class_1_F8232DFF934E6733_TypeDefinitionIndex = 63635;

class Class_1_F8232DFF934E6733 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesTradingCardApplyItem*>* Field_1_0; // 0x10
	::RPG::Client::Promises::Promise* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_BFE5EE5C9B965FB7*>* Field_1_3; // 0x28
	::RPG::Client::Promises::Promise* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::PlanetFesTradingCardOfferItem*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRankDataItem*>* Field_1_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_7; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* Field_1_8; // 0x50
	::RPG::Client::PlanetFesRankDataItem* Field_1_9; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesTradingCardFriendsItem*>* Field_1_10; // 0x60
	::System::Boolean Field_1_11; // 0x68
	::System::Boolean Field_1_12; // 0x69
	::System::Boolean Field_1_13; // 0x6A
	::System::UInt32 Field_1_14; // 0x6C
	::Enum_3_0A3761FE34514D6C_10 Field_1_15; // 0x70
	::System::UInt32 Field_1_16; // 0x74
	::System::UInt32 Field_1_17; // 0x78
	::System::UInt32 Field_1_18; // 0x7C
	::System::UInt32 Field_1_19; // 0x80
	::System::UInt32 Field_1_20; // 0x84
	::System::UInt32 Field_1_21; // 0x88
	::System::UInt32 Field_1_22; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetTotalCardPieceSnapShot()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETTOTALCARDPIECESNAPSHOT_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetExtralCardPieceSnapShot()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETEXTRALCARDPIECESNAPSHOT_OFFSET))(this);
	}

	::System::Void Method_1_A50644E3F2AAFB35(::Class_1_946C8BC94E6B6DA1_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_946C8BC94E6B6DA1_8*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_A50644E3F2AAFB35_OFFSET))(this, a1);
	}

	::System::Void Method_1_00A4B38C951C5BD5(::Class_1_7FF19F6206AF6DD7_59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_59*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_00A4B38C951C5BD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8D1399F1CCCBB77(::Class_1_73F64B93A3CFE81A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73F64B93A3CFE81A*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8D1399F1CCCBB77_1(::Class_1_CA0C5075F115F37C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CA0C5075F115F37C*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_44196695CAF284A8(::Class_1_A2967FAA88DD8F73_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2967FAA88DD8F73_1*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_44196695CAF284A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2E4ED44D097E972(::Class_1_D17272E82AE804C2_840* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_840*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_B2E4ED44D097E972_OFFSET))(this, a1);
	}

	::System::Void Method_1_9256187B0678FF24(::Class_1_667AAF86D0A761FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_667AAF86D0A761FB*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_9256187B0678FF24_OFFSET))(this, a1);
	}

	::System::Void Method_1_44196695CAF284A8_1(::Class_1_E577B5580A99D425_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_3*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_44196695CAF284A8_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A087A5D69501C87(::Class_1_CDDAD0E904A274CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDDAD0E904A274CD*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_5A087A5D69501C87_OFFSET))(this, a1);
	}

	::System::Void Method_1_875768E9C85840D0(::Class_1_08BB447FCC3DEB30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_08BB447FCC3DEB30*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_875768E9C85840D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_A2967FAA88DD8F73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2967FAA88DD8F73*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6965D73485510063(::Class_1_D40936EF3BF54118_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_75*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_6965D73485510063_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B5C6D652C514B37(::Class_1_B87B938F2BCBD84D_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B938F2BCBD84D_7*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_3B5C6D652C514B37_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_10 GetPermissionType()
	{
		return ((::Enum_3_0A3761FE34514D6C_10(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETPERMISSIONTYPE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>* GetAllFriendData()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETALLFRIENDDATA_OFFSET))(this);
	}

	::RPG::Client::PlanetFesTradingCardFriendsItem* GetFriendData(::System::UInt32 a1)
	{
		return ((::RPG::Client::PlanetFesTradingCardFriendsItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETFRIENDDATA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* GetDemandCardPieceList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETDEMANDCARDPIECELIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* GetPresentCardPieceList(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETPRESENTCARDPIECELIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_BFE5EE5C9B965FB7*>* GetPresentList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_BFE5EE5C9B965FB7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETPRESENTLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_BFE5EE5C9B965FB7*>* GetPresentListWithoutCheck()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_BFE5EE5C9B965FB7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETPRESENTLISTWITHOUTCHECK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* GetApplyList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETAPPLYLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* GetAllApplyList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETALLAPPLYLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* GetFreeApplyList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETFREEAPPLYLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardOfferItem*>* GetOfferList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardOfferItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETOFFERLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardOfferItem*>* GetOfferListWithoutCheck()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardOfferItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETOFFERLISTWITHOUTCHECK_OFFSET))(this);
	}

	::System::UInt32 GetTodayApplyCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETTODAYAPPLYCOUNT_OFFSET))(this);
	}

	::System::UInt32 GetTodayPresentCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETTODAYPRESENTCOUNT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRankDataItem*>* GetRank()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRankDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETRANK_OFFSET))(this);
	}

	::RPG::Client::PlanetFesRankDataItem* GetPersonalRank()
	{
		return ((::RPG::Client::PlanetFesRankDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETPERSONALRANK_OFFSET))(this);
	}

	::System::Void Method_1_4998A2FE6843B16A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_4998A2FE6843B16A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A2CD2A2CB00FD598(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_A2CD2A2CB00FD598_OFFSET))(this, a1);
	}

	::System::Void Method_1_B214F97C7AAA732F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_B214F97C7AAA732F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C88D7CA1372C568F(::System::UInt32 a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_C88D7CA1372C568F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_9A15ED11F14BB6DC()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_9A15ED11F14BB6DC_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_9A15ED11F14BB6DC_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_9A15ED11F14BB6DC_1_OFFSET))(this);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_1_BA1BB49741CFDFE1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_BA1BB49741CFDFE1_1_OFFSET))(this);
	}

	::System::Void Method_1_BA1BB49741CFDFE1_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_BA1BB49741CFDFE1_2_OFFSET))(this);
	}

	::System::Void Method_1_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_3B2051C60621D523_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_861*>* Method_1_BDC48CF715149E5A(::System::Collections::ICollection* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_861*>*(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_BDC48CF715149E5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::NetworkManager* Method_1_C72B6075E813AC45()
	{
		return ((::RPG::Client::NetworkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_C72B6075E813AC45_OFFSET))(this);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}
};
