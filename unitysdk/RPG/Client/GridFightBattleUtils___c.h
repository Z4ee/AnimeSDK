#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6D3A625BE1D0B270;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA459EE0)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA459F20)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__GETDAMAGESTATISTICS_B__38_0_OFFSET UNITYSDK_OFFSET(0xA459F30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleUtils___c_TypeDefinitionIndex = 66577;

	class GridFightBattleUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::Class_1_6D3A625BE1D0B270*, ::Class_1_6D3A625BE1D0B270*, ::System::Int32>** StaticGet___9__38_0()
		{
			return (::System::Func_3<::Class_1_6D3A625BE1D0B270*, ::Class_1_6D3A625BE1D0B270*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleUtils___c_TypeDefinitionIndex)->GetStaticField(0x18D50);
		}
		static ::RPG::Client::GridFightBattleUtils___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightBattleUtils___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleUtils___c_TypeDefinitionIndex)->GetStaticField(0x18D58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetDamageStatistics_b__38_0(::Class_1_6D3A625BE1D0B270* item1, ::Class_1_6D3A625BE1D0B270* item2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_6D3A625BE1D0B270*, ::Class_1_6D3A625BE1D0B270*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__GETDAMAGESTATISTICS_B__38_0_OFFSET))(this, item1, item2);
		}
	};
}
