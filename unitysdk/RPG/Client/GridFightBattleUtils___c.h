#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1C6D038ACA57B217;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6238C0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A623900)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__GETDAMAGESTATISTICS_B__38_0_OFFSET UNITYSDK_OFFSET(0x1A623910)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleUtils___c_TypeDefinitionIndex = 68999;

	class GridFightBattleUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::Class_1_1C6D038ACA57B217*, ::Class_1_1C6D038ACA57B217*, ::System::Int32>** StaticGet___9__38_0()
		{
			return (::System::Func_3<::Class_1_1C6D038ACA57B217*, ::Class_1_1C6D038ACA57B217*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleUtils___c_TypeDefinitionIndex)->GetStaticField(0x21C60);
		}
		static ::RPG::Client::GridFightBattleUtils___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightBattleUtils___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleUtils___c_TypeDefinitionIndex)->GetStaticField(0x21C68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetDamageStatistics_b__38_0(::Class_1_1C6D038ACA57B217* a1, ::Class_1_1C6D038ACA57B217* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_1C6D038ACA57B217*, ::Class_1_1C6D038ACA57B217*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__GETDAMAGESTATISTICS_B__38_0_OFFSET))(this, a1, a2);
		}
	};
}
