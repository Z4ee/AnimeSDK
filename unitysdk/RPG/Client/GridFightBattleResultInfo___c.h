#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_23C1B7E6B450FFB8_7;
class Class_1_23C1B7E6B450FFB8_8;
class Class_1_F1F83A16E5B8B459_3;
namespace RPG::Client { class GridFightBattleResultDropInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA455700)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA455740)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__GETDROPCOINADD_B__2_0_OFFSET UNITYSDK_OFFSET(0xA455750)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0xA455770)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_1_OFFSET UNITYSDK_OFFSET(0xA455790)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_2_OFFSET UNITYSDK_OFFSET(0xA4557B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleResultInfo___c_TypeDefinitionIndex = 59264;

	class GridFightBattleResultInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_23C1B7E6B450FFB8_7*, ::System::Double>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::Class_1_23C1B7E6B450FFB8_7*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x18900);
		}
		static ::System::Func_2<::RPG::Client::GridFightBattleResultDropInfo*, ::System::Int64>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightBattleResultDropInfo*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x18908);
		}
		static ::RPG::Client::GridFightBattleResultInfo___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightBattleResultInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x18910);
		}
		static ::System::Func_2<::Class_1_F1F83A16E5B8B459_3*, ::System::Double>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::Class_1_F1F83A16E5B8B459_3*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x18918);
		}
		static ::System::Func_2<::Class_1_23C1B7E6B450FFB8_8*, ::System::Double>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::Class_1_23C1B7E6B450FFB8_8*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x18920);
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

		::System::Double __Sync_b__6_0(::Class_1_F1F83A16E5B8B459_3* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_0_OFFSET))(this, x);
		}

		::System::Double __Sync_b__6_1(::Class_1_23C1B7E6B450FFB8_7* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_1_OFFSET))(this, x);
		}

		::System::Double __Sync_b__6_2(::Class_1_23C1B7E6B450FFB8_8* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_2_OFFSET))(this, x);
		}
	};
}
