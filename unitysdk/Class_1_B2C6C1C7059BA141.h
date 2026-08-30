#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_1.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/RPG/Client/LineupRecommendationType.h"
#include "unitysdk/System/Object.h"

class Class_1_5EBF6005039A39B5;
class Class_1_6D0244BBBB07BA13_1;
class Class_1_83178EB088CAD885_2;
class Class_1_A7A42CB240A0440F_1;
class Class_1_D40936EF3BF54118_37;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B2C6C1C7059BA141_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A014F70)
#define CLASS_1_B2C6C1C7059BA141_GETLINEUPDETAILINFO_OFFSET UNITYSDK_OFFSET(0x1A015210)
#define CLASS_1_B2C6C1C7059BA141_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x1A0147A0)
#define CLASS_1_B2C6C1C7059BA141_GET_COUNTOFLINEUPS_OFFSET UNITYSDK_OFFSET(0x1A0147C0)
#define CLASS_1_B2C6C1C7059BA141_GET_FRIENDRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x1A014860)
#define CLASS_1_B2C6C1C7059BA141_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1A014760)
#define CLASS_1_B2C6C1C7059BA141_GET_RECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x1A014810)
#define CLASS_1_B2C6C1C7059BA141_METHOD_1_13327286B3FC8654_OFFSET UNITYSDK_OFFSET(0x1A016980)
#define CLASS_1_B2C6C1C7059BA141_METHOD_1_38445159EC82C8BF_OFFSET UNITYSDK_OFFSET(0x1A015E80)
#define CLASS_1_B2C6C1C7059BA141_METHOD_1_4CC43650BF40B6BA_OFFSET UNITYSDK_OFFSET(0x1A015110)
#define CLASS_1_B2C6C1C7059BA141_METHOD_1_5012DEB7320C101A_OFFSET UNITYSDK_OFFSET(0x1A015180)
#define CLASS_1_B2C6C1C7059BA141_METHOD_1_67484AF2A9792734_OFFSET UNITYSDK_OFFSET(0x1A015AD0)
#define CLASS_1_B2C6C1C7059BA141_METHOD_1_772C5C8D788236EA_OFFSET UNITYSDK_OFFSET(0x1A0159E0)
#define CLASS_1_B2C6C1C7059BA141_METHOD_1_D6DCD320D1CE1AA6_OFFSET UNITYSDK_OFFSET(0x1A015410)
#define CLASS_1_B2C6C1C7059BA141_METHOD_1_E530905EC9C5B4AD_OFFSET UNITYSDK_OFFSET(0x1A014C60)
#define CLASS_1_B2C6C1C7059BA141_METHOD_1_F08C663E11D75297_OFFSET UNITYSDK_OFFSET(0x1A0148B0)
#define CLASS_1_B2C6C1C7059BA141_METHOD_1_FFED4E24253DC92C_OFFSET UNITYSDK_OFFSET(0x1A015B80)
#define CLASS_1_B2C6C1C7059BA141_REFRESH_OFFSET UNITYSDK_OFFSET(0x1A014AB0)
#define CLASS_1_B2C6C1C7059BA141_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x1A0150C0)
#define CLASS_1_B2C6C1C7059BA141_SET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x1A0147B0)
#define CLASS_1_B2C6C1C7059BA141__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0149F0)

inline static constexpr unsigned int Class_1_B2C6C1C7059BA141_TypeDefinitionIndex = 63982;

class Class_1_B2C6C1C7059BA141 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlayerBriefDisplayData*>* OJOMJABLKHK; // 0x10
	::System::Collections::Generic::List_1<::Class_1_6D0244BBBB07BA13_1*>* PHMOPHKGEDJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* PHMBKFLPGKJ; // 0x20
	::System::UInt32 HKAHFHHICEN; // 0x28
	::System::Boolean _CanRefresh_k__BackingField; // 0x2C
	::System::Boolean CBFKKPNKNMP; // 0x2D

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDataReady()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_GET_ISDATAREADY_OFFSET))(this);
	}

	::System::Boolean get_CanRefresh()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_GET_CANREFRESH_OFFSET))(this);
	}

	::System::Void set_CanRefresh(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_SET_CANREFRESH_OFFSET))(this, a1);
	}

	::System::Int32 get_CountOfLineups()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_GET_COUNTOFLINEUPS_OFFSET))(this);
	}

	::RPG::Client::LineupRecommendationType get_RecommendType()
	{
		return ((::RPG::Client::LineupRecommendationType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_GET_RECOMMENDTYPE_OFFSET))(this);
	}

	::Enum_3_71AA90D596A09AC8_1 get_FriendRecommendType()
	{
		return ((::Enum_3_71AA90D596A09AC8_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_GET_FRIENDRECOMMENDTYPE_OFFSET))(this);
	}

	static ::Class_1_B2C6C1C7059BA141* Method_1_F08C663E11D75297(::System::UInt32 a1)
	{
		return ((::Class_1_B2C6C1C7059BA141*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_METHOD_1_F08C663E11D75297_OFFSET))(a1);
	}

	::RPG::Client::Promises::IPromise* Refresh()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_REFRESH_OFFSET))(this);
	}

	::System::Void Method_1_E530905EC9C5B4AD(::Class_1_A7A42CB240A0440F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A7A42CB240A0440F_1*))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_METHOD_1_E530905EC9C5B4AD_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_CLEAR_OFFSET))(this);
	}

	::System::Void ReportAction(::RPG::Client::LineupRecommendationReportActionType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LineupRecommendationReportActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_REPORTACTION_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_4CC43650BF40B6BA(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_METHOD_1_4CC43650BF40B6BA_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* GetLineupDetailInfo(::System::UInt32 a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_GETLINEUPDETAILINFO_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* Method_1_D6DCD320D1CE1AA6(::Class_1_5EBF6005039A39B5* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID, ::Class_1_5EBF6005039A39B5*))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_METHOD_1_D6DCD320D1CE1AA6_OFFSET))(this, a1);
	}

	::RPG::Client::PlayerBriefDisplayData* Method_1_772C5C8D788236EA(::System::Int32 a1)
	{
		return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_METHOD_1_772C5C8D788236EA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_83178EB088CAD885_2*>* Method_1_67484AF2A9792734(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_83178EB088CAD885_2*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_METHOD_1_67484AF2A9792734_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* Method_1_FFED4E24253DC92C(::RPG::Client::ExpeditionBattleMap* a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID, ::RPG::Client::ExpeditionBattleMap*))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_METHOD_1_FFED4E24253DC92C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_38445159EC82C8BF(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_METHOD_1_38445159EC82C8BF_OFFSET))(this, a1, a2);
	}

	::Class_1_6D0244BBBB07BA13_1* Method_1_5012DEB7320C101A(::System::Int32 a1)
	{
		return ((::Class_1_6D0244BBBB07BA13_1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_METHOD_1_5012DEB7320C101A_OFFSET))(this, a1);
	}

	::Class_1_D40936EF3BF54118_37* Method_1_13327286B3FC8654(::System::Int32 a1)
	{
		return ((::Class_1_D40936EF3BF54118_37*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B2C6C1C7059BA141_METHOD_1_13327286B3FC8654_OFFSET))(this, a1);
	}
};
