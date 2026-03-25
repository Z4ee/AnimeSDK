#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_10.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_672;
class Class_1_0C037D6A61EBBE9D;
class Class_1_2325E4073E18D39D_3;
class Class_1_355C62D538F2A42A;
class Class_1_4172F4030D1E5435;
class Class_1_4C788238C0410EC9_6;
class Class_1_5FEFAED860528596_68;
class Class_1_66862AB7DE1A78FE;
class Class_1_66C869DF1F46CC10;
class Class_1_66C869DF1F46CC10_1;
class Class_1_BB4B99DE4C2501EC_6;
class Class_1_DE147B6E78BA2BC2;
class Class_1_E7C4009BCC22497A_60;
class Class_1_FA4F4A67B1C04320_665;
class Class_1_FF746D82C24EA645_1;
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

#define CLASS_1_8E5011686777C86C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A41950)
#define CLASS_1_8E5011686777C86C_GETALLAPPLYLIST_OFFSET UNITYSDK_OFFSET(0x10A405E0)
#define CLASS_1_8E5011686777C86C_GETALLFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x10A3F8B0)
#define CLASS_1_8E5011686777C86C_GETAPPLYLIST_OFFSET UNITYSDK_OFFSET(0x10A40320)
#define CLASS_1_8E5011686777C86C_GETDEMANDCARDPIECELIST_OFFSET UNITYSDK_OFFSET(0x10A3FCC0)
#define CLASS_1_8E5011686777C86C_GETEXTRALCARDPIECESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x10A3A990)
#define CLASS_1_8E5011686777C86C_GETFREEAPPLYLIST_OFFSET UNITYSDK_OFFSET(0x10A408C0)
#define CLASS_1_8E5011686777C86C_GETFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x10A3FBA0)
#define CLASS_1_8E5011686777C86C_GETOFFERLISTWITHOUTCHECK_OFFSET UNITYSDK_OFFSET(0x10A40EF0)
#define CLASS_1_8E5011686777C86C_GETOFFERLIST_OFFSET UNITYSDK_OFFSET(0x10A40C90)
#define CLASS_1_8E5011686777C86C_GETPERMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0x10A3F870)
#define CLASS_1_8E5011686777C86C_GETPERSONALRANK_OFFSET UNITYSDK_OFFSET(0x10A41250)
#define CLASS_1_8E5011686777C86C_GETPRESENTCARDPIECELIST_OFFSET UNITYSDK_OFFSET(0x10A3FEA0)
#define CLASS_1_8E5011686777C86C_GETPRESENTLISTWITHOUTCHECK_OFFSET UNITYSDK_OFFSET(0x10A40290)
#define CLASS_1_8E5011686777C86C_GETPRESENTLIST_OFFSET UNITYSDK_OFFSET(0x10A40060)
#define CLASS_1_8E5011686777C86C_GETRANK_OFFSET UNITYSDK_OFFSET(0x10A41030)
#define CLASS_1_8E5011686777C86C_GETTODAYAPPLYCOUNT_OFFSET UNITYSDK_OFFSET(0x10A40FB0)
#define CLASS_1_8E5011686777C86C_GETTODAYPRESENTCOUNT_OFFSET UNITYSDK_OFFSET(0x10A40FF0)
#define CLASS_1_8E5011686777C86C_GETTOTALCARDPIECESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x10A3A920)
#define CLASS_1_8E5011686777C86C_METHOD_1_01EFA4CAA7BDD96D_OFFSET UNITYSDK_OFFSET(0x10A3E190)
#define CLASS_1_8E5011686777C86C_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x10A3F0E0)
#define CLASS_1_8E5011686777C86C_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x10A3E350)
#define CLASS_1_8E5011686777C86C_METHOD_1_21F62A08D3150D01_OFFSET UNITYSDK_OFFSET(0x10A3C960)
#define CLASS_1_8E5011686777C86C_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x10A3F730)
#define CLASS_1_8E5011686777C86C_METHOD_1_44215C0DEE24CEF9_OFFSET UNITYSDK_OFFSET(0x10A41290)
#define CLASS_1_8E5011686777C86C_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x10A3A8B0)
#define CLASS_1_8E5011686777C86C_METHOD_1_65EC817A848CC5A3_OFFSET UNITYSDK_OFFSET(0x10A3F9E0)
#define CLASS_1_8E5011686777C86C_METHOD_1_6815AD8D97959763_OFFSET UNITYSDK_OFFSET(0x10A3C270)
#define CLASS_1_8E5011686777C86C_METHOD_1_6BFEA84DA411C1A5_1_OFFSET UNITYSDK_OFFSET(0x10A3D500)
#define CLASS_1_8E5011686777C86C_METHOD_1_6BFEA84DA411C1A5_OFFSET UNITYSDK_OFFSET(0x10A3D270)
#define CLASS_1_8E5011686777C86C_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0x10A40B80)
#define CLASS_1_8E5011686777C86C_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x10A41900)
#define CLASS_1_8E5011686777C86C_METHOD_1_8A295C6FC3A23A45_OFFSET UNITYSDK_OFFSET(0x10A3C650)
#define CLASS_1_8E5011686777C86C_METHOD_1_B20A72151139C4FB_OFFSET UNITYSDK_OFFSET(0x10A3C880)
#define CLASS_1_8E5011686777C86C_METHOD_1_B214F97C7AAA732F_OFFSET UNITYSDK_OFFSET(0x10A3EB30)
#define CLASS_1_8E5011686777C86C_METHOD_1_B61FF41D45EBDE24_OFFSET UNITYSDK_OFFSET(0x10A3F140)
#define CLASS_1_8E5011686777C86C_METHOD_1_B877181B6123B7F6_1_OFFSET UNITYSDK_OFFSET(0x10A414F0)
#define CLASS_1_8E5011686777C86C_METHOD_1_B877181B6123B7F6_2_OFFSET UNITYSDK_OFFSET(0x10A41700)
#define CLASS_1_8E5011686777C86C_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x10A412F0)
#define CLASS_1_8E5011686777C86C_METHOD_1_C88D7CA1372C568F_OFFSET UNITYSDK_OFFSET(0x10A3D790)
#define CLASS_1_8E5011686777C86C_METHOD_1_CCB4431A86AEC681_OFFSET UNITYSDK_OFFSET(0x10A3AA00)
#define CLASS_1_8E5011686777C86C_METHOD_1_DBAFB3822F104C31_OFFSET UNITYSDK_OFFSET(0x10A3EBE0)
#define CLASS_1_8E5011686777C86C_METHOD_1_E6A464C09590E175_OFFSET UNITYSDK_OFFSET(0x10A3B9A0)
#define CLASS_1_8E5011686777C86C_METHOD_1_F7097473EC9DE578_OFFSET UNITYSDK_OFFSET(0x10A3D840)
#define CLASS_1_8E5011686777C86C_METHOD_1_F8D1399F1CCCBB77_1_OFFSET UNITYSDK_OFFSET(0x10A3C170)
#define CLASS_1_8E5011686777C86C_METHOD_1_F8D1399F1CCCBB77_OFFSET UNITYSDK_OFFSET(0x10A3C080)
#define CLASS_1_8E5011686777C86C__CTOR_OFFSET UNITYSDK_OFFSET(0x10A3A580)

inline static constexpr unsigned int Class_1_8E5011686777C86C_TypeDefinitionIndex = 54182;

class Class_1_8E5011686777C86C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_DE147B6E78BA2BC2*>* Field_1_5; // 0x10
	::RPG::Client::Promises::Promise* Field_1_18; // 0x18
	::RPG::Client::Promises::Promise* Field_1_15; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesTradingCardFriendsItem*>* Field_1_8; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRankDataItem*>* Field_1_6; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::PlanetFesTradingCardOfferItem*>* Field_1_9; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* Field_1_4; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesTradingCardApplyItem*>* Field_1_3; // 0x58
	::RPG::Client::PlanetFesRankDataItem* Field_1_7; // 0x60
	::System::UInt32 Field_1_16; // 0x68
	::System::UInt32 Field_1_10; // 0x6C
	::System::UInt32 Field_1_11; // 0x70
	::System::Boolean Field_1_12; // 0x74
	::System::Boolean Field_1_13; // 0x75
	::System::Boolean Field_1_14; // 0x76
	::Enum_3_0A3761FE34514D6C_10 Field_1_2; // 0x78
	::System::UInt32 Field_1_22; // 0x7C
	::System::UInt32 Field_1_20; // 0x80
	::System::UInt32 Field_1_21; // 0x84
	::System::UInt32 Field_1_19; // 0x88
	::System::UInt32 Field_1_17; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetTotalCardPieceSnapShot()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETTOTALCARDPIECESNAPSHOT_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetExtralCardPieceSnapShot()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETEXTRALCARDPIECESNAPSHOT_OFFSET))(this);
	}

	::System::Void Method_1_CCB4431A86AEC681(::Class_1_4C788238C0410EC9_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C788238C0410EC9_6*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_CCB4431A86AEC681_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6A464C09590E175(::Class_1_5FEFAED860528596_68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_68*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_E6A464C09590E175_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8D1399F1CCCBB77(::Class_1_66C869DF1F46CC10_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66C869DF1F46CC10_1*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_F8D1399F1CCCBB77_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8D1399F1CCCBB77_1(::Class_1_355C62D538F2A42A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355C62D538F2A42A*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_F8D1399F1CCCBB77_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6815AD8D97959763(::Class_1_4172F4030D1E5435* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4172F4030D1E5435*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_6815AD8D97959763_OFFSET))(this, a1);
	}

	::System::Void Method_1_B20A72151139C4FB(::Class_1_FA4F4A67B1C04320_665* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_665*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_B20A72151139C4FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_21F62A08D3150D01(::Class_1_0C037D6A61EBBE9D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C037D6A61EBBE9D*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_21F62A08D3150D01_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7097473EC9DE578(::Class_1_BB4B99DE4C2501EC_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_F7097473EC9DE578_OFFSET))(this, a1);
	}

	::System::Void Method_1_13696A527CD9CA86(::Class_1_66862AB7DE1A78FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66862AB7DE1A78FE*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_13696A527CD9CA86_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBAFB3822F104C31(::Class_1_FF746D82C24EA645_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF746D82C24EA645_1*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_DBAFB3822F104C31_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_66C869DF1F46CC10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66C869DF1F46CC10*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_B61FF41D45EBDE24(::Class_1_E7C4009BCC22497A_60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_60*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_B61FF41D45EBDE24_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B5C6D652C514B37(::Class_1_2325E4073E18D39D_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2325E4073E18D39D_3*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_3B5C6D652C514B37_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_10 GetPermissionType()
	{
		return ((::Enum_3_0A3761FE34514D6C_10(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETPERMISSIONTYPE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>* GetAllFriendData()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETALLFRIENDDATA_OFFSET))(this);
	}

	::RPG::Client::PlanetFesTradingCardFriendsItem* GetFriendData(::System::UInt32 a1)
	{
		return ((::RPG::Client::PlanetFesTradingCardFriendsItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETFRIENDDATA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* GetDemandCardPieceList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETDEMANDCARDPIECELIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* GetPresentCardPieceList(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETPRESENTCARDPIECELIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DE147B6E78BA2BC2*>* GetPresentList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DE147B6E78BA2BC2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETPRESENTLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_DE147B6E78BA2BC2*>* GetPresentListWithoutCheck()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DE147B6E78BA2BC2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETPRESENTLISTWITHOUTCHECK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* GetApplyList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETAPPLYLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* GetAllApplyList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETALLAPPLYLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* GetFreeApplyList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETFREEAPPLYLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardOfferItem*>* GetOfferList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardOfferItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETOFFERLIST_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardOfferItem*>* GetOfferListWithoutCheck()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardOfferItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETOFFERLISTWITHOUTCHECK_OFFSET))(this);
	}

	::System::UInt32 GetTodayApplyCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETTODAYAPPLYCOUNT_OFFSET))(this);
	}

	::System::UInt32 GetTodayPresentCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETTODAYPRESENTCOUNT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRankDataItem*>* GetRank()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRankDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETRANK_OFFSET))(this);
	}

	::RPG::Client::PlanetFesRankDataItem* GetPersonalRank()
	{
		return ((::RPG::Client::PlanetFesRankDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_GETPERSONALRANK_OFFSET))(this);
	}

	::System::Void Method_1_01EFA4CAA7BDD96D(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_01EFA4CAA7BDD96D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8A295C6FC3A23A45(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_8A295C6FC3A23A45_OFFSET))(this, a1);
	}

	::System::Void Method_1_B214F97C7AAA732F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_B214F97C7AAA732F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C88D7CA1372C568F(::System::UInt32 a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_C88D7CA1372C568F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_6BFEA84DA411C1A5()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_6BFEA84DA411C1A5_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_6BFEA84DA411C1A5_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_6BFEA84DA411C1A5_1_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_B877181B6123B7F6_1_OFFSET))(this);
	}

	::System::Void Method_1_B877181B6123B7F6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_B877181B6123B7F6_2_OFFSET))(this);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_672*>* Method_1_65EC817A848CC5A3(::System::Collections::ICollection* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_672*>*(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_65EC817A848CC5A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::NetworkManager* Method_1_44215C0DEE24CEF9()
	{
		return ((::RPG::Client::NetworkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_44215C0DEE24CEF9_OFFSET))(this);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5011686777C86C_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}
};
