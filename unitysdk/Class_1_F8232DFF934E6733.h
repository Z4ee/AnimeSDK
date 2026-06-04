#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_10.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_823;
class Class_1_36E3880E987172D7_7;
class Class_1_455008579EB95638_73;
class Class_1_667AAF86D0A761FB;
class Class_1_875AA3E31F445B46;
class Class_1_875AA3E31F445B46_1;
class Class_1_8AFE572D3B5BA107;
class Class_1_946C8BC94E6B6DA1_8;
class Class_1_A2967FAA88DD8F73;
class Class_1_B87B938F2BCBD84D_5;
class Class_1_BFE5EE5C9B965FB7;
class Class_1_CA0C5075F115F37C;
class Class_1_D17272E82AE804C2_734;
class Class_1_D40936EF3BF54118_75;
class Class_1_EFF6ABE3B36522D9_3;
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

#define CLASS_1_F8232DFF934E6733_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143A5B10)
#define CLASS_1_F8232DFF934E6733_GETALLAPPLYLIST_OFFSET UNITYSDK_OFFSET(0x143A4500)
#define CLASS_1_F8232DFF934E6733_GETALLFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x143A3600)
#define CLASS_1_F8232DFF934E6733_GETAPPLYLIST_OFFSET UNITYSDK_OFFSET(0x143A4160)
#define CLASS_1_F8232DFF934E6733_GETDEMANDCARDPIECELIST_OFFSET UNITYSDK_OFFSET(0x143A3A90)
#define CLASS_1_F8232DFF934E6733_GETEXTRALCARDPIECESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1439DF50)
#define CLASS_1_F8232DFF934E6733_GETFREEAPPLYLIST_OFFSET UNITYSDK_OFFSET(0x143A4830)
#define CLASS_1_F8232DFF934E6733_GETFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x143A39C0)
#define CLASS_1_F8232DFF934E6733_GETOFFERLISTWITHOUTCHECK_OFFSET UNITYSDK_OFFSET(0x143A4FA0)
#define CLASS_1_F8232DFF934E6733_GETOFFERLIST_OFFSET UNITYSDK_OFFSET(0x143A4C50)
#define CLASS_1_F8232DFF934E6733_GETPERMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0x143A35B0)
#define CLASS_1_F8232DFF934E6733_GETPERSONALRANK_OFFSET UNITYSDK_OFFSET(0x143A5410)
#define CLASS_1_F8232DFF934E6733_GETPRESENTCARDPIECELIST_OFFSET UNITYSDK_OFFSET(0x143A3CD0)
#define CLASS_1_F8232DFF934E6733_GETPRESENTLISTWITHOUTCHECK_OFFSET UNITYSDK_OFFSET(0x143A40D0)
#define CLASS_1_F8232DFF934E6733_GETPRESENTLIST_OFFSET UNITYSDK_OFFSET(0x143A3E80)
#define CLASS_1_F8232DFF934E6733_GETRANK_OFFSET UNITYSDK_OFFSET(0x143A5180)
#define CLASS_1_F8232DFF934E6733_GETTODAYAPPLYCOUNT_OFFSET UNITYSDK_OFFSET(0x143A5100)
#define CLASS_1_F8232DFF934E6733_GETTODAYPRESENTCOUNT_OFFSET UNITYSDK_OFFSET(0x143A5140)
#define CLASS_1_F8232DFF934E6733_GETTOTALCARDPIECESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1439DEE0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0x1439EFB0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x143A2C90)
#define CLASS_1_F8232DFF934E6733_METHOD_1_1454A2C87876CD3B_OFFSET UNITYSDK_OFFSET(0x143A1E80)
#define CLASS_1_F8232DFF934E6733_METHOD_1_18C62EF74E4CF096_OFFSET UNITYSDK_OFFSET(0x1439DFC0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x1439DE40)
#define CLASS_1_F8232DFF934E6733_METHOD_1_3B5C6D652C514B37_OFFSET UNITYSDK_OFFSET(0x143A3470)
#define CLASS_1_F8232DFF934E6733_METHOD_1_44215C0DEE24CEF9_OFFSET UNITYSDK_OFFSET(0x143A5450)
#define CLASS_1_F8232DFF934E6733_METHOD_1_4998A2FE6843B16A_OFFSET UNITYSDK_OFFSET(0x143A1C00)
#define CLASS_1_F8232DFF934E6733_METHOD_1_676E4EF2BBA9B1C2_OFFSET UNITYSDK_OFFSET(0x143A2770)
#define CLASS_1_F8232DFF934E6733_METHOD_1_6BFEA84DA411C1A5_1_OFFSET UNITYSDK_OFFSET(0x143A0EF0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_6BFEA84DA411C1A5_OFFSET UNITYSDK_OFFSET(0x143A0C60)
#define CLASS_1_F8232DFF934E6733_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0x143A4B40)
#define CLASS_1_F8232DFF934E6733_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x143A5AB0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_A2CD2A2CB00FD598_OFFSET UNITYSDK_OFFSET(0x1439FDD0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_A2ED32A02BD72558_OFFSET UNITYSDK_OFFSET(0x143A2CF0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_B214F97C7AAA732F_OFFSET UNITYSDK_OFFSET(0x143A26C0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_B2E4ED44D097E972_OFFSET UNITYSDK_OFFSET(0x143A0130)
#define CLASS_1_F8232DFF934E6733_METHOD_1_BA1BB49741CFDFE1_1_OFFSET UNITYSDK_OFFSET(0x143A56B0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_BA1BB49741CFDFE1_2_OFFSET UNITYSDK_OFFSET(0x143A58B0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x143A54B0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_BDC48CF715149E5A_OFFSET UNITYSDK_OFFSET(0x143A37D0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_C88D7CA1372C568F_OFFSET UNITYSDK_OFFSET(0x143A1180)
#define CLASS_1_F8232DFF934E6733_METHOD_1_DA4BC79B0909C9C2_OFFSET UNITYSDK_OFFSET(0x143A01F0)
#define CLASS_1_F8232DFF934E6733_METHOD_1_F7097473EC9DE578_OFFSET UNITYSDK_OFFSET(0x143A1230)
#define CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_1_OFFSET UNITYSDK_OFFSET(0x1439F810)
#define CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_2_OFFSET UNITYSDK_OFFSET(0x1439F910)
#define CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_OFFSET UNITYSDK_OFFSET(0x1439F720)
#define CLASS_1_F8232DFF934E6733__CTOR_OFFSET UNITYSDK_OFFSET(0x1439DB60)

inline static constexpr unsigned int Class_1_F8232DFF934E6733_TypeDefinitionIndex = 62269;

class Class_1_F8232DFF934E6733 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10
	::RPG::Client::PlanetFesRankDataItem* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_2; // 0x20
	::RPG::Client::Promises::Promise* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_BFE5EE5C9B965FB7*>* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesTradingCardFriendsItem*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* Field_1_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesTradingCardApplyItem*>* Field_1_7; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesRankDataItem*>* Field_1_8; // 0x50
	::RPG::Client::Promises::Promise* Field_1_9; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::PlanetFesTradingCardOfferItem*>* Field_1_10; // 0x60
	::System::UInt32 Field_1_11; // 0x68
	::System::UInt32 Field_1_12; // 0x6C
	::System::UInt32 Field_1_13; // 0x70
	::System::UInt32 Field_1_14; // 0x74
	::System::UInt32 Field_1_15; // 0x78
	::System::Boolean Field_1_16; // 0x7C
	::System::Boolean Field_1_17; // 0x7D
	::System::Boolean Field_1_18; // 0x7E
	::Enum_3_0A3761FE34514D6C_10 Field_1_19; // 0x80
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

	::System::Void Method_1_18C62EF74E4CF096(::Class_1_946C8BC94E6B6DA1_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_946C8BC94E6B6DA1_8*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_18C62EF74E4CF096_OFFSET))(this, a1);
	}

	::System::Void Method_1_00A4B38C951C5BD5(::Class_1_455008579EB95638_73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_73*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_00A4B38C951C5BD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8D1399F1CCCBB77(::Class_1_875AA3E31F445B46_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_875AA3E31F445B46_1*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8D1399F1CCCBB77_1(::Class_1_CA0C5075F115F37C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CA0C5075F115F37C*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8D1399F1CCCBB77_2(::Class_1_A2967FAA88DD8F73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2967FAA88DD8F73*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_F8D1399F1CCCBB77_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2E4ED44D097E972(::Class_1_D17272E82AE804C2_734* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_734*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_B2E4ED44D097E972_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA4BC79B0909C9C2(::Class_1_667AAF86D0A761FB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_667AAF86D0A761FB*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_DA4BC79B0909C9C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7097473EC9DE578(::Class_1_36E3880E987172D7_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36E3880E987172D7_7*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_F7097473EC9DE578_OFFSET))(this, a1);
	}

	::System::Void Method_1_1454A2C87876CD3B(::Class_1_EFF6ABE3B36522D9_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFF6ABE3B36522D9_3*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_1454A2C87876CD3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_676E4EF2BBA9B1C2(::Class_1_8AFE572D3B5BA107* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8AFE572D3B5BA107*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_676E4EF2BBA9B1C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_875AA3E31F445B46* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_875AA3E31F445B46*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2ED32A02BD72558(::Class_1_D40936EF3BF54118_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_75*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_A2ED32A02BD72558_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B5C6D652C514B37(::Class_1_B87B938F2BCBD84D_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B938F2BCBD84D_5*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_3B5C6D652C514B37_OFFSET))(this, a1);
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

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_823*>* Method_1_BDC48CF715149E5A(::System::Collections::ICollection* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_823*>*(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_BDC48CF715149E5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::NetworkManager* Method_1_44215C0DEE24CEF9()
	{
		return ((::RPG::Client::NetworkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_44215C0DEE24CEF9_OFFSET))(this);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8232DFF934E6733_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}
};
