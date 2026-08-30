#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightCommonDetailData; }
namespace RPG::Client { class GridFightOrbData; }
namespace RPG::GameCore { class GridFightBasicBonusConfigRow; }
namespace RPG::GameCore { class GridFightCombinationBonusConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C951810)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1C9519D0)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1C951990)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ORBS_OFFSET UNITYSDK_OFFSET(0x1C9519B0)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ROLES_OFFSET UNITYSDK_OFFSET(0x1C951970)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1ADCACE0)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_PARSE_OFFSET UNITYSDK_OFFSET(0x1ADCAB10)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SETALLISDELAY_OFFSET UNITYSDK_OFFSET(0x1C951620)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1C9519E0)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1C9519A0)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ORBS_OFFSET UNITYSDK_OFFSET(0x1C9519C0)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ROLES_OFFSET UNITYSDK_OFFSET(0x1C951980)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ADCA9C0)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCA880)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__PARSEBASICBONUS_OFFSET UNITYSDK_OFFSET(0x1C9507F0)
#define RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__PARSECOMBINATIONBONUS_OFFSET UNITYSDK_OFFSET(0x1ADCABE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusParseData_TypeDefinitionIndex = 64484;

	class GridFightBonusParseData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ItemCount_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* _Roles_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>* _Orbs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* _Items_k__BackingField; // 0x28
		::System::Boolean _IsStatic; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Parse(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_PARSE_OFFSET))(this, a1);
		}

		::System::Void Parse_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_PARSE_1_OFFSET))(this, a1);
		}

		::System::Void _ParseCombinationBonus(::RPG::GameCore::GridFightCombinationBonusConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightCombinationBonusConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__PARSECOMBINATIONBONUS_OFFSET))(this, a1);
		}

		::System::Void _ParseBasicBonus(::RPG::GameCore::GridFightBasicBonusConfigRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightBasicBonusConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA__PARSEBASICBONUS_OFFSET))(this, a1, a2);
		}

		::System::Void SetAllIsDelay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SETALLISDELAY_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_CLEAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* get_Roles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ROLES_OFFSET))(this);
		}

		::System::Void set_Roles(::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ROLES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ITEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>* get_Orbs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ORBS_OFFSET))(this);
		}

		::System::Void set_Orbs(::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ORBS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ItemCount()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCount(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSPARSEDATA_SET_ITEMCOUNT_OFFSET))(this, a1);
		}
	};
}
