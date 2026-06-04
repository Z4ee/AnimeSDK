#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_CALCULATECOUNT_OFFSET UNITYSDK_OFFSET(0xBB33E80)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_GETBASEEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0xBB23990)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_GETBASEROLEID_OFFSET UNITYSDK_OFFSET(0xBB23240)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_GETCOUNT_OFFSET UNITYSDK_OFFSET(0xBB338A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_HASAVAILABLEEQUIP_OFFSET UNITYSDK_OFFSET(0xBB341F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISALLEQUIPGOT_OFFSET UNITYSDK_OFFSET(0xBB33A80)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISLISTCONTAINSEQUIP_OFFSET UNITYSDK_OFFSET(0xBB23040)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISROLEEQUIPPEDWITH_1_OFFSET UNITYSDK_OFFSET(0xBB30130)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISROLEEQUIPPEDWITH_OFFSET UNITYSDK_OFFSET(0xBB335D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISROLEVARIANT_OFFSET UNITYSDK_OFFSET(0xBB33560)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISVARIANT_OFFSET UNITYSDK_OFFSET(0xBB23810)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB34570)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xBB34560)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackUtils_TypeDefinitionIndex = 61102;

	class GridFightEquipTrackUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_WolfSliverRoleIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackUtils_TypeDefinitionIndex)->GetStaticField(0x2C2C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsRoleVariant(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISROLEVARIANT_OFFSET))(a1);
		}

		static ::System::UInt32 GetBaseRoleID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_GETBASEROLEID_OFFSET))(a1);
		}

		static ::System::Boolean IsVariant(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISVARIANT_OFFSET))(a1);
		}

		static ::System::UInt32 GetBaseEquipItemID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_GETBASEEQUIPITEMID_OFFSET))(a1);
		}

		static ::System::Boolean IsListContainsEquip(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISLISTCONTAINSEQUIP_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsRoleEquippedWith(::RPG::Client::GridFightRole* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightRole*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISROLEEQUIPPEDWITH_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsRoleEquippedWith_1(::RPG::Client::GridFightRole* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISROLEEQUIPPEDWITH_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsAllEquipGot(::RPG::Client::GridFightRole* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISALLEQUIPGOT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CalculateCount(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>*& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_CALCULATECOUNT_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetCount(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_GETCOUNT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HasAvailableEquip(::RPG::Client::GridFightRole* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_HASAVAILABLEEQUIP_OFFSET))(a1, a2, a3);
		}
	};
}
