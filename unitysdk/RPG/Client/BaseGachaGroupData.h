#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaGroupType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::GameCore { class GachaGroupDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASEGACHAGROUPDATA_ADDGACHAPOOLDATA_OFFSET UNITYSDK_OFFSET(0xC8C3330)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GACHAGROUPCOMPARISON_OFFSET UNITYSDK_OFFSET(0xC8C3100)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GETSORTEDGACHAPOOLDATA_OFFSET UNITYSDK_OFFSET(0xC8C35C0)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC8C3A50)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0xC8C3A70)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GET_POOLLABELICONSELECTED_OFFSET UNITYSDK_OFFSET(0xC8C3B20)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GET_POOLLABELICON_OFFSET UNITYSDK_OFFSET(0xC8C3AC0)
#define RPG_CLIENT_BASEGACHAGROUPDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xC8C32A0)
#define RPG_CLIENT_BASEGACHAGROUPDATA_HASGACHAPOOL_OFFSET UNITYSDK_OFFSET(0xC8C3960)
#define RPG_CLIENT_BASEGACHAGROUPDATA_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0xC8C3810)
#define RPG_CLIENT_BASEGACHAGROUPDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0xC8C36C0)
#define RPG_CLIENT_BASEGACHAGROUPDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC8C3A60)
#define RPG_CLIENT_BASEGACHAGROUPDATA_SORT_OFFSET UNITYSDK_OFFSET(0xC8C31B0)
#define RPG_CLIENT_BASEGACHAGROUPDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC8C3B80)
#define RPG_CLIENT_BASEGACHAGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8C30A0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGachaGroupData_TypeDefinitionIndex = 64367;

	class BaseGachaGroupData : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>** StaticGet_GachaPoolDataComparison()
		{
			return (::System::Comparison_1<::RPG::Client::BaseGachaPoolData*>**)Il2CppClass::FromTypeDefinitionIndex(BaseGachaGroupData_TypeDefinitionIndex)->GetStaticField(0x3C70);
		}
		::RPG::GameCore::GachaGroupDataRow* _GachaGroupDataRow; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::BaseGachaPoolData*>* _GachaPoolDataList; // 0x18
		::System::UInt32 _GroupID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA__CCTOR_OFFSET))();
		}

		static ::System::Int32 GachaGroupComparison(::RPG::Client::BaseGachaGroupData* a1, ::RPG::Client::BaseGachaGroupData* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::BaseGachaGroupData*, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_GACHAGROUPCOMPARISON_OFFSET))(a1, a2);
		}

		::System::Void AddGachaPoolData(::RPG::Client::BaseGachaPoolData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_ADDGACHAPOOLDATA_OFFSET))(this, a1);
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

		::System::Boolean HasGachaPool(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_HASGACHAPOOL_OFFSET))(this, a1);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_GET_SORTID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAGROUPDATA_SET_GROUPID_OFFSET))(this, a1);
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
