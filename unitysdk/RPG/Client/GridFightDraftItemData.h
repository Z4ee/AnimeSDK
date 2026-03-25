#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_32;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x97F2180)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_CANROLEUPDATE_OFFSET UNITYSDK_OFFSET(0x97F2AE0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_EQUIPLIST_OFFSET UNITYSDK_OFFSET(0x97F2E00)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x97F2AC0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISMULTIRECOMMEND_OFFSET UNITYSDK_OFFSET(0x97F2D80)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x97F2AF0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0x97F2B50)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISTRAITTRACKED_OFFSET UNITYSDK_OFFSET(0x97F2C20)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x97F2DE0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_EQUIPLIST_OFFSET UNITYSDK_OFFSET(0x97F2E10)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x97F2AD0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_ROLE_OFFSET UNITYSDK_OFFSET(0x97F2DF0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA__CHECKCANROLEUPDATE_OFFSET UNITYSDK_OFFSET(0x97F2800)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x97F27F0)
#define RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___CHECKCANROLEUPDATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x97F2E20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDraftItemData_TypeDefinitionIndex = 52436;

	class GridFightDraftItemData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _EquipList_k__BackingField; // 0x10
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x18
		::System::Int32 _Index_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightDraftItemData* Create(::Class_1_735612C94F558EAE_32* info, ::System::Int32 index)
		{
			return ((::RPG::Client::GridFightDraftItemData*(*)(::Class_1_735612C94F558EAE_32*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_CREATE_OFFSET))(info, index);
		}

		::System::Boolean _CheckCanRoleUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA__CHECKCANROLEUPDATE_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_INDEX_OFFSET))(this, value);
		}

		::System::Boolean get_CanRoleUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_CANROLEUPDATE_OFFSET))(this);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Boolean get_IsReferenced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISREFERENCED_OFFSET))(this);
		}

		::System::Boolean get_IsTraitTracked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISTRAITTRACKED_OFFSET))(this);
		}

		::System::Boolean get_IsMultiRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ISMULTIRECOMMEND_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_ROLE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_EquipList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_GET_EQUIPLIST_OFFSET))(this);
		}

		::System::Void set_EquipList(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA_SET_EQUIPLIST_OFFSET))(this, value);
		}

		::System::Boolean __CheckCanRoleUpdate_b__1_0(::RPG::Client::GridFightDraftItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightDraftItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDRAFTITEMDATA___CHECKCANROLEUPDATE_B__1_0_OFFSET))(this, x);
		}
	};
}
