#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6EBEA8069CDA622C_7;
class Class_1_6EBEA8069CDA622C_8;
class Class_1_8E5A9F762BDF32F5;
namespace RPG::Client { class GridFightBattleResultDropInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x97DC3F0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x97DC430)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__GETDROPCOINADD_B__2_0_OFFSET UNITYSDK_OFFSET(0x97DC440)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0x97DC460)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_1_OFFSET UNITYSDK_OFFSET(0x97DC480)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_2_OFFSET UNITYSDK_OFFSET(0x97DC4A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleResultInfo___c_TypeDefinitionIndex = 52311;

	class GridFightBattleResultInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_6EBEA8069CDA622C_8*, ::System::Double>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::Class_1_6EBEA8069CDA622C_8*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x12770);
		}
		static ::System::Func_2<::Class_1_6EBEA8069CDA622C_7*, ::System::Double>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::Class_1_6EBEA8069CDA622C_7*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x12778);
		}
		static ::System::Func_2<::Class_1_8E5A9F762BDF32F5*, ::System::Double>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::Class_1_8E5A9F762BDF32F5*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x12780);
		}
		static ::RPG::Client::GridFightBattleResultInfo___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightBattleResultInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x12788);
		}
		static ::System::Func_2<::RPG::Client::GridFightBattleResultDropInfo*, ::System::Int64>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightBattleResultDropInfo*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x12790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int64 _GetDropCoinAdd_b__2_0(::RPG::Client::GridFightBattleResultDropInfo* info)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightBattleResultDropInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__GETDROPCOINADD_B__2_0_OFFSET))(this, info);
		}

		::System::Double __Sync_b__6_0(::Class_1_8E5A9F762BDF32F5* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_8E5A9F762BDF32F5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_0_OFFSET))(this, x);
		}

		::System::Double __Sync_b__6_1(::Class_1_6EBEA8069CDA622C_8* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_1_OFFSET))(this, x);
		}

		::System::Double __Sync_b__6_2(::Class_1_6EBEA8069CDA622C_7* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_2_OFFSET))(this, x);
		}
	};
}
