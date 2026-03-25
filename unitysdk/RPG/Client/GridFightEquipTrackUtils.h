#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_CALCULATECOUNT_OFFSET UNITYSDK_OFFSET(0x9811710)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_GETBASEEQUIPITEMID_OFFSET UNITYSDK_OFFSET(0x9804900)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_GETBASEROLEID_OFFSET UNITYSDK_OFFSET(0x9803FF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_GETCOUNT_OFFSET UNITYSDK_OFFSET(0x9811220)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_HASAVAILABLEEQUIP_OFFSET UNITYSDK_OFFSET(0x98119F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISALLEQUIPGOT_OFFSET UNITYSDK_OFFSET(0x9811400)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISLISTCONTAINSEQUIP_OFFSET UNITYSDK_OFFSET(0x9803E20)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISROLEEQUIPPEDWITH_1_OFFSET UNITYSDK_OFFSET(0x980EB40)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISROLEEQUIPPEDWITH_OFFSET UNITYSDK_OFFSET(0x9811080)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISROLEVARIANT_OFFSET UNITYSDK_OFFSET(0x9811010)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISVARIANT_OFFSET UNITYSDK_OFFSET(0x98047C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x9811CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackUtils_TypeDefinitionIndex = 53071;

	class GridFightEquipTrackUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsRoleVariant(::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISROLEVARIANT_OFFSET))(roleID);
		}

		static ::System::UInt32 GetBaseRoleID(::System::UInt32 roleID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_GETBASEROLEID_OFFSET))(roleID);
		}

		static ::System::Boolean IsVariant(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISVARIANT_OFFSET))(itemID);
		}

		static ::System::UInt32 GetBaseEquipItemID(::System::UInt32 itemID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_GETBASEEQUIPITEMID_OFFSET))(itemID);
		}

		static ::System::Boolean IsListContainsEquip(::System::Collections::Generic::IList_1<::System::UInt32>* equipIDList, ::System::UInt32 equipItemID, ::System::Boolean includeVariant)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISLISTCONTAINSEQUIP_OFFSET))(equipIDList, equipItemID, includeVariant);
		}

		static ::System::Boolean IsRoleEquippedWith(::RPG::Client::GridFightRole* role, ::System::UInt32 equipItemID, ::System::Boolean includeVariant)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightRole*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISROLEEQUIPPEDWITH_OFFSET))(role, equipItemID, includeVariant);
		}

		static ::System::Boolean IsRoleEquippedWith_1(::RPG::Client::GridFightRole* role, ::System::Collections::Generic::IList_1<::System::UInt32>* equipItemIDs, ::System::Int32 index, ::System::Boolean includeVariant)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISROLEEQUIPPEDWITH_1_OFFSET))(role, equipItemIDs, index, includeVariant);
		}

		static ::System::Boolean IsAllEquipGot(::RPG::Client::GridFightRole* role, ::System::Collections::Generic::IList_1<::System::UInt32>* equipItemIDs, ::System::Boolean includeVariant)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_ISALLEQUIPGOT_OFFSET))(role, equipItemIDs, includeVariant);
		}

		static ::System::Void CalculateCount(::System::Collections::Generic::IList_1<::System::UInt32>* equipItemIDs, ::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>*& ID2Count, ::System::Boolean includeVariant)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_CALCULATECOUNT_OFFSET))(equipItemIDs, ID2Count, includeVariant);
		}

		static ::System::Int32 GetCount(::System::Collections::Generic::IList_1<::System::UInt32>* equipItemIDs, ::System::Int32 index, ::System::UInt32 equipItemID)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_GETCOUNT_OFFSET))(equipItemIDs, index, equipItemID);
		}

		static ::System::Boolean HasAvailableEquip(::RPG::Client::GridFightRole* role, ::System::Collections::Generic::IList_1<::System::UInt32>* equipItemIDs, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightRole*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS_HASAVAILABLEEQUIP_OFFSET))(role, equipItemIDs, index);
		}
	};
}
