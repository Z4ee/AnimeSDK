#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_17.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1011;
class Class_1_070964BB68D18B9F;
class Class_1_667AAF86D0A761FB;
class Class_1_73F64B93A3CFE81A;
class Class_1_7FF19F6206AF6DD7_80;
class Class_1_8AFE572D3B5BA107;
class Class_1_946C8BC94E6B6DA1_9;
class Class_1_963E317C37FB5E9A_66;
class Class_1_A2967FAA88DD8F73_1;
class Class_1_A2967FAA88DD8F73_2;
class Class_1_BFE5EE5C9B965FB7;
class Class_1_CA0C5075F115F37C;
class Class_1_D17272E82AE804C2_886;
class Class_1_D40936EF3BF54118_82;
class Class_1_E577B5580A99D425_2;
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

#define CLASS_1_F8232DFF934E6733_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1F3C60)
#define CLASS_1_F8232DFF934E6733_GETALLAPPLYLIST_OFFSET UNITYSDK_OFFSET(0xB1F25F0)
#define CLASS_1_F8232DFF934E6733_GETALLFRIENDDATA_OFFSET UNITYSDK_OFFSET(0xB1F16E0)
#define CLASS_1_F8232DFF934E6733_GETAPPLYLIST_OFFSET UNITYSDK_OFFSET(0xB1F2250)
#define CLASS_1_F8232DFF934E6733_GETDEMANDCARDPIECELIST_OFFSET UNITYSDK_OFFSET(0xB1F1B70)
#define CLASS_1_F8232DFF934E6733_GETEXTRALCARDPIECESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB1EB1C0)
#define CLASS_1_F8232DFF934E6733_GETFREEAPPLYLIST_OFFSET UNITYSDK_OFFSET(0xB1F2900)
#define CLASS_1_F8232DFF934E6733_GETFRIENDDATA_OFFSET UNITYSDK_OFFSET(0xB1F1AA0)
#define CLASS_1_F8232DFF934E6733_GETOFFERLISTWITHOUTCHECK_OFFSET UNITYSDK_OFFSET(0xB1F3070)
#define CLASS_1_F8232DFF934E6733_GETOFFERLIST_OFFSET UNITYSDK_OFFSET(0xB1F2D20)
#define CLASS_1_F8232DFF934E6733_GETPERMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0xB1F1690)
#define CLASS_1_F8232DFF934E6733_GETPERSONALRANK_OFFSET UNITYSDK_OFFSET(0xB1F3500)
#define CLASS_1_F8232DFF934E6733_GETPRESENTCARDPIECELIST_OFFSET UNITYSDK_OFFSET(0xB1F1DC0)
#define CLASS_1_F8232DFF934E6733_GETPRESENTLISTWITHOUTCHECK_OFFSET UNITYSDK_OFFSET(0xB1F21C0)
#define CLASS_1_F8232DFF934E6733_GETPRESENTLIST_OFFSET UNITYSDK_OFFSET(0xB1F1F70)
#define CLASS_1_F8232DFF934E6733_GETRANK_OFFSET UNITYSDK_OFFSET(0xB1F3270)
#define CLASS_1_F8232DFF934E6733_GETTODAYAPPLYCOUNT_OFFSET UNITYSDK_OFFSET(0xB1F31D0)
#define CLASS_1_F8232DFF934E6733_GETTODAYPRESENTCOUNT_OFFSET UNITYSDK_OFFSET(0xB1F3220)
#define CLASS_1_F8232DFF934E6733_GETTOTALCARDPIECESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xB1EB150)
#define CLASS_1_F8232DFF934E6733_METHOD_1_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0xB1EC6E0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xB1F0C50)
#define CLASS_1_F8232DFF934E6733_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0xB1EB0B0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0xB1F1550)
#define CLASS_1_F8232DFF934E6733_METHOD_1_44196695CAF284A8_1_OFFSET UNITYSDK_OFFSET(0xB1EED10)
#define CLASS_1_F8232DFF934E6733_METHOD_1_44196695CAF284A8_OFFSET UNITYSDK_OFFSET(0xB1ED170)
#define CLASS_1_F8232DFF934E6733_METHOD_1_4998A2FE6843B16A_OFFSET UNITYSDK_OFFSET(0xB1EF920)
#define CLASS_1_F8232DFF934E6733_METHOD_1_5A087A5D69501C87_OFFSET UNITYSDK_OFFSET(0xB1EFBA0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_6965D73485510063_OFFSET UNITYSDK_OFFSET(0xB1F0CB0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_6BFEA84DA411C1A5_1_OFFSET UNITYSDK_OFFSET(0xB1EE9E0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_6BFEA84DA411C1A5_OFFSET UNITYSDK_OFFSET(0xB1EE760)
#define CLASS_1_F8232DFF934E6733_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0xB1F2C10)
#define CLASS_1_F8232DFF934E6733_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xB1F3C10)
#define CLASS_1_F8232DFF934E6733_METHOD_1_875768E9C85840D0_OFFSET UNITYSDK_OFFSET(0xB1F05F0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_9256187B0678FF24_OFFSET UNITYSDK_OFFSET(0xB1EDB90)
#define CLASS_1_F8232DFF934E6733_METHOD_1_A2CD2A2CB00FD598_OFFSET UNITYSDK_OFFSET(0xB1ED770)
#define CLASS_1_F8232DFF934E6733_METHOD_1_A50644E3F2AAFB35_OFFSET UNITYSDK_OFFSET(0xB1EB230)
#define CLASS_1_F8232DFF934E6733_METHOD_1_B214F97C7AAA732F_OFFSET UNITYSDK_OFFSET(0xB1F0540)
#define CLASS_1_F8232DFF934E6733_METHOD_1_B2E4ED44D097E972_OFFSET UNITYSDK_OFFSET(0xB1EDAD0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_BDC48CF715149E5A_OFFSET UNITYSDK_OFFSET(0xB1F18B0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_C706B1EC6D2E1C64_1_OFFSET UNITYSDK_OFFSET(0xB1F37E0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_C706B1EC6D2E1C64_2_OFFSET UNITYSDK_OFFSET(0xB1F39F0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0xB1F35D0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_C72B6075E813AC45_OFFSET UNITYSDK_OFFSET(0xB1F3540)
#define CLASS_1_F8232DFF934E6733_METHOD_1_C88D7CA1372C568F_OFFSET UNITYSDK_OFFSET(0xB1EEC60)
#define CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_1_OFFSET UNITYSDK_OFFSET(0xB1ED070)
#define CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_OFFSET UNITYSDK_OFFSET(0xB1ECF80)
#define CLASS_1_F8232DFF934E6733__CTOR_OFFSET UNITYSDK_OFFSET(0xB1EAD80)

inline static constexpr unsigned int Class_1_F8232DFF934E6733_TypeDefinitionIndex = 66588;

class Class_1_F8232DFF934E6733 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_BFE5EE5C9B965FB7*>* IOGINEPMJAC; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesTradingCardFriendsItem*>* HBPKKODNDFG; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AFNDDIFLGLE; // 0x20
	::RPG::Client::Promises::Promise* AFBICONNAOO; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* AMEFLNNNDBJ; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* PNMEJLBBLMM; // 0x38
	::RPG::Client::PlanetFesRankDataItem* IHCGALDLOAA; // 0x40
	::RPG::Client::Promises::Promise* JNAEKMHFIHL; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesTradingCardApplyItem*>* HGFJBCJFENK; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::PlanetFesTradingCardOfferItem*>* BAIFFMFBBNB; // 0x58
	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRankDataItem*>* JFPIEEKNFHH; // 0x60
	::System::UInt32 PMAGGLEIGKG; // 0x68
	::System::Boolean FOMBKIFHDFK; // 0x6C
	::System::Boolean IJNFCDMEBPA; // 0x6D
	::System::Boolean BNCJMIGABMH; // 0x6E
	::System::UInt32 NFLHLHMEEJG; // 0x70
	::System::UInt32 KHHPDNKJNJC; // 0x74
	::System::UInt32 PPFAIADLJPE; // 0x78
	::System::UInt32 MGMIJCNKONC; // 0x7C
	::System::UInt32 FNAKEDEOPBI; // 0x80
	::System::UInt32 CKPNCGAONNH; // 0x84
	::Enum_3_0A3761FE34514D6C_17 GKHCONIGIMK; // 0x88
	::System::UInt32 AFBGIKIIJDC; // 0x8C

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

	::System::Void Method_1_A50644E3F2AAFB35(::Class_1_946C8BC94E6B6DA1_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_946C8BC94E6B6DA1_9*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_A50644E3F2AAFB35_OFFSET))(this, a1);
	}

	::System::Void Method_1_00A4B38C951C5BD5(::Class_1_7FF19F6206AF6DD7_80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_80*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_00A4B38C951C5BD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8D1399F1CCCBB77(::Class_1_73F64B93A3CFE81A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_73F64B93A3CFE81A*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8D1399F1CCCBB77_1(::Class_1_CA0C5075F115F37C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CA0C5075F115F37C*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_44196695CAF284A8(::Class_1_A2967FAA88DD8F73_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2967FAA88DD8F73_2*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_44196695CAF284A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2E4ED44D097E972(::Class_1_D17272E82AE804C2_886* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_886*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_B2E4ED44D097E972_OFFSET))(this, a1);
	}

	::System::Void Method_1_9256187B0678FF24(::Class_1_667AAF86D0A761FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_667AAF86D0A761FB*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_9256187B0678FF24_OFFSET))(this, a1);
	}

	::System::Void Method_1_44196695CAF284A8_1(::Class_1_E577B5580A99D425_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_2*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_44196695CAF284A8_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A087A5D69501C87(::Class_1_070964BB68D18B9F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_070964BB68D18B9F*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_5A087A5D69501C87_OFFSET))(this, a1);
	}

	::System::Void Method_1_875768E9C85840D0(::Class_1_8AFE572D3B5BA107* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8AFE572D3B5BA107*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_875768E9C85840D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_A2967FAA88DD8F73_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2967FAA88DD8F73_1*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6965D73485510063(::Class_1_D40936EF3BF54118_82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_82*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_6965D73485510063_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B5C6D652C514B37(::Class_1_963E317C37FB5E9A_66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_66*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_3B5C6D652C514B37_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_17 GetPermissionType()
	{
		return ((::Enum_3_0A3761FE34514D6C_17(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_GETPERMISSIONTYPE_OFFSET))(this);
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

	::RPG::Client::Promises::IPromise* Method_1_6BFEA84DA411C1A5()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_6BFEA84DA411C1A5_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_6BFEA84DA411C1A5_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_6BFEA84DA411C1A5_1_OFFSET))(this);
	}

	::System::Void Method_1_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_1_C706B1EC6D2E1C64_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_C706B1EC6D2E1C64_1_OFFSET))(this);
	}

	::System::Void Method_1_C706B1EC6D2E1C64_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_C706B1EC6D2E1C64_2_OFFSET))(this);
	}

	::System::Void Method_1_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_3B2051C60621D523_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1011*>* Method_1_BDC48CF715149E5A(::System::Collections::ICollection* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1011*>*(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_BDC48CF715149E5A_OFFSET))(this, a1);
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
