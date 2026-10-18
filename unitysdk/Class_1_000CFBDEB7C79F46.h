#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_8AB4FEE29EA7112F;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_000CFBDEB7C79F46_GET_BONUSREWARDCOINLIST_OFFSET UNITYSDK_OFFSET(0x1661DE20)
#define CLASS_1_000CFBDEB7C79F46_GET_BONUSREWARDEXPLIST_OFFSET UNITYSDK_OFFSET(0x1661DE30)
#define CLASS_1_000CFBDEB7C79F46_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0x1661DDC0)
#define CLASS_1_000CFBDEB7C79F46_GET_CUSTOMERACTORID_OFFSET UNITYSDK_OFFSET(0x1661DE40)
#define CLASS_1_000CFBDEB7C79F46_GET_CUSTOMERCMT_OFFSET UNITYSDK_OFFSET(0x1661DE70)
#define CLASS_1_000CFBDEB7C79F46_GET_CUSTOMERPRAISECRAFT_OFFSET UNITYSDK_OFFSET(0x1661DE80)
#define CLASS_1_000CFBDEB7C79F46_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1661DE60)
#define CLASS_1_000CFBDEB7C79F46_GET_ID_OFFSET UNITYSDK_OFFSET(0x1661DDD0)
#define CLASS_1_000CFBDEB7C79F46_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1661DE50)
#define CLASS_1_000CFBDEB7C79F46_GET_PASSREWARDCOIN_OFFSET UNITYSDK_OFFSET(0x1661DE00)
#define CLASS_1_000CFBDEB7C79F46_GET_PASSREWARDEXP_OFFSET UNITYSDK_OFFSET(0x1661DE10)
#define CLASS_1_000CFBDEB7C79F46_GET_REQUIREMENTID_OFFSET UNITYSDK_OFFSET(0x1661DDF0)
#define CLASS_1_000CFBDEB7C79F46_GET_UNLOCKCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1661DDE0)
#define CLASS_1_000CFBDEB7C79F46__CTOR_OFFSET UNITYSDK_OFFSET(0x1661DE90)

inline static constexpr unsigned int Class_1_000CFBDEB7C79F46_TypeDefinitionIndex = 80133;

class Class_1_000CFBDEB7C79F46 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BonusRewardCoinList_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BonusRewardExpList_k__BackingField; // 0x18
	::System::UInt32 _CustomerActorID_k__BackingField; // 0x20
	::System::UInt32 _Level_k__BackingField; // 0x24
	::System::UInt32 _RequirementID_k__BackingField; // 0x28
	::System::UInt32 _UnlockConditionID_k__BackingField; // 0x2C
	::RPG::Client::TextID _CustomerPraiseCraft_k__BackingField; // 0x30
	::System::Int32 _CacheKey_k__BackingField; // 0x40
	::System::UInt32 _PassRewardCoin_k__BackingField; // 0x44
	::RPG::Client::TextID _CustomerCmt_k__BackingField; // 0x48
	::System::UInt32 _ID_k__BackingField; // 0x58
	::System::UInt32 _PassRewardExp_k__BackingField; // 0x5C
	::RPG::Client::TextID _Desc_k__BackingField; // 0x60

	::System::Void _ctor(::Class_1_8AB4FEE29EA7112F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8AB4FEE29EA7112F*))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46_GET_CACHEKEY_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46_GET_ID_OFFSET))(this);
	}

	::System::UInt32 get_UnlockConditionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46_GET_UNLOCKCONDITIONID_OFFSET))(this);
	}

	::System::UInt32 get_RequirementID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46_GET_REQUIREMENTID_OFFSET))(this);
	}

	::System::UInt32 get_PassRewardCoin()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46_GET_PASSREWARDCOIN_OFFSET))(this);
	}

	::System::UInt32 get_PassRewardExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46_GET_PASSREWARDEXP_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BonusRewardCoinList()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46_GET_BONUSREWARDCOINLIST_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BonusRewardExpList()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46_GET_BONUSREWARDEXPLIST_OFFSET))(this);
	}

	::System::UInt32 get_CustomerActorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46_GET_CUSTOMERACTORID_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46_GET_LEVEL_OFFSET))(this);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46_GET_DESC_OFFSET))(this);
	}

	::RPG::Client::TextID get_CustomerCmt()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46_GET_CUSTOMERCMT_OFFSET))(this);
	}

	::RPG::Client::TextID get_CustomerPraiseCraft()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_000CFBDEB7C79F46_GET_CUSTOMERPRAISECRAFT_OFFSET))(this);
	}
};
