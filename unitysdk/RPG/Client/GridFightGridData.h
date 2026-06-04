#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_151;
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGRIDDATA_ADDEFFECT_OFFSET UNITYSDK_OFFSET(0xBB8F670)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_CLEAREFFECTS_OFFSET UNITYSDK_OFFSET(0xBB8F750)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GETEFFECTS_OFFSET UNITYSDK_OFFSET(0xBB8F8E0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GETEFFECT_OFFSET UNITYSDK_OFFSET(0xBB8F7F0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GETFORGE_OFFSET UNITYSDK_OFFSET(0xBB8F970)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GETNPC_OFFSET UNITYSDK_OFFSET(0xBB8F9E0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GETPROJECTION_OFFSET UNITYSDK_OFFSET(0xBB8FA50)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GETROLE_OFFSET UNITYSDK_OFFSET(0xBB8F550)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_HASITEM_OFFSET UNITYSDK_OFFSET(0xBB8FCC0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONBACK_OFFSET UNITYSDK_OFFSET(0xBB8FB60)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONBENCH_OFFSET UNITYSDK_OFFSET(0xBB8FBB0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONBOARD_OFFSET UNITYSDK_OFFSET(0xBB8F390)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONFRONT_OFFSET UNITYSDK_OFFSET(0xBB8FB10)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONOVERCROWD_OFFSET UNITYSDK_OFFSET(0xBB8FC00)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0xBB8FCD0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_PLACEMENTINDEX_OFFSET UNITYSDK_OFFSET(0xBB8FC50)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_PLACEMENT_OFFSET UNITYSDK_OFFSET(0xBB8FAC0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xBB8FCA0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_REMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0xBB8F920)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_SETMEMBER_OFFSET UNITYSDK_OFFSET(0xBB8F620)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_SET_MEMBER_OFFSET UNITYSDK_OFFSET(0xBB8FCE0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xBB8FCB0)
#define RPG_CLIENT_GRIDFIGHTGRIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8F5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridData_TypeDefinitionIndex = 60615;

	class GridFightGridData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_151*>* _Effects; // 0x10
		::RPG::Client::GridFightGridMember* _Member_k__BackingField; // 0x18
		::System::UInt32 _PosIndex_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean SetMember(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_SETMEMBER_OFFSET))(this, a1);
		}

		::System::Void AddEffect(::Class_1_43BD383C98B4C0C5_151* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_151*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_ADDEFFECT_OFFSET))(this, a1);
		}

		::System::Void ClearEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_CLEAREFFECTS_OFFSET))(this);
		}

		::Class_1_43BD383C98B4C0C5_151* GetEffect(::RPG::Client::GridFightGridEffectType a1)
		{
			return ((::Class_1_43BD383C98B4C0C5_151*(*)(::PVOID, ::RPG::Client::GridFightGridEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GETEFFECT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_151*>* GetEffects()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_151*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GETEFFECTS_OFFSET))(this);
		}

		::RPG::Client::GridFightGridMember* RemoveMember()
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_REMOVEMEMBER_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GETROLE_OFFSET))(this);
		}

		::RPG::Client::GridFightForgeItemData* GetForge()
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GETFORGE_OFFSET))(this);
		}

		::RPG::Client::GridFightNPC* GetNPC()
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GETNPC_OFFSET))(this);
		}

		::RPG::Client::GridFightProjection* GetProjection()
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GETPROJECTION_OFFSET))(this);
		}

		::RPG::Client::GridFightPlacementType get_Placement()
		{
			return ((::RPG::Client::GridFightPlacementType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_PLACEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsOnFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONFRONT_OFFSET))(this);
		}

		::System::Boolean get_IsOnBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONBACK_OFFSET))(this);
		}

		::System::Boolean get_IsOnBoard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONBOARD_OFFSET))(this);
		}

		::System::Boolean get_IsOnBench()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONBENCH_OFFSET))(this);
		}

		::System::Boolean get_IsOnOvercrowd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_ISONOVERCROWD_OFFSET))(this);
		}

		::System::UInt32 get_PlacementIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_PLACEMENTINDEX_OFFSET))(this);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_SET_POSINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_HasItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_HASITEM_OFFSET))(this);
		}

		::RPG::Client::GridFightGridMember* get_Member()
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_GET_MEMBER_OFFSET))(this);
		}

		::System::Void set_Member(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDDATA_SET_MEMBER_OFFSET))(this, a1);
		}
	};
}
