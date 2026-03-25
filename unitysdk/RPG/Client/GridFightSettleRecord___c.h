#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6EBEA8069CDA622C_7;
class Class_1_6EBEA8069CDA622C_8;
class Class_1_8E5A9F762BDF32F5;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x98ABEB0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x98ABEF0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__141_0_OFFSET UNITYSDK_OFFSET(0x98ABF60)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__46_0_OFFSET UNITYSDK_OFFSET(0x98ABF00)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__46_1_OFFSET UNITYSDK_OFFSET(0x98ABF20)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__46_2_OFFSET UNITYSDK_OFFSET(0x98ABF40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c_TypeDefinitionIndex = 52948;

	class GridFightSettleRecord___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightSettleRecord___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightSettleRecord___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x1A1B0);
		}
		static ::System::Func_2<::Class_1_8E5A9F762BDF32F5*, ::System::Double>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::Class_1_8E5A9F762BDF32F5*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x1A1B8);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__141_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x1A1C0);
		}
		static ::System::Func_2<::Class_1_6EBEA8069CDA622C_8*, ::System::Double>** StaticGet___9__46_1()
		{
			return (::System::Func_2<::Class_1_6EBEA8069CDA622C_8*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x1A1C8);
		}
		static ::System::Func_2<::Class_1_6EBEA8069CDA622C_7*, ::System::Double>** StaticGet___9__46_2()
		{
			return (::System::Func_2<::Class_1_6EBEA8069CDA622C_7*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x1A1D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CTOR_OFFSET))(this);
		}

		::System::Double __SyncDamageStatistics_b__46_0(::Class_1_8E5A9F762BDF32F5* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_8E5A9F762BDF32F5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__46_0_OFFSET))(this, x);
		}

		::System::Double __SyncDamageStatistics_b__46_1(::Class_1_6EBEA8069CDA622C_8* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__46_1_OFFSET))(this, x);
		}

		::System::Double __SyncDamageStatistics_b__46_2(::Class_1_6EBEA8069CDA622C_7* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__46_2_OFFSET))(this, x);
		}

		::RPG::Client::GridFightRole* _get_Roles_b__141_0(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__141_0_OFFSET))(this, x);
		}
	};
}
