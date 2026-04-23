#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaGroupType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::GameCore { class GachaGroupDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASEGACHAGROUPDATA_ADDGACHAPOOLDATA_OFFSET UNITYSDK_OFFSET(0x9DD1710)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GACHAGROUPCOMPARISON_OFFSET UNITYSDK_OFFSET(0x9DD14D0)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GETSORTEDGACHAPOOLDATA_OFFSET UNITYSDK_OFFSET(0x9DD1830)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9DD1CA0)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x9DD1CC0)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GET_POOLLABELICONSELECTED_OFFSET UNITYSDK_OFFSET(0x9DD1D70)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GET_POOLLABELICON_OFFSET UNITYSDK_OFFSET(0x9DD1D10)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x9DD1690)
#define RPG_CLIENT_BASEGACHAGROUPDATA_HASGACHAPOOL_OFFSET UNITYSDK_OFFSET(0x9DD1BC0)
#define RPG_CLIENT_BASEGACHAGROUPDATA_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0x9DD1A90)
#define RPG_CLIENT_BASEGACHAGROUPDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x9DD1960)
#define RPG_CLIENT_BASEGACHAGROUPDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9DD1CB0)
#define RPG_CLIENT_BASEGACHAGROUPDATA_SORT_OFFSET UNITYSDK_OFFSET(0x9DD1580)
#define RPG_CLIENT_BASEGACHAGROUPDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9DD1DD0)
#define RPG_CLIENT_BASEGACHAGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD1470)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGachaGroupData_TypeDefinitionIndex = 59166;

	class BaseGachaGroupData : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>** StaticGet_GachaPoolDataComparison()
		{
			return (::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>**)Il2CppClass::FromTypeDefinitionIndex(BaseGachaGroupData_TypeDefinitionIndex)->GetStaticField(0x3C740);
		}
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* _GachaPoolDataList; // 0x10
		::RPG::GameCore::GachaGroupDataRow* _GachaGroupDataRow; // 0x18
		::System::UInt32 _GroupID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA__CTOR_OFFSET))(this, groupID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA__CCTOR_OFFSET))();
		}

		static ::System::Int32 GachaGroupComparison(::RPG::Client::BaseGachaGroupData* lhs, ::RPG::Client::BaseGachaGroupData* rhs)
		{
			return ((::System::Int32(*)(::RPG::Client::BaseGachaGroupData*, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_GACHAGROUPCOMPARISON_OFFSET))(lhs, rhs);
		}

		::System::Void AddGachaPoolData(::RPG::Client::BaseGachaPoolData* baseGachaPoolData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_ADDGACHAPOOLDATA_OFFSET))(this, baseGachaPoolData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* GetSortedGachaPoolData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_GETSORTEDGACHAPOOLDATA_OFFSET))(this);
		}

		::System::Void Sort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_SORT_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_ISVALID_OFFSET))(this);
		}

		::System::Boolean IsFeatureClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_ISFEATURECLOSED_OFFSET))(this);
		}

		::System::Boolean HasGachaPool(::System::UInt32 gachaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_HASGACHAPOOL_OFFSET))(this, gachaID);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_GET_SORTID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_SET_GROUPID_OFFSET))(this, value);
		}

		::RPG::GameCore::GachaGroupType get_GroupType()
		{
			return ((::RPG::GameCore::GachaGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::String* get_PoolLabelIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_GET_POOLLABELICON_OFFSET))(this);
		}

		::System::String* get_PoolLabelIconSelected()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_GET_POOLLABELICONSELECTED_OFFSET))(this);
		}
	};
}
