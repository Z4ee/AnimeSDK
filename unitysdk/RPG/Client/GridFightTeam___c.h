#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5A4660)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A46A0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETBACKROLES_B__63_0_OFFSET UNITYSDK_OFFSET(0xA5A4760)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETBENCHROLES_B__65_0_OFFSET UNITYSDK_OFFSET(0xA5A47E0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETFRONTROLES_B__62_0_OFFSET UNITYSDK_OFFSET(0xA5A4700)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETMEMBERSBYTRAITID_B__33_0_OFFSET UNITYSDK_OFFSET(0xA5A46E0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDNPCS_B__69_0_OFFSET UNITYSDK_OFFSET(0xA5A48A0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDROLES_B__64_0_OFFSET UNITYSDK_OFFSET(0xA5A47C0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GETOVERCROWDROLES_B__66_0_OFFSET UNITYSDK_OFFSET(0xA5A4840)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERCOUNT_B__85_0_OFFSET UNITYSDK_OFFSET(0xA5A4980)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__28_0_OFFSET UNITYSDK_OFFSET(0xA5A46B0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__28_1_OFFSET UNITYSDK_OFFSET(0xA5A46D0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_BENCHMEMBERCOUNT_B__81_0_OFFSET UNITYSDK_OFFSET(0xA5A48C0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_FRONTROLECOUNT_B__87_0_OFFSET UNITYSDK_OFFSET(0xA5A49A0)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ISOVERCROWD_B__89_0_OFFSET UNITYSDK_OFFSET(0xA5A4A00)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_OVERCROWDMEMBERCOUNT_B__83_0_OFFSET UNITYSDK_OFFSET(0xA5A4920)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__GET_UNLOCKEXPERTROLES_B__95_0_OFFSET UNITYSDK_OFFSET(0xA5A4A70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c_TypeDefinitionIndex = 59993;

	class GridFightTeam___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19EF0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__65_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19EF8);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__64_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F00);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F08);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F10);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__89_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F18);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__83_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F20);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__85_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F28);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__87_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F30);
		}
		static ::System::Func_2<::RPG::Client::GridFightNPC*, ::System::Boolean>** StaticGet___9__69_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightNPC*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F38);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>** StaticGet___9__95_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F40);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMember*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F48);
		}
		static ::RPG::Client::GridFightTeam___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTeam___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F50);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F58);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__62_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F60);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>** StaticGet___9__81_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTeam___c_TypeDefinitionIndex)->GetStaticField(0x19F68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightGridMember* _get_AllMembers_b__28_0(::RPG::Client::GridFightGridData* x)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__28_0_OFFSET))(this, x);
		}

		::System::Boolean _get_AllMembers_b__28_1(::RPG::Client::GridFightGridMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERS_B__28_1_OFFSET))(this, x);
		}

		::RPG::Client::GridFightGridMember* _GetMembersByTraitID_b__33_0(::RPG::Client::GridFightGridData* x)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETMEMBERSBYTRAITID_B__33_0_OFFSET))(this, x);
		}

		::System::Boolean _GetFrontRoles_b__62_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETFRONTROLES_B__62_0_OFFSET))(this, x);
		}

		::System::Boolean _GetBackRoles_b__63_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETBACKROLES_B__63_0_OFFSET))(this, x);
		}

		::System::Boolean _GetOnBoardRoles_b__64_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDROLES_B__64_0_OFFSET))(this, x);
		}

		::System::Boolean _GetBenchRoles_b__65_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETBENCHROLES_B__65_0_OFFSET))(this, x);
		}

		::System::Boolean _GetOvercrowdRoles_b__66_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETOVERCROWDROLES_B__66_0_OFFSET))(this, x);
		}

		::System::Boolean _GetOnBoardNPCs_b__69_0(::RPG::Client::GridFightNPC* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GETONBOARDNPCS_B__69_0_OFFSET))(this, x);
		}

		::System::Boolean _get_BenchMemberCount_b__81_0(::RPG::Client::GridFightGridData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_BENCHMEMBERCOUNT_B__81_0_OFFSET))(this, x);
		}

		::System::Boolean _get_OvercrowdMemberCount_b__83_0(::RPG::Client::GridFightGridData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_OVERCROWDMEMBERCOUNT_B__83_0_OFFSET))(this, x);
		}

		::System::Boolean _get_AllMemberCount_b__85_0(::RPG::Client::GridFightGridData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ALLMEMBERCOUNT_B__85_0_OFFSET))(this, x);
		}

		::System::Boolean _get_FrontRoleCount_b__87_0(::RPG::Client::GridFightGridData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_FRONTROLECOUNT_B__87_0_OFFSET))(this, x);
		}

		::System::Boolean _get_IsOvercrowd_b__89_0(::RPG::Client::GridFightGridData* grid)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_ISOVERCROWD_B__89_0_OFFSET))(this, grid);
		}

		::RPG::Client::GridFightRole* _get_UnlockExpertRoles_b__95_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__GET_UNLOCKEXPERTROLES_B__95_0_OFFSET))(this, x);
		}
	};
}
