#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_17A912F7181BCCFA;
class Class_1_23C1B7E6B450FFB8_5;
class Class_1_8D398246A70BD04C_2;
namespace RPG::Client { class GridFightBattleResultDropInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADC5110)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC5150)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__GETDROPCOINADD_B__2_0_OFFSET UNITYSDK_OFFSET(0x1ADC5160)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0x1ADC5180)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_1_OFFSET UNITYSDK_OFFSET(0x1ADC51A0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_2_OFFSET UNITYSDK_OFFSET(0x1ADC51C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleResultInfo___c_TypeDefinitionIndex = 64471;

	class GridFightBattleResultInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_8D398246A70BD04C_2*, ::System::Double>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::Class_1_8D398246A70BD04C_2*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x1C3E0);
		}
		static ::RPG::Client::GridFightBattleResultInfo___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightBattleResultInfo___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x1C3E8);
		}
		static ::System::Func_2<::RPG::Client::GridFightBattleResultDropInfo*, ::System::Int64>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightBattleResultDropInfo*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x1C3F0);
		}
		static ::System::Func_2<::Class_1_17A912F7181BCCFA*, ::System::Double>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::Class_1_17A912F7181BCCFA*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x1C3F8);
		}
		static ::System::Func_2<::Class_1_23C1B7E6B450FFB8_5*, ::System::Double>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::Class_1_23C1B7E6B450FFB8_5*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleResultInfo___c_TypeDefinitionIndex)->GetStaticField(0x1C400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int64 _GetDropCoinAdd_b__2_0(::RPG::Client::GridFightBattleResultDropInfo* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightBattleResultDropInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__GETDROPCOINADD_B__2_0_OFFSET))(this, a1);
		}

		::System::Double __Sync_b__6_0(::Class_1_17A912F7181BCCFA* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_17A912F7181BCCFA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_0_OFFSET))(this, a1);
		}

		::System::Double __Sync_b__6_1(::Class_1_23C1B7E6B450FFB8_5* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_23C1B7E6B450FFB8_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_1_OFFSET))(this, a1);
		}

		::System::Double __Sync_b__6_2(::Class_1_8D398246A70BD04C_2* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_8D398246A70BD04C_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_2_OFFSET))(this, a1);
		}
	};
}
