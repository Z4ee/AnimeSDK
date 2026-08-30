#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_10.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_912;
class Class_1_387653E25C6195CA;
class Class_1_6F289C13530086A8_2;
class Class_1_72C6D937BA5A992C;
class Class_1_73F64B93A3CFE81A;
class Class_1_7FF19F6206AF6DD7_70;
class Class_1_946C8BC94E6B6DA1_8;
class Class_1_963E317C37FB5E9A_64;
class Class_1_A2967FAA88DD8F73;
class Class_1_A2967FAA88DD8F73_1;
class Class_1_BFE5EE5C9B965FB7;
class Class_1_CA0C5075F115F37C;
class Class_1_D17272E82AE804C2_858;
class Class_1_D40936EF3BF54118_77;
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

#define CLASS_1_F8232DFF934E6733_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162E5B10)
#define CLASS_1_F8232DFF934E6733_GETALLAPPLYLIST_OFFSET UNITYSDK_OFFSET(0x162E4480)
#define CLASS_1_F8232DFF934E6733_GETALLFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x162E3570)
#define CLASS_1_F8232DFF934E6733_GETAPPLYLIST_OFFSET UNITYSDK_OFFSET(0x162E40E0)
#define CLASS_1_F8232DFF934E6733_GETDEMANDCARDPIECELIST_OFFSET UNITYSDK_OFFSET(0x162E3A00)
#define CLASS_1_F8232DFF934E6733_GETEXTRALCARDPIECESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x162DD030)
#define CLASS_1_F8232DFF934E6733_GETFREEAPPLYLIST_OFFSET UNITYSDK_OFFSET(0x162E47B0)
#define CLASS_1_F8232DFF934E6733_GETFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x162E3930)
#define CLASS_1_F8232DFF934E6733_GETOFFERLISTWITHOUTCHECK_OFFSET UNITYSDK_OFFSET(0x162E4F20)
#define CLASS_1_F8232DFF934E6733_GETOFFERLIST_OFFSET UNITYSDK_OFFSET(0x162E4BD0)
#define CLASS_1_F8232DFF934E6733_GETPERMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0x162E3530)
#define CLASS_1_F8232DFF934E6733_GETPERSONALRANK_OFFSET UNITYSDK_OFFSET(0x162E53A0)
#define CLASS_1_F8232DFF934E6733_GETPRESENTCARDPIECELIST_OFFSET UNITYSDK_OFFSET(0x162E3C50)
#define CLASS_1_F8232DFF934E6733_GETPRESENTLISTWITHOUTCHECK_OFFSET UNITYSDK_OFFSET(0x162E4050)
#define CLASS_1_F8232DFF934E6733_GETPRESENTLIST_OFFSET UNITYSDK_OFFSET(0x162E3E00)
#define CLASS_1_F8232DFF934E6733_GETRANK_OFFSET UNITYSDK_OFFSET(0x162E5110)
#define CLASS_1_F8232DFF934E6733_GETTODAYAPPLYCOUNT_OFFSET UNITYSDK_OFFSET(0x162E5080)
#define CLASS_1_F8232DFF934E6733_GETTODAYPRESENTCOUNT_OFFSET UNITYSDK_OFFSET(0x162E50D0)
#define CLASS_1_F8232DFF934E6733_GETTOTALCARDPIECESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x162DCFC0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0x162DE550)
#define CLASS_1_F8232DFF934E6733_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x162E2AF0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x162DCF20)
#define CLASS_1_F8232DFF934E6733_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x162E33F0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_44196695CAF284A8_1_OFFSET UNITYSDK_OFFSET(0x162E0BA0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_44196695CAF284A8_OFFSET UNITYSDK_OFFSET(0x162DEFF0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_4998A2FE6843B16A_OFFSET UNITYSDK_OFFSET(0x162E17C0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_5A087A5D69501C87_OFFSET UNITYSDK_OFFSET(0x162E1A40)
#define CLASS_1_F8232DFF934E6733_METHOD_1_6965D73485510063_OFFSET UNITYSDK_OFFSET(0x162E2B50)
#define CLASS_1_F8232DFF934E6733_METHOD_1_6BFEA84DA411C1A5_1_OFFSET UNITYSDK_OFFSET(0x162E0860)
#define CLASS_1_F8232DFF934E6733_METHOD_1_6BFEA84DA411C1A5_OFFSET UNITYSDK_OFFSET(0x162E05E0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0x162E4AC0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x162E5AB0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_875768E9C85840D0_OFFSET UNITYSDK_OFFSET(0x162E2490)
#define CLASS_1_F8232DFF934E6733_METHOD_1_9256187B0678FF24_OFFSET UNITYSDK_OFFSET(0x162DFA10)
#define CLASS_1_F8232DFF934E6733_METHOD_1_A2CD2A2CB00FD598_OFFSET UNITYSDK_OFFSET(0x162DF5F0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_A50644E3F2AAFB35_OFFSET UNITYSDK_OFFSET(0x162DD0A0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_B214F97C7AAA732F_OFFSET UNITYSDK_OFFSET(0x162E23E0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_B2E4ED44D097E972_OFFSET UNITYSDK_OFFSET(0x162DF950)
#define CLASS_1_F8232DFF934E6733_METHOD_1_BDC48CF715149E5A_OFFSET UNITYSDK_OFFSET(0x162E3740)
#define CLASS_1_F8232DFF934E6733_METHOD_1_C706B1EC6D2E1C64_1_OFFSET UNITYSDK_OFFSET(0x162E5680)
#define CLASS_1_F8232DFF934E6733_METHOD_1_C706B1EC6D2E1C64_2_OFFSET UNITYSDK_OFFSET(0x162E58A0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x162E5470)
#define CLASS_1_F8232DFF934E6733_METHOD_1_C72B6075E813AC45_OFFSET UNITYSDK_OFFSET(0x162E53E0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_C88D7CA1372C568F_OFFSET UNITYSDK_OFFSET(0x162E0AF0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_1_OFFSET UNITYSDK_OFFSET(0x162DEEF0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_OFFSET UNITYSDK_OFFSET(0x162DEE00)
#define CLASS_1_F8232DFF934E6733__CTOR_OFFSET UNITYSDK_OFFSET(0x162DCBF0)

inline static constexpr unsigned int Class_1_F8232DFF934E6733_TypeDefinitionIndex = 66620;

class Class_1_F8232DFF934E6733 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* AMEFLNNNDBJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesTradingCardApplyItem*>* HGFJBCJFENK; // 0x18
	::RPG::Client::Promises::Promise* AFBICONNAOO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* PNMEJLBBLMM; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRankDataItem*>* JFPIEEKNFHH; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AFNDDIFLGLE; // 0x38
	::RPG::Client::PlanetFesRankDataItem* IHCGALDLOAA; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::PlanetFesTradingCardOfferItem*>* BAIFFMFBBNB; // 0x48
	::System::Collections::Generic::List_1<::Class_1_BFE5EE5C9B965FB7*>* IOGINEPMJAC; // 0x50
	::RPG::Client::Promises::Promise* JNAEKMHFIHL; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesTradingCardFriendsItem*>* HBPKKODNDFG; // 0x60
	::System::UInt32 KHHPDNKJNJC; // 0x68
	::Enum_3_0A3761FE34514D6C_10 GKHCONIGIMK; // 0x6C
	::System::UInt32 CKPNCGAONNH; // 0x70
	::System::UInt32 AFBGIKIIJDC; // 0x74
	::System::UInt32 NFLHLHMEEJG; // 0x78
	::System::UInt32 PMAGGLEIGKG; // 0x7C
	::System::UInt32 PPFAIADLJPE; // 0x80
	::System::Boolean BNCJMIGABMH; // 0x84
	::System::Boolean FOMBKIFHDFK; // 0x85
	::System::Boolean IJNFCDMEBPA; // 0x86
	::System::UInt32 MGMIJCNKONC; // 0x88
	::System::UInt32 FNAKEDEOPBI; // 0x8C

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

	::System::Void Method_1_00A4B38C951C5BD5(::Class_1_7FF19F6206AF6DD7_70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_70*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_00A4B38C951C5BD5_OFFSET))(this, a1);
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

	::System::Void Method_1_B2E4ED44D097E972(::Class_1_D17272E82AE804C2_858* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_858*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_B2E4ED44D097E972_OFFSET))(this, a1);
	}

	::System::Void Method_1_9256187B0678FF24(::Class_1_72C6D937BA5A992C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72C6D937BA5A992C*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_9256187B0678FF24_OFFSET))(this, a1);
	}

	::System::Void Method_1_44196695CAF284A8_1(::Class_1_E577B5580A99D425_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_3*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_44196695CAF284A8_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A087A5D69501C87(::Class_1_6F289C13530086A8_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6F289C13530086A8_2*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_5A087A5D69501C87_OFFSET))(this, a1);
	}

	::System::Void Method_1_875768E9C85840D0(::Class_1_387653E25C6195CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_387653E25C6195CA*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_875768E9C85840D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_A2967FAA88DD8F73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2967FAA88DD8F73*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6965D73485510063(::Class_1_D40936EF3BF54118_77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_77*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_6965D73485510063_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B5C6D652C514B37(::Class_1_963E317C37FB5E9A_64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_64*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_3B5C6D652C514B37_OFFSET))(this, a1);
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

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_912*>* Method_1_BDC48CF715149E5A(::System::Collections::ICollection* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_912*>*(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_BDC48CF715149E5A_OFFSET))(this, a1);
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
