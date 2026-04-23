#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameFormation; }
namespace RPG::Client { class GridFightGameRefData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4C37C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA4C3800)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FAVOURSORTEDREFS_B__34_0_OFFSET UNITYSDK_OFFSET(0xA4C3850)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FIRSTEMPTYFORMATION_B__31_0_OFFSET UNITYSDK_OFFSET(0xA4C3830)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FORMATIONCOUNT_B__29_0_OFFSET UNITYSDK_OFFSET(0xA4C3810)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__REPORTAPPLIEDGAMEREF_B__87_0_OFFSET UNITYSDK_OFFSET(0xA4C3910)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__SYNC_B__66_0_OFFSET UNITYSDK_OFFSET(0xA4C3880)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLPORTALRECOMMENDDATA_B__91_0_OFFSET UNITYSDK_OFFSET(0xA4C3A80)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLPORTALRECOMMENDDATA_B__91_1_OFFSET UNITYSDK_OFFSET(0xA4C3B60)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLRECOMMENDDATA_B__90_0_OFFSET UNITYSDK_OFFSET(0xA4C3960)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLRECOMMENDDATA_B__90_1_OFFSET UNITYSDK_OFFSET(0xA4C3A40)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___READNECESSARYDATA_B__69_0_OFFSET UNITYSDK_OFFSET(0xA4C38A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c_TypeDefinitionIndex = 59551;

	class GridFightGameRef___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightGameFormation*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameFormation*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x120B0);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>** StaticGet___9__91_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x120B8);
		}
		static ::RPG::Client::GridFightGameRef___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameRef___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x120C0);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Single>** StaticGet___9__91_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x120C8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Boolean>** StaticGet___9__69_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x120D0);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x120D8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameFormation*, ::System::Boolean>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameFormation*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x120E0);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Single>** StaticGet___9__90_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x120E8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameFormation*, ::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameFormation*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x120F0);
		}
		static ::System::Func_2<::RPG::Client::MongoObjectId, ::System::String*>** StaticGet___9__87_0()
		{
			return (::System::Func_2<::RPG::Client::MongoObjectId, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x120F8);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>** StaticGet___9__90_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRef___c_TypeDefinitionIndex)->GetStaticField(0x12100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_FormationCount_b__29_0(::RPG::Client::GridFightGameFormation* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FORMATIONCOUNT_B__29_0_OFFSET))(this, x);
		}

		::System::Boolean _get_FirstEmptyFormation_b__31_0(::RPG::Client::GridFightGameFormation* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FIRSTEMPTYFORMATION_B__31_0_OFFSET))(this, x);
		}

		::System::Int32 _get_FavourSortedRefs_b__34_0(::RPG::Client::GridFightGameRefData* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FAVOURSORTEDREFS_B__34_0_OFFSET))(this, x);
		}

		::System::Boolean _Sync_b__66_0(::RPG::Client::GridFightGameFormation* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__SYNC_B__66_0_OFFSET))(this, x);
		}

		::System::Boolean __ReadNecessaryData_b__69_0(::RPG::Client::GridFightGameRefData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___READNECESSARYDATA_B__69_0_OFFSET))(this, x);
		}

		::System::String* _ReportAppliedGameRef_b__87_0(::RPG::Client::MongoObjectId x)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__REPORTAPPLIEDGAMEREF_B__87_0_OFFSET))(this, x);
		}

		::System::Int32 __GetAllRecommendData_b__90_0(::RPG::Client::GridFightGameRefData* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLRECOMMENDDATA_B__90_0_OFFSET))(this, x);
		}

		::System::Single __GetAllRecommendData_b__90_1(::RPG::Client::GridFightGameRefData* x)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLRECOMMENDDATA_B__90_1_OFFSET))(this, x);
		}

		::System::Int32 __GetAllPortalRecommendData_b__91_0(::RPG::Client::GridFightGameRefData* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLPORTALRECOMMENDDATA_B__91_0_OFFSET))(this, x);
		}

		::System::Single __GetAllPortalRecommendData_b__91_1(::RPG::Client::GridFightGameRefData* x)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLPORTALRECOMMENDDATA_B__91_1_OFFSET))(this, x);
		}
	};
}
