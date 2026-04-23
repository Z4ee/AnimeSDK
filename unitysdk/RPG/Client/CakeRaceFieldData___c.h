#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A88C3AAF0DD46F4C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CAKERACEFIELDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EF93D0)
#define RPG_CLIENT_CAKERACEFIELDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF9410)
#define RPG_CLIENT_CAKERACEFIELDDATA___C__GET_FIELDEFFECTLIST_B__20_0_OFFSET UNITYSDK_OFFSET(0x9EF9420)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceFieldData___c_TypeDefinitionIndex = 58052;

	class CakeRaceFieldData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::CakeRaceFieldData___c** StaticGet___9()
		{
			return (::RPG::Client::CakeRaceFieldData___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceFieldData___c_TypeDefinitionIndex)->GetStaticField(0x44730);
		}
		static ::System::Func_2<::Class_1_A88C3AAF0DD46F4C*, ::System::UInt32>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::Class_1_A88C3AAF0DD46F4C*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceFieldData___c_TypeDefinitionIndex)->GetStaticField(0x44738);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFIELDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFIELDDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_FieldEffectList_b__20_0(::Class_1_A88C3AAF0DD46F4C* pair)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_A88C3AAF0DD46F4C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFIELDDATA___C__GET_FIELDEFFECTLIST_B__20_0_OFFSET))(this, pair);
		}
	};
}
